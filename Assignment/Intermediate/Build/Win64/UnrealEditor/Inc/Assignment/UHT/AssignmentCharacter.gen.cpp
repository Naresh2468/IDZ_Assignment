// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Assignment/AssignmentCharacter.h"
#include "EnhancedInput/Public/InputActionValue.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAssignmentCharacter() {}

// Begin Cross Module References
ASSIGNMENT_API UClass* Z_Construct_UClass_AAssignmentCharacter();
ASSIGNMENT_API UClass* Z_Construct_UClass_AAssignmentCharacter_NoRegister();
ASSIGNMENT_API UEnum* Z_Construct_UEnum_Assignment_EMovementState();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
ENHANCEDINPUT_API UScriptStruct* Z_Construct_UScriptStruct_FInputActionValue();
UPackage* Z_Construct_UPackage__Script_Assignment();
// End Cross Module References

// Begin Enum EMovementState
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMovementState;
static UEnum* EMovementState_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EMovementState.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EMovementState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Assignment_EMovementState, (UObject*)Z_Construct_UPackage__Script_Assignment(), TEXT("EMovementState"));
	}
	return Z_Registration_Info_UEnum_EMovementState.OuterSingleton;
}
template<> ASSIGNMENT_API UEnum* StaticEnum<EMovementState>()
{
	return EMovementState_StaticEnum();
}
struct Z_Construct_UEnum_Assignment_EMovementState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Crouching.DisplayName", "Crouching" },
		{ "Crouching.Name", "EMovementState::Crouching" },
		{ "Idle.DisplayName", "Idle" },
		{ "Idle.Name", "EMovementState::Idle" },
		{ "ModuleRelativePath", "AssignmentCharacter.h" },
		{ "Running.DisplayName", "Running" },
		{ "Running.Name", "EMovementState::Running" },
		{ "Walking.DisplayName", "Walking" },
		{ "Walking.Name", "EMovementState::Walking" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EMovementState::Idle", (int64)EMovementState::Idle },
		{ "EMovementState::Walking", (int64)EMovementState::Walking },
		{ "EMovementState::Running", (int64)EMovementState::Running },
		{ "EMovementState::Crouching", (int64)EMovementState::Crouching },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Assignment_EMovementState_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Assignment,
	nullptr,
	"EMovementState",
	"EMovementState",
	Z_Construct_UEnum_Assignment_EMovementState_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Assignment_EMovementState_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Assignment_EMovementState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Assignment_EMovementState_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Assignment_EMovementState()
{
	if (!Z_Registration_Info_UEnum_EMovementState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMovementState.InnerSingleton, Z_Construct_UEnum_Assignment_EMovementState_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EMovementState.InnerSingleton;
}
// End Enum EMovementState

// Begin Class AAssignmentCharacter Function CheckState
struct Z_Construct_UFunction_AAssignmentCharacter_CheckState_Statics
{
	struct AssignmentCharacter_eventCheckState_Parms
	{
		EMovementState state;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AssignmentCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_state_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_state;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AAssignmentCharacter_CheckState_Statics::NewProp_state_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AAssignmentCharacter_CheckState_Statics::NewProp_state = { "state", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AssignmentCharacter_eventCheckState_Parms, state), Z_Construct_UEnum_Assignment_EMovementState, METADATA_PARAMS(0, nullptr) }; // 2331931994
void Z_Construct_UFunction_AAssignmentCharacter_CheckState_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AssignmentCharacter_eventCheckState_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AAssignmentCharacter_CheckState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AssignmentCharacter_eventCheckState_Parms), &Z_Construct_UFunction_AAssignmentCharacter_CheckState_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAssignmentCharacter_CheckState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAssignmentCharacter_CheckState_Statics::NewProp_state_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAssignmentCharacter_CheckState_Statics::NewProp_state,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAssignmentCharacter_CheckState_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAssignmentCharacter_CheckState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAssignmentCharacter_CheckState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAssignmentCharacter, nullptr, "CheckState", nullptr, nullptr, Z_Construct_UFunction_AAssignmentCharacter_CheckState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAssignmentCharacter_CheckState_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAssignmentCharacter_CheckState_Statics::AssignmentCharacter_eventCheckState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAssignmentCharacter_CheckState_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAssignmentCharacter_CheckState_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AAssignmentCharacter_CheckState_Statics::AssignmentCharacter_eventCheckState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAssignmentCharacter_CheckState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAssignmentCharacter_CheckState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAssignmentCharacter::execCheckState)
{
	P_GET_ENUM(EMovementState,Z_Param_state);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CheckState(EMovementState(Z_Param_state));
	P_NATIVE_END;
}
// End Class AAssignmentCharacter Function CheckState

// Begin Class AAssignmentCharacter Function F_Interact
struct Z_Construct_UFunction_AAssignmentCharacter_F_Interact_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AssignmentCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAssignmentCharacter_F_Interact_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAssignmentCharacter, nullptr, "F_Interact", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAssignmentCharacter_F_Interact_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAssignmentCharacter_F_Interact_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AAssignmentCharacter_F_Interact()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAssignmentCharacter_F_Interact_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAssignmentCharacter::execF_Interact)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->F_Interact();
	P_NATIVE_END;
}
// End Class AAssignmentCharacter Function F_Interact

// Begin Class AAssignmentCharacter Function F_InteractObjects
struct AssignmentCharacter_eventF_InteractObjects_Parms
{
	AActor* result;
};
static const FName NAME_AAssignmentCharacter_F_InteractObjects = FName(TEXT("F_InteractObjects"));
void AAssignmentCharacter::F_InteractObjects(AActor* result)
{
	AssignmentCharacter_eventF_InteractObjects_Parms Parms;
	Parms.result=result;
	UFunction* Func = FindFunctionChecked(NAME_AAssignmentCharacter_F_InteractObjects);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AAssignmentCharacter_F_InteractObjects_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AssignmentCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAssignmentCharacter_F_InteractObjects_Statics::NewProp_result = { "result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AssignmentCharacter_eventF_InteractObjects_Parms, result), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAssignmentCharacter_F_InteractObjects_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAssignmentCharacter_F_InteractObjects_Statics::NewProp_result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAssignmentCharacter_F_InteractObjects_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAssignmentCharacter_F_InteractObjects_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAssignmentCharacter, nullptr, "F_InteractObjects", nullptr, nullptr, Z_Construct_UFunction_AAssignmentCharacter_F_InteractObjects_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAssignmentCharacter_F_InteractObjects_Statics::PropPointers), sizeof(AssignmentCharacter_eventF_InteractObjects_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAssignmentCharacter_F_InteractObjects_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAssignmentCharacter_F_InteractObjects_Statics::Function_MetaDataParams) };
static_assert(sizeof(AssignmentCharacter_eventF_InteractObjects_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAssignmentCharacter_F_InteractObjects()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAssignmentCharacter_F_InteractObjects_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class AAssignmentCharacter Function F_InteractObjects

// Begin Class AAssignmentCharacter Function F_Movement
struct Z_Construct_UFunction_AAssignmentCharacter_F_Movement_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AssignmentCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAssignmentCharacter_F_Movement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAssignmentCharacter, nullptr, "F_Movement", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAssignmentCharacter_F_Movement_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAssignmentCharacter_F_Movement_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AAssignmentCharacter_F_Movement()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAssignmentCharacter_F_Movement_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAssignmentCharacter::execF_Movement)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->F_Movement();
	P_NATIVE_END;
}
// End Class AAssignmentCharacter Function F_Movement

// Begin Class AAssignmentCharacter Function F_PlayerCrouch
struct Z_Construct_UFunction_AAssignmentCharacter_F_PlayerCrouch_Statics
{
	struct AssignmentCharacter_eventF_PlayerCrouch_Parms
	{
		FInputActionValue Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AssignmentCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAssignmentCharacter_F_PlayerCrouch_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AssignmentCharacter_eventF_PlayerCrouch_Parms, Value), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) }; // 494646648
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAssignmentCharacter_F_PlayerCrouch_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAssignmentCharacter_F_PlayerCrouch_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAssignmentCharacter_F_PlayerCrouch_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAssignmentCharacter_F_PlayerCrouch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAssignmentCharacter, nullptr, "F_PlayerCrouch", nullptr, nullptr, Z_Construct_UFunction_AAssignmentCharacter_F_PlayerCrouch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAssignmentCharacter_F_PlayerCrouch_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAssignmentCharacter_F_PlayerCrouch_Statics::AssignmentCharacter_eventF_PlayerCrouch_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAssignmentCharacter_F_PlayerCrouch_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAssignmentCharacter_F_PlayerCrouch_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AAssignmentCharacter_F_PlayerCrouch_Statics::AssignmentCharacter_eventF_PlayerCrouch_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAssignmentCharacter_F_PlayerCrouch()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAssignmentCharacter_F_PlayerCrouch_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAssignmentCharacter::execF_PlayerCrouch)
{
	P_GET_STRUCT_REF(FInputActionValue,Z_Param_Out_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->F_PlayerCrouch(Z_Param_Out_Value);
	P_NATIVE_END;
}
// End Class AAssignmentCharacter Function F_PlayerCrouch

// Begin Class AAssignmentCharacter Function F_PlayerSprint
struct Z_Construct_UFunction_AAssignmentCharacter_F_PlayerSprint_Statics
{
	struct AssignmentCharacter_eventF_PlayerSprint_Parms
	{
		FInputActionValue Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AssignmentCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAssignmentCharacter_F_PlayerSprint_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AssignmentCharacter_eventF_PlayerSprint_Parms, Value), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) }; // 494646648
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAssignmentCharacter_F_PlayerSprint_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAssignmentCharacter_F_PlayerSprint_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAssignmentCharacter_F_PlayerSprint_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAssignmentCharacter_F_PlayerSprint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAssignmentCharacter, nullptr, "F_PlayerSprint", nullptr, nullptr, Z_Construct_UFunction_AAssignmentCharacter_F_PlayerSprint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAssignmentCharacter_F_PlayerSprint_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAssignmentCharacter_F_PlayerSprint_Statics::AssignmentCharacter_eventF_PlayerSprint_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAssignmentCharacter_F_PlayerSprint_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAssignmentCharacter_F_PlayerSprint_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AAssignmentCharacter_F_PlayerSprint_Statics::AssignmentCharacter_eventF_PlayerSprint_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAssignmentCharacter_F_PlayerSprint()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAssignmentCharacter_F_PlayerSprint_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAssignmentCharacter::execF_PlayerSprint)
{
	P_GET_STRUCT_REF(FInputActionValue,Z_Param_Out_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->F_PlayerSprint(Z_Param_Out_Value);
	P_NATIVE_END;
}
// End Class AAssignmentCharacter Function F_PlayerSprint

// Begin Class AAssignmentCharacter Function F_UpdateSpeedMovement
struct Z_Construct_UFunction_AAssignmentCharacter_F_UpdateSpeedMovement_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AssignmentCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAssignmentCharacter_F_UpdateSpeedMovement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAssignmentCharacter, nullptr, "F_UpdateSpeedMovement", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAssignmentCharacter_F_UpdateSpeedMovement_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAssignmentCharacter_F_UpdateSpeedMovement_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AAssignmentCharacter_F_UpdateSpeedMovement()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAssignmentCharacter_F_UpdateSpeedMovement_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAssignmentCharacter::execF_UpdateSpeedMovement)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->F_UpdateSpeedMovement();
	P_NATIVE_END;
}
// End Class AAssignmentCharacter Function F_UpdateSpeedMovement

// Begin Class AAssignmentCharacter Function SetArrayElement
struct Z_Construct_UFunction_AAssignmentCharacter_SetArrayElement_Statics
{
	struct AssignmentCharacter_eventSetArrayElement_Parms
	{
		int32 Index;
		EMovementState NewValue;
		bool bSizeToFit;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Movement" },
		{ "CPP_Default_bSizeToFit", "false" },
		{ "ModuleRelativePath", "AssignmentCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FBytePropertyParams NewProp_NewValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_NewValue;
	static void NewProp_bSizeToFit_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSizeToFit;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AAssignmentCharacter_SetArrayElement_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AssignmentCharacter_eventSetArrayElement_Parms, Index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AAssignmentCharacter_SetArrayElement_Statics::NewProp_NewValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AAssignmentCharacter_SetArrayElement_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AssignmentCharacter_eventSetArrayElement_Parms, NewValue), Z_Construct_UEnum_Assignment_EMovementState, METADATA_PARAMS(0, nullptr) }; // 2331931994
void Z_Construct_UFunction_AAssignmentCharacter_SetArrayElement_Statics::NewProp_bSizeToFit_SetBit(void* Obj)
{
	((AssignmentCharacter_eventSetArrayElement_Parms*)Obj)->bSizeToFit = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AAssignmentCharacter_SetArrayElement_Statics::NewProp_bSizeToFit = { "bSizeToFit", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AssignmentCharacter_eventSetArrayElement_Parms), &Z_Construct_UFunction_AAssignmentCharacter_SetArrayElement_Statics::NewProp_bSizeToFit_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAssignmentCharacter_SetArrayElement_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAssignmentCharacter_SetArrayElement_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAssignmentCharacter_SetArrayElement_Statics::NewProp_NewValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAssignmentCharacter_SetArrayElement_Statics::NewProp_NewValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAssignmentCharacter_SetArrayElement_Statics::NewProp_bSizeToFit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAssignmentCharacter_SetArrayElement_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAssignmentCharacter_SetArrayElement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAssignmentCharacter, nullptr, "SetArrayElement", nullptr, nullptr, Z_Construct_UFunction_AAssignmentCharacter_SetArrayElement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAssignmentCharacter_SetArrayElement_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAssignmentCharacter_SetArrayElement_Statics::AssignmentCharacter_eventSetArrayElement_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAssignmentCharacter_SetArrayElement_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAssignmentCharacter_SetArrayElement_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AAssignmentCharacter_SetArrayElement_Statics::AssignmentCharacter_eventSetArrayElement_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAssignmentCharacter_SetArrayElement()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAssignmentCharacter_SetArrayElement_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAssignmentCharacter::execSetArrayElement)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_GET_ENUM(EMovementState,Z_Param_NewValue);
	P_GET_UBOOL(Z_Param_bSizeToFit);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetArrayElement(Z_Param_Index,EMovementState(Z_Param_NewValue),Z_Param_bSizeToFit);
	P_NATIVE_END;
}
// End Class AAssignmentCharacter Function SetArrayElement

// Begin Class AAssignmentCharacter
void AAssignmentCharacter::StaticRegisterNativesAAssignmentCharacter()
{
	UClass* Class = AAssignmentCharacter::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CheckState", &AAssignmentCharacter::execCheckState },
		{ "F_Interact", &AAssignmentCharacter::execF_Interact },
		{ "F_Movement", &AAssignmentCharacter::execF_Movement },
		{ "F_PlayerCrouch", &AAssignmentCharacter::execF_PlayerCrouch },
		{ "F_PlayerSprint", &AAssignmentCharacter::execF_PlayerSprint },
		{ "F_UpdateSpeedMovement", &AAssignmentCharacter::execF_UpdateSpeedMovement },
		{ "SetArrayElement", &AAssignmentCharacter::execSetArrayElement },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAssignmentCharacter);
UClass* Z_Construct_UClass_AAssignmentCharacter_NoRegister()
{
	return AAssignmentCharacter::StaticClass();
}
struct Z_Construct_UClass_AAssignmentCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "AssignmentCharacter.h" },
		{ "ModuleRelativePath", "AssignmentCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Camera boom positioning the camera behind the character */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "AssignmentCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Camera boom positioning the camera behind the character" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FollowCamera_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Follow camera */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "AssignmentCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Follow camera" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractPoint_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "AssignmentCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "AssignmentCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMappingContext_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** MappingContext */" },
#endif
		{ "ModuleRelativePath", "AssignmentCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "MappingContext" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JumpAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Jump Input Action */" },
#endif
		{ "ModuleRelativePath", "AssignmentCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Jump Input Action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Move Input Action */" },
#endif
		{ "ModuleRelativePath", "AssignmentCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Move Input Action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LookAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Look Input Action */" },
#endif
		{ "ModuleRelativePath", "AssignmentCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Look Input Action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerSprint_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "AssignmentCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerCrouch_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "AssignmentCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerInteract_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "AssignmentCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentMovementState_MetaData[] = {
		{ "Category", "Player | Movement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Current movement state\n// Player state will change based on enum.\n" },
#endif
		{ "ModuleRelativePath", "AssignmentCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Current movement state\nPlayer state will change based on enum." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IdleSpeed_MetaData[] = {
		{ "Category", "Player | Movement | Speed" },
		{ "ModuleRelativePath", "AssignmentCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WalkSpeed_MetaData[] = {
		{ "Category", "Player | Movement | Speed" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// No movement when idle\n" },
#endif
		{ "ModuleRelativePath", "AssignmentCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "No movement when idle" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RunSpeed_MetaData[] = {
		{ "Category", "Player | Movement | Speed" },
		{ "ModuleRelativePath", "AssignmentCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CrouchSpeed_MetaData[] = {
		{ "Category", "Player | Movement | Speed" },
		{ "ModuleRelativePath", "AssignmentCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractDistance_MetaData[] = {
		{ "Category", "Player | InteractComponent" },
		{ "ModuleRelativePath", "AssignmentCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SphereRadius_MetaData[] = {
		{ "Category", "Player | InteractComponent" },
		{ "ModuleRelativePath", "AssignmentCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraBoom;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FollowCamera;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InteractPoint;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultMappingContext;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_JumpAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MoveAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LookAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerSprint;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerCrouch;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerInteract;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CurrentMovementState_Inner_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CurrentMovementState_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CurrentMovementState;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_IdleSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WalkSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RunSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CrouchSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InteractDistance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SphereRadius;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AAssignmentCharacter_CheckState, "CheckState" }, // 1636117068
		{ &Z_Construct_UFunction_AAssignmentCharacter_F_Interact, "F_Interact" }, // 4129505634
		{ &Z_Construct_UFunction_AAssignmentCharacter_F_InteractObjects, "F_InteractObjects" }, // 3227520233
		{ &Z_Construct_UFunction_AAssignmentCharacter_F_Movement, "F_Movement" }, // 2073843393
		{ &Z_Construct_UFunction_AAssignmentCharacter_F_PlayerCrouch, "F_PlayerCrouch" }, // 762446081
		{ &Z_Construct_UFunction_AAssignmentCharacter_F_PlayerSprint, "F_PlayerSprint" }, // 3600466061
		{ &Z_Construct_UFunction_AAssignmentCharacter_F_UpdateSpeedMovement, "F_UpdateSpeedMovement" }, // 3162291933
		{ &Z_Construct_UFunction_AAssignmentCharacter_SetArrayElement, "SetArrayElement" }, // 2352192736
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAssignmentCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAssignmentCharacter_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAssignmentCharacter, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraBoom_MetaData), NewProp_CameraBoom_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAssignmentCharacter_Statics::NewProp_FollowCamera = { "FollowCamera", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAssignmentCharacter, FollowCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FollowCamera_MetaData), NewProp_FollowCamera_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAssignmentCharacter_Statics::NewProp_InteractPoint = { "InteractPoint", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAssignmentCharacter, InteractPoint), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractPoint_MetaData), NewProp_InteractPoint_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAssignmentCharacter_Statics::NewProp_DefaultMappingContext = { "DefaultMappingContext", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAssignmentCharacter, DefaultMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultMappingContext_MetaData), NewProp_DefaultMappingContext_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAssignmentCharacter_Statics::NewProp_JumpAction = { "JumpAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAssignmentCharacter, JumpAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JumpAction_MetaData), NewProp_JumpAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAssignmentCharacter_Statics::NewProp_MoveAction = { "MoveAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAssignmentCharacter, MoveAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveAction_MetaData), NewProp_MoveAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAssignmentCharacter_Statics::NewProp_LookAction = { "LookAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAssignmentCharacter, LookAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LookAction_MetaData), NewProp_LookAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAssignmentCharacter_Statics::NewProp_PlayerSprint = { "PlayerSprint", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAssignmentCharacter, PlayerSprint), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerSprint_MetaData), NewProp_PlayerSprint_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAssignmentCharacter_Statics::NewProp_PlayerCrouch = { "PlayerCrouch", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAssignmentCharacter, PlayerCrouch), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerCrouch_MetaData), NewProp_PlayerCrouch_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAssignmentCharacter_Statics::NewProp_PlayerInteract = { "PlayerInteract", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAssignmentCharacter, PlayerInteract), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerInteract_MetaData), NewProp_PlayerInteract_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AAssignmentCharacter_Statics::NewProp_CurrentMovementState_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AAssignmentCharacter_Statics::NewProp_CurrentMovementState_Inner = { "CurrentMovementState", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_Assignment_EMovementState, METADATA_PARAMS(0, nullptr) }; // 2331931994
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AAssignmentCharacter_Statics::NewProp_CurrentMovementState = { "CurrentMovementState", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAssignmentCharacter, CurrentMovementState), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentMovementState_MetaData), NewProp_CurrentMovementState_MetaData) }; // 2331931994
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAssignmentCharacter_Statics::NewProp_IdleSpeed = { "IdleSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAssignmentCharacter, IdleSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IdleSpeed_MetaData), NewProp_IdleSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAssignmentCharacter_Statics::NewProp_WalkSpeed = { "WalkSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAssignmentCharacter, WalkSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WalkSpeed_MetaData), NewProp_WalkSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAssignmentCharacter_Statics::NewProp_RunSpeed = { "RunSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAssignmentCharacter, RunSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RunSpeed_MetaData), NewProp_RunSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAssignmentCharacter_Statics::NewProp_CrouchSpeed = { "CrouchSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAssignmentCharacter, CrouchSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CrouchSpeed_MetaData), NewProp_CrouchSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAssignmentCharacter_Statics::NewProp_InteractDistance = { "InteractDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAssignmentCharacter, InteractDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractDistance_MetaData), NewProp_InteractDistance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAssignmentCharacter_Statics::NewProp_SphereRadius = { "SphereRadius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAssignmentCharacter, SphereRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SphereRadius_MetaData), NewProp_SphereRadius_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAssignmentCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAssignmentCharacter_Statics::NewProp_CameraBoom,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAssignmentCharacter_Statics::NewProp_FollowCamera,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAssignmentCharacter_Statics::NewProp_InteractPoint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAssignmentCharacter_Statics::NewProp_DefaultMappingContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAssignmentCharacter_Statics::NewProp_JumpAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAssignmentCharacter_Statics::NewProp_MoveAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAssignmentCharacter_Statics::NewProp_LookAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAssignmentCharacter_Statics::NewProp_PlayerSprint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAssignmentCharacter_Statics::NewProp_PlayerCrouch,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAssignmentCharacter_Statics::NewProp_PlayerInteract,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAssignmentCharacter_Statics::NewProp_CurrentMovementState_Inner_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAssignmentCharacter_Statics::NewProp_CurrentMovementState_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAssignmentCharacter_Statics::NewProp_CurrentMovementState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAssignmentCharacter_Statics::NewProp_IdleSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAssignmentCharacter_Statics::NewProp_WalkSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAssignmentCharacter_Statics::NewProp_RunSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAssignmentCharacter_Statics::NewProp_CrouchSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAssignmentCharacter_Statics::NewProp_InteractDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAssignmentCharacter_Statics::NewProp_SphereRadius,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAssignmentCharacter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AAssignmentCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_Assignment,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAssignmentCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AAssignmentCharacter_Statics::ClassParams = {
	&AAssignmentCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AAssignmentCharacter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AAssignmentCharacter_Statics::PropPointers),
	0,
	0x008000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAssignmentCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_AAssignmentCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AAssignmentCharacter()
{
	if (!Z_Registration_Info_UClass_AAssignmentCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAssignmentCharacter.OuterSingleton, Z_Construct_UClass_AAssignmentCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AAssignmentCharacter.OuterSingleton;
}
template<> ASSIGNMENT_API UClass* StaticClass<AAssignmentCharacter>()
{
	return AAssignmentCharacter::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AAssignmentCharacter);
AAssignmentCharacter::~AAssignmentCharacter() {}
// End Class AAssignmentCharacter

// Begin Registration
struct Z_CompiledInDeferFile_FID_Projects_UnrealEngineProjects_UE5_3D_Assignment_Assignment_Source_Assignment_AssignmentCharacter_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EMovementState_StaticEnum, TEXT("EMovementState"), &Z_Registration_Info_UEnum_EMovementState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2331931994U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AAssignmentCharacter, AAssignmentCharacter::StaticClass, TEXT("AAssignmentCharacter"), &Z_Registration_Info_UClass_AAssignmentCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAssignmentCharacter), 457868041U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_UnrealEngineProjects_UE5_3D_Assignment_Assignment_Source_Assignment_AssignmentCharacter_h_2158911208(TEXT("/Script/Assignment"),
	Z_CompiledInDeferFile_FID_Projects_UnrealEngineProjects_UE5_3D_Assignment_Assignment_Source_Assignment_AssignmentCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_UnrealEngineProjects_UE5_3D_Assignment_Assignment_Source_Assignment_AssignmentCharacter_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Projects_UnrealEngineProjects_UE5_3D_Assignment_Assignment_Source_Assignment_AssignmentCharacter_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_UnrealEngineProjects_UE5_3D_Assignment_Assignment_Source_Assignment_AssignmentCharacter_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
