// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAssignment_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_Assignment;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_Assignment()
	{
		if (!Z_Registration_Info_UPackage__Script_Assignment.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/Assignment",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0x3CC33C0C,
				0xA831C3D4,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_Assignment.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_Assignment.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_Assignment(Z_Construct_UPackage__Script_Assignment, TEXT("/Script/Assignment"), Z_Registration_Info_UPackage__Script_Assignment, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x3CC33C0C, 0xA831C3D4));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
