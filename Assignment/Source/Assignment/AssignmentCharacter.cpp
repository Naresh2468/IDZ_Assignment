// Copyright Epic Games, Inc. All Rights Reserved.

#include "AssignmentCharacter.h"
#include "Engine/LocalPlayer.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "GameFramework/Controller.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "InputActionValue.h"

DEFINE_LOG_CATEGORY(LogTemplateCharacter);

//////////////////////////////////////////////////////////////////////////
// AAssignmentCharacter

AAssignmentCharacter::AAssignmentCharacter()
{
	// Set size for collision capsule
	GetCapsuleComponent()->InitCapsuleSize(42.f, 96.0f);

	// Don't rotate when the controller rotates. Let that just affect the camera.
	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;

	// Configure character movement
	GetCharacterMovement()->bOrientRotationToMovement = true; // Character moves in the direction of input...	
	GetCharacterMovement()->RotationRate = FRotator(0.0f, 500.0f, 0.0f); // ...at this rotation rate

	// Note: For faster iteration times these variables, and many more, can be tweaked in the Character Blueprint
	// instead of recompiling to adjust them
	GetCharacterMovement()->JumpZVelocity = 700.f;
	GetCharacterMovement()->AirControl = 0.35f;
	GetCharacterMovement()->MaxWalkSpeed = 500.f;
	GetCharacterMovement()->MinAnalogWalkSpeed = 20.f;
	GetCharacterMovement()->BrakingDecelerationWalking = 2000.f;
	GetCharacterMovement()->BrakingDecelerationFalling = 1500.0f;

	// Create a camera boom (pulls in towards the player if there is a collision)
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(RootComponent);
	InteractPoint = CreateDefaultSubobject<USceneComponent>(TEXT("Interact"));
	InteractPoint->SetupAttachment(RootComponent);
	CameraBoom->TargetArmLength = 400.0f; // The camera follows at this distance behind the character	
	CameraBoom->bUsePawnControlRotation = true; // Rotate the arm based on the controller

	// Create a follow camera
	FollowCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FollowCamera"));
	FollowCamera->SetupAttachment(CameraBoom, USpringArmComponent::SocketName); // Attach the camera to the end of the boom and let the boom adjust to match the controller orientation
	FollowCamera->bUsePawnControlRotation = false; // Camera does not rotate relative to arm
	SphereRadius = 60.0f; 
	canMove = true;
	CurrentMovementState.Add(EMovementState::Walking);
	// Note: The skeletal mesh and anim blueprint references on the Mesh component (inherited from Character) 
	// are set in the derived blueprint asset named ThirdPersonCharacter (to avoid direct content references in C++)
}

//////////////////////////////////////////////////////////////////////////
// Input

void AAssignmentCharacter::NotifyControllerChanged()
{
	Super::NotifyControllerChanged();

	// Add Input Mapping Context
	if (APlayerController* PlayerController = Cast<APlayerController>(Controller))
	{
		if (UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(PlayerController->GetLocalPlayer()))
		{
			Subsystem->AddMappingContext(DefaultMappingContext, 0);
		}
	}
}

void AAssignmentCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	// Set up all action bindings
	if (UEnhancedInputComponent* EnhancedInputComponent = Cast<UEnhancedInputComponent>(PlayerInputComponent)) {


		EnhancedInputComponent->BindAction(JumpAction, ETriggerEvent::Started, this, &ACharacter::Jump);// Jumping

		EnhancedInputComponent->BindAction(JumpAction, ETriggerEvent::Completed, this, &ACharacter::StopJumping); //Stop Jumping

		EnhancedInputComponent->BindAction(MoveAction, ETriggerEvent::Triggered, this, &AAssignmentCharacter::Move);//Moving

		EnhancedInputComponent->BindAction(LookAction, ETriggerEvent::Triggered, this, &AAssignmentCharacter::Look);// Looking

		EnhancedInputComponent->BindAction(PlayerSprint, ETriggerEvent::Triggered, this, &AAssignmentCharacter::F_PlayerSprint); //Sprinting

		EnhancedInputComponent->BindAction(PlayerCrouch, ETriggerEvent::Triggered, this, &AAssignmentCharacter::F_PlayerCrouch); //Crouching
	
		EnhancedInputComponent->BindAction(PlayerInteract, ETriggerEvent::Started, this, &AAssignmentCharacter::F_Interact);
	
		EnhancedInputComponent->BindAction(PrimaryWeapon, ETriggerEvent::Started, this, &AAssignmentCharacter::F_PrimaryEquipped);

		EnhancedInputComponent->BindAction(MeleeAttack, ETriggerEvent::Started, this, &AAssignmentCharacter::F_SwordAttack);
	}
	else
	{
		//UE_LOG(LogTemplateCharacter, Error, TEXT("'%s' Failed to find an Enhanced Input component! This template is built to use the Enhanced Input system. If you intend to use the legacy system, then you will need to update this C++ file."), *GetNameSafe(this));
	}
}

void AAssignmentCharacter::Move(const FInputActionValue& Value)
{
	// input is a Vector2D
	FVector2D MovementVector = Value.Get<FVector2D>();

	if (Controller != nullptr && canMove)
	{
		// find out which way is forward
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation(0, Rotation.Yaw, 0);

		// get forward vector
		const FVector ForwardDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);

		// get right vector 
		const FVector RightDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);

		// add movement 
		AddMovementInput(ForwardDirection, MovementVector.Y);
		AddMovementInput(RightDirection, MovementVector.X);
		
	}
}

void AAssignmentCharacter::Look(const FInputActionValue& Value)
{
	// input is a Vector2D
	FVector2D LookAxisVector = Value.Get<FVector2D>();

	if (Controller != nullptr)
	{
		AddControllerYawInput(LookAxisVector.X);
		AddControllerPitchInput(LookAxisVector.Y);
		F_TurnInPlace();
	}
}
void AAssignmentCharacter::F_PlayerCrouch(const FInputActionValue& Value)
{
	bool bIsCrouch = Value.Get<bool>();

	if (bIsCrouch)
	{
		int32 CurrentValue = CurrentMovementState.Num(); // Append at next index
		SetArrayElement(CurrentValue, EMovementState::Crouching, true);
		
	}
	else if (!bIsCrouch && CurrentMovementState.Contains(EMovementState::Crouching))
	{
		CurrentMovementState.Remove(EMovementState::Crouching);
	}
	F_Movement(); // Update movement state

}

void AAssignmentCharacter::F_PlayerSprint(const FInputActionValue& Value)
{
	bool bIsSprinting = Value.Get<bool>();

	if (bIsSprinting && !CurrentMovementState.Contains(EMovementState::Crouching))
	{
		// Add Running at the next index when key is pressed
		int32 CurrentValue = CurrentMovementState.Num(); // Next index (append)
		SetArrayElement(CurrentValue, EMovementState::Running, true);
	}
	else if (!bIsSprinting)
	{
		CurrentMovementState.Remove(EMovementState::Running);
	}
	F_Movement(); // Update movement based on new state
}

void AAssignmentCharacter::SetArrayElement(int32 Index, EMovementState NewValue, bool bSizeToFit)
{
	if (Index < 0)
	{
		//UE_LOG(LogTemp, Warning, TEXT("SetArrayElement: Index %d is invalid (negative)."), Index);
		return;
	}
	if (Index < CurrentMovementState.Num())
	{
		CurrentMovementState[Index] = NewValue;
	}
	else if (bSizeToFit)
	{
		int32 ElementsToAdd = Index - CurrentMovementState.Num() + 1;
		CurrentMovementState.AddZeroed(ElementsToAdd);
		CurrentMovementState[Index] = NewValue;
	}
	else
	{
		/*UE_LOG(LogTemp, Warning, TEXT("SetArrayElement: Index %d out of bounds (array size %d), and bSizeToFit is false."), Index, CurrentMovementState.Num());*/
		return;
	}
}

void AAssignmentCharacter::F_Movement()
{
	if (CurrentMovementState.Num() > 0)
	{
		if (CheckState(EMovementState::Crouching))
		{
			Crouch();
		}
		else
		{
			UnCrouch();
		}
		F_UpdateSpeedMovement();
	}
}



bool AAssignmentCharacter::CheckState(EMovementState state)
{
	if (CurrentMovementState.Num() > 0)
	{
		return CurrentMovementState.Last() == state;
	}
	return false; // Fixed missing return
}

void AAssignmentCharacter::F_UpdateSpeedMovement()
{
	if (CurrentMovementState.Num() == 0)
	{
		GetCharacterMovement()->MaxWalkSpeed = IdleSpeed;
		return;
	}
	EMovementState LastState = CurrentMovementState.Last();
	switch (LastState)// Set speed based on the last state
	{
	case EMovementState::Idle:
		GetCharacterMovement()->MaxWalkSpeed = IdleSpeed;
		break;
	case EMovementState::Walking:
		GetCharacterMovement()->MaxWalkSpeed = WalkSpeed;
		break;
	case EMovementState::Running:
		GetCharacterMovement()->MaxWalkSpeed = RunSpeed;
		break;
	case EMovementState::Crouching:
		GetCharacterMovement()->MaxWalkSpeed = CrouchSpeed;
		break;
	default:
		GetCharacterMovement()->MaxWalkSpeed = WalkSpeed; // Fallback
		break;
	}

	//UE_LOG(LogTemp, Log, TEXT("Movement speed set to %f based on state %d"),
	//	GetCharacterMovement()->MaxWalkSpeed, static_cast<int32>(LastState)); //Checking state.
}

void AAssignmentCharacter::F_Interact()
{
	FVector InitialPoint = InteractPoint->GetComponentLocation();
	FVector ForwardVector =  FollowCamera->GetForwardVector();
	FVector EndPoint = InitialPoint + (ForwardVector * InteractDistance);
	FCollisionQueryParams QueryParams;
	QueryParams.AddIgnoredActor(GetOwner());
	FCollisionObjectQueryParams ObjectParams(ECollisionChannel::ECC_WorldStatic);
	FHitResult HitResult;

	bool bHit = GetWorld()->SweepSingleByObjectType(
		HitResult,              
		InitialPoint,           
		EndPoint,               
		FQuat::Identity,        
		ObjectParams,           
		FCollisionShape::MakeSphere(SphereRadius), 
		QueryParams            
	);
	if (bHit)
	{
		// Access the hit object
		AActor* HitActor = HitResult.GetActor();
		if (HitActor)
		{
			/*UE_LOG(LogTemp, Log, TEXT("Hit Actor: %s"), *HitActor->GetName());*/
			F_InteractObjects(HitActor);
		}
	}
}