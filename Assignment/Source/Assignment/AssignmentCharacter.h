// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Logging/LogMacros.h"
#include "AssignmentCharacter.generated.h"

class USpringArmComponent;
class UCameraComponent;
class UInputMappingContext;
class UInputAction;
struct FInputActionValue;

DECLARE_LOG_CATEGORY_EXTERN(LogTemplateCharacter, Log, All);

UENUM(BlueprintType)
enum class EMovementState : uint8
{
	Idle UMETA(DisplayName = "Idle"),
	Walking UMETA(DisplayName = "Walking"),
	Running UMETA(DisplayName = "Running"),
	Crouching UMETA(DisplayName = "Crouching")
};


UCLASS(config=Game)
class AAssignmentCharacter : public ACharacter
{
	GENERATED_BODY()


#pragma region C O M P O N E N T S

	/** Camera boom positioning the camera behind the character */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	USpringArmComponent* CameraBoom;

	/** Follow camera */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	UCameraComponent* FollowCamera;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	USceneComponent* InteractPoint;

#pragma endregion

#pragma region I N P U T 

	/** MappingContext */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputMappingContext* DefaultMappingContext;

	/** Jump Input Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputAction* JumpAction;

	/** Move Input Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputAction* MoveAction;

	/** Look Input Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputAction* LookAction;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputAction* PlayerSprint;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputAction* PlayerCrouch;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputAction* PlayerInteract;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputAction* PrimaryWeapon;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputAction* MeleeAttack;

#pragma endregion


public:
	AAssignmentCharacter();
	
	// Current movement state
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Player | Movement") // Player state will change based on enum.
	TArray<EMovementState> CurrentMovementState;


	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player | Movement | Speed")
	float IdleSpeed = 0.0f; // No movement when idle

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player | Movement | Speed")
	float WalkSpeed = 250.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player | Movement | Speed")
	float RunSpeed = 500.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player | Movement | Speed")
	float CrouchSpeed = 240.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player | InteractComponent ")
	float InteractDistance = 400.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player | InteractComponent ")
	float SphereRadius = 60.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player | InteractComponent ")
	bool canMove;



	UFUNCTION()
	void F_PlayerSprint(const FInputActionValue& Value);

	UFUNCTION()
	void F_PlayerCrouch(const FInputActionValue& Value);

	UFUNCTION()
	void F_UpdateSpeedMovement();

	UFUNCTION()
	void F_Movement();

	UFUNCTION()
	void F_Interact();

	UFUNCTION(BlueprintImplementableEvent)
	void F_InteractObjects(AActor* result);

	UFUNCTION(BlueprintImplementableEvent)
	void F_TurnInPlace();

	UFUNCTION(BlueprintImplementableEvent)
	void F_PrimaryEquipped();

	UFUNCTION(BlueprintImplementableEvent)
	void F_SwordAttack();

	UFUNCTION()
	bool CheckState(EMovementState state);

protected:

	/** Called for movement input */
	void Move(const FInputActionValue& Value);

	/** Called for looking input */
	void Look(const FInputActionValue& Value);
	

	UFUNCTION(BlueprintCallable, Category = "Movement")
	void SetArrayElement(int32 Index, EMovementState NewValue, bool bSizeToFit = false);

protected:

	virtual void NotifyControllerChanged() override;

	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

public:
	/** Returns CameraBoom subobject **/
	FORCEINLINE class USpringArmComponent* GetCameraBoom() const { return CameraBoom; }
	/** Returns FollowCamera subobject **/
	FORCEINLINE class UCameraComponent* GetFollowCamera() const { return FollowCamera; }
};

