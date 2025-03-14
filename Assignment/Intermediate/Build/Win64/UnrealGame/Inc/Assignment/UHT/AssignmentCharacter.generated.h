// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AssignmentCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
enum class EMovementState : uint8;
struct FInputActionValue;
#ifdef ASSIGNMENT_AssignmentCharacter_generated_h
#error "AssignmentCharacter.generated.h already included, missing '#pragma once' in AssignmentCharacter.h"
#endif
#define ASSIGNMENT_AssignmentCharacter_generated_h

#define FID_Projects_UnrealEngineProjects_UE5_3D_Assignment_Assignment_Source_Assignment_AssignmentCharacter_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetArrayElement); \
	DECLARE_FUNCTION(execCheckState); \
	DECLARE_FUNCTION(execF_Interact); \
	DECLARE_FUNCTION(execF_Movement); \
	DECLARE_FUNCTION(execF_UpdateSpeedMovement); \
	DECLARE_FUNCTION(execF_PlayerCrouch); \
	DECLARE_FUNCTION(execF_PlayerSprint);


#define FID_Projects_UnrealEngineProjects_UE5_3D_Assignment_Assignment_Source_Assignment_AssignmentCharacter_h_31_CALLBACK_WRAPPERS
#define FID_Projects_UnrealEngineProjects_UE5_3D_Assignment_Assignment_Source_Assignment_AssignmentCharacter_h_31_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAssignmentCharacter(); \
	friend struct Z_Construct_UClass_AAssignmentCharacter_Statics; \
public: \
	DECLARE_CLASS(AAssignmentCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Assignment"), NO_API) \
	DECLARE_SERIALIZER(AAssignmentCharacter)


#define FID_Projects_UnrealEngineProjects_UE5_3D_Assignment_Assignment_Source_Assignment_AssignmentCharacter_h_31_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AAssignmentCharacter(AAssignmentCharacter&&); \
	AAssignmentCharacter(const AAssignmentCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAssignmentCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAssignmentCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AAssignmentCharacter) \
	NO_API virtual ~AAssignmentCharacter();


#define FID_Projects_UnrealEngineProjects_UE5_3D_Assignment_Assignment_Source_Assignment_AssignmentCharacter_h_28_PROLOG
#define FID_Projects_UnrealEngineProjects_UE5_3D_Assignment_Assignment_Source_Assignment_AssignmentCharacter_h_31_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Projects_UnrealEngineProjects_UE5_3D_Assignment_Assignment_Source_Assignment_AssignmentCharacter_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Projects_UnrealEngineProjects_UE5_3D_Assignment_Assignment_Source_Assignment_AssignmentCharacter_h_31_CALLBACK_WRAPPERS \
	FID_Projects_UnrealEngineProjects_UE5_3D_Assignment_Assignment_Source_Assignment_AssignmentCharacter_h_31_INCLASS_NO_PURE_DECLS \
	FID_Projects_UnrealEngineProjects_UE5_3D_Assignment_Assignment_Source_Assignment_AssignmentCharacter_h_31_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ASSIGNMENT_API UClass* StaticClass<class AAssignmentCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Projects_UnrealEngineProjects_UE5_3D_Assignment_Assignment_Source_Assignment_AssignmentCharacter_h


#define FOREACH_ENUM_EMOVEMENTSTATE(op) \
	op(EMovementState::Idle) \
	op(EMovementState::Walking) \
	op(EMovementState::Running) \
	op(EMovementState::Crouching) 

enum class EMovementState : uint8;
template<> struct TIsUEnumClass<EMovementState> { enum { Value = true }; };
template<> ASSIGNMENT_API UEnum* StaticEnum<EMovementState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
