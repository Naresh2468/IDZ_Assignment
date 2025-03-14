// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Assignment/Description/Detail.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDetail() {}

// Begin Cross Module References
ASSIGNMENT_API UClass* Z_Construct_UClass_ADetail();
ASSIGNMENT_API UClass* Z_Construct_UClass_ADetail_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UTextRenderComponent_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EHorizTextAligment();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EVerticalTextAligment();
UPackage* Z_Construct_UPackage__Script_Assignment();
// End Cross Module References

// Begin Class ADetail Function TextDetail
struct Z_Construct_UFunction_ADetail_TextDetail_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Description/Detail.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADetail_TextDetail_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADetail, nullptr, "TextDetail", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADetail_TextDetail_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADetail_TextDetail_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ADetail_TextDetail()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADetail_TextDetail_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADetail::execTextDetail)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->TextDetail();
	P_NATIVE_END;
}
// End Class ADetail Function TextDetail

// Begin Class ADetail
void ADetail::StaticRegisterNativesADetail()
{
	UClass* Class = ADetail::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "TextDetail", &ADetail::execTextDetail },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADetail);
UClass* Z_Construct_UClass_ADetail_NoRegister()
{
	return ADetail::StaticClass();
}
struct Z_Construct_UClass_ADetail_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Description/Detail.h" },
		{ "ModuleRelativePath", "Description/Detail.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Details_MetaData[] = {
		{ "Category", "Details" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Description/Detail.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TextSize_MetaData[] = {
		{ "Category", "Details" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Note: Fixed typo from \"Detials\" to \"Details\"\n" },
#endif
		{ "ModuleRelativePath", "Description/Detail.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Note: Fixed typo from \"Detials\" to \"Details\"" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TextColor_MetaData[] = {
		{ "Category", "Details" },
		{ "ModuleRelativePath", "Description/Detail.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EHTA_MetaData[] = {
		{ "Category", "Details" },
		{ "ModuleRelativePath", "Description/Detail.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EVTA_MetaData[] = {
		{ "Category", "Details" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Vertical alignment enum, editable in Blueprints per instance\n" },
#endif
		{ "ModuleRelativePath", "Description/Detail.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Vertical alignment enum, editable in Blueprints per instance" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Details;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TextSize;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TextColor;
	static const UECodeGen_Private::FBytePropertyParams NewProp_EHTA;
	static const UECodeGen_Private::FBytePropertyParams NewProp_EVTA;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ADetail_TextDetail, "TextDetail" }, // 996371888
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADetail>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADetail_Statics::NewProp_Details = { "Details", nullptr, (EPropertyFlags)0x001000000008080d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADetail, Details), Z_Construct_UClass_UTextRenderComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Details_MetaData), NewProp_Details_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADetail_Statics::NewProp_TextSize = { "TextSize", nullptr, (EPropertyFlags)0x0010000000000805, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADetail, TextSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TextSize_MetaData), NewProp_TextSize_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ADetail_Statics::NewProp_TextColor = { "TextColor", nullptr, (EPropertyFlags)0x0010000000000805, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADetail, TextColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TextColor_MetaData), NewProp_TextColor_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ADetail_Statics::NewProp_EHTA = { "EHTA", nullptr, (EPropertyFlags)0x0010000000000805, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADetail, EHTA), Z_Construct_UEnum_Engine_EHorizTextAligment, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EHTA_MetaData), NewProp_EHTA_MetaData) }; // 3415569103
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ADetail_Statics::NewProp_EVTA = { "EVTA", nullptr, (EPropertyFlags)0x0010000000000805, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADetail, EVTA), Z_Construct_UEnum_Engine_EVerticalTextAligment, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EVTA_MetaData), NewProp_EVTA_MetaData) }; // 2725170026
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADetail_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADetail_Statics::NewProp_Details,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADetail_Statics::NewProp_TextSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADetail_Statics::NewProp_TextColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADetail_Statics::NewProp_EHTA,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADetail_Statics::NewProp_EVTA,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADetail_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ADetail_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Assignment,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADetail_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ADetail_Statics::ClassParams = {
	&ADetail::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ADetail_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ADetail_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADetail_Statics::Class_MetaDataParams), Z_Construct_UClass_ADetail_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ADetail()
{
	if (!Z_Registration_Info_UClass_ADetail.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADetail.OuterSingleton, Z_Construct_UClass_ADetail_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ADetail.OuterSingleton;
}
template<> ASSIGNMENT_API UClass* StaticClass<ADetail>()
{
	return ADetail::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ADetail);
ADetail::~ADetail() {}
// End Class ADetail

// Begin Registration
struct Z_CompiledInDeferFile_FID_Projects_UnrealEngineProjects_UE5_3D_Assignment_Assignment_Source_Assignment_Description_Detail_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ADetail, ADetail::StaticClass, TEXT("ADetail"), &Z_Registration_Info_UClass_ADetail, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADetail), 3184004341U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_UnrealEngineProjects_UE5_3D_Assignment_Assignment_Source_Assignment_Description_Detail_h_1306937200(TEXT("/Script/Assignment"),
	Z_CompiledInDeferFile_FID_Projects_UnrealEngineProjects_UE5_3D_Assignment_Assignment_Source_Assignment_Description_Detail_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_UnrealEngineProjects_UE5_3D_Assignment_Assignment_Source_Assignment_Description_Detail_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
