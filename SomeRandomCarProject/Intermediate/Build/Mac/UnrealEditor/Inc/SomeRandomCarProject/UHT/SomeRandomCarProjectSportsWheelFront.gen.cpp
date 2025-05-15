// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SomeRandomCarProject/SomeRandomCarProjectSportsWheelFront.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSomeRandomCarProjectSportsWheelFront() {}

// Begin Cross Module References
SOMERANDOMCARPROJECT_API UClass* Z_Construct_UClass_USomeRandomCarProjectSportsWheelFront();
SOMERANDOMCARPROJECT_API UClass* Z_Construct_UClass_USomeRandomCarProjectSportsWheelFront_NoRegister();
SOMERANDOMCARPROJECT_API UClass* Z_Construct_UClass_USomeRandomCarProjectWheelFront();
UPackage* Z_Construct_UPackage__Script_SomeRandomCarProject();
// End Cross Module References

// Begin Class USomeRandomCarProjectSportsWheelFront
void USomeRandomCarProjectSportsWheelFront::StaticRegisterNativesUSomeRandomCarProjectSportsWheelFront()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USomeRandomCarProjectSportsWheelFront);
UClass* Z_Construct_UClass_USomeRandomCarProjectSportsWheelFront_NoRegister()
{
	return USomeRandomCarProjectSportsWheelFront::StaticClass();
}
struct Z_Construct_UClass_USomeRandomCarProjectSportsWheelFront_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Front wheel definition for Sports Car.\n */" },
#endif
		{ "IncludePath", "SomeRandomCarProjectSportsWheelFront.h" },
		{ "ModuleRelativePath", "SomeRandomCarProjectSportsWheelFront.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Front wheel definition for Sports Car." },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USomeRandomCarProjectSportsWheelFront>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USomeRandomCarProjectSportsWheelFront_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USomeRandomCarProjectWheelFront,
	(UObject* (*)())Z_Construct_UPackage__Script_SomeRandomCarProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USomeRandomCarProjectSportsWheelFront_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USomeRandomCarProjectSportsWheelFront_Statics::ClassParams = {
	&USomeRandomCarProjectSportsWheelFront::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USomeRandomCarProjectSportsWheelFront_Statics::Class_MetaDataParams), Z_Construct_UClass_USomeRandomCarProjectSportsWheelFront_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USomeRandomCarProjectSportsWheelFront()
{
	if (!Z_Registration_Info_UClass_USomeRandomCarProjectSportsWheelFront.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USomeRandomCarProjectSportsWheelFront.OuterSingleton, Z_Construct_UClass_USomeRandomCarProjectSportsWheelFront_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USomeRandomCarProjectSportsWheelFront.OuterSingleton;
}
template<> SOMERANDOMCARPROJECT_API UClass* StaticClass<USomeRandomCarProjectSportsWheelFront>()
{
	return USomeRandomCarProjectSportsWheelFront::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USomeRandomCarProjectSportsWheelFront);
USomeRandomCarProjectSportsWheelFront::~USomeRandomCarProjectSportsWheelFront() {}
// End Class USomeRandomCarProjectSportsWheelFront

// Begin Registration
struct Z_CompiledInDeferFile_FID_anthony_Documents_Unreal_Projects_SomeRandomCarProject_Source_SomeRandomCarProject_SomeRandomCarProjectSportsWheelFront_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USomeRandomCarProjectSportsWheelFront, USomeRandomCarProjectSportsWheelFront::StaticClass, TEXT("USomeRandomCarProjectSportsWheelFront"), &Z_Registration_Info_UClass_USomeRandomCarProjectSportsWheelFront, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USomeRandomCarProjectSportsWheelFront), 123558571U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_anthony_Documents_Unreal_Projects_SomeRandomCarProject_Source_SomeRandomCarProject_SomeRandomCarProjectSportsWheelFront_h_261069363(TEXT("/Script/SomeRandomCarProject"),
	Z_CompiledInDeferFile_FID_anthony_Documents_Unreal_Projects_SomeRandomCarProject_Source_SomeRandomCarProject_SomeRandomCarProjectSportsWheelFront_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_anthony_Documents_Unreal_Projects_SomeRandomCarProject_Source_SomeRandomCarProject_SomeRandomCarProjectSportsWheelFront_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
