// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Assignment/AssignmentGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAssignmentGameMode() {}

// Begin Cross Module References
ASSIGNMENT_API UClass* Z_Construct_UClass_AAssignmentGameMode();
ASSIGNMENT_API UClass* Z_Construct_UClass_AAssignmentGameMode_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
UPackage* Z_Construct_UPackage__Script_Assignment();
// End Cross Module References

// Begin Class AAssignmentGameMode
void AAssignmentGameMode::StaticRegisterNativesAAssignmentGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAssignmentGameMode);
UClass* Z_Construct_UClass_AAssignmentGameMode_NoRegister()
{
	return AAssignmentGameMode::StaticClass();
}
struct Z_Construct_UClass_AAssignmentGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "AssignmentGameMode.h" },
		{ "ModuleRelativePath", "AssignmentGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAssignmentGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AAssignmentGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Assignment,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAssignmentGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AAssignmentGameMode_Statics::ClassParams = {
	&AAssignmentGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008802ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAssignmentGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AAssignmentGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AAssignmentGameMode()
{
	if (!Z_Registration_Info_UClass_AAssignmentGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAssignmentGameMode.OuterSingleton, Z_Construct_UClass_AAssignmentGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AAssignmentGameMode.OuterSingleton;
}
template<> ASSIGNMENT_API UClass* StaticClass<AAssignmentGameMode>()
{
	return AAssignmentGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AAssignmentGameMode);
AAssignmentGameMode::~AAssignmentGameMode() {}
// End Class AAssignmentGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Projects_UnrealEngineProjects_UE5_3D_Assignment_Assignment_Source_Assignment_AssignmentGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AAssignmentGameMode, AAssignmentGameMode::StaticClass, TEXT("AAssignmentGameMode"), &Z_Registration_Info_UClass_AAssignmentGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAssignmentGameMode), 3952339101U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_UnrealEngineProjects_UE5_3D_Assignment_Assignment_Source_Assignment_AssignmentGameMode_h_1935299365(TEXT("/Script/Assignment"),
	Z_CompiledInDeferFile_FID_Projects_UnrealEngineProjects_UE5_3D_Assignment_Assignment_Source_Assignment_AssignmentGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_UnrealEngineProjects_UE5_3D_Assignment_Assignment_Source_Assignment_AssignmentGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
