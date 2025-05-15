// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SomeRandomCarProject/SomeRandomCarProjectOffroadWheelFront.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSomeRandomCarProjectOffroadWheelFront() {}

// Begin Cross Module References
SOMERANDOMCARPROJECT_API UClass* Z_Construct_UClass_USomeRandomCarProjectOffroadWheelFront();
SOMERANDOMCARPROJECT_API UClass* Z_Construct_UClass_USomeRandomCarProjectOffroadWheelFront_NoRegister();
SOMERANDOMCARPROJECT_API UClass* Z_Construct_UClass_USomeRandomCarProjectWheelFront();
UPackage* Z_Construct_UPackage__Script_SomeRandomCarProject();
// End Cross Module References

// Begin Class USomeRandomCarProjectOffroadWheelFront
void USomeRandomCarProjectOffroadWheelFront::StaticRegisterNativesUSomeRandomCarProjectOffroadWheelFront()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USomeRandomCarProjectOffroadWheelFront);
UClass* Z_Construct_UClass_USomeRandomCarProjectOffroadWheelFront_NoRegister()
{
	return USomeRandomCarProjectOffroadWheelFront::StaticClass();
}
struct Z_Construct_UClass_USomeRandomCarProjectOffroadWheelFront_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Front wheel definition for Offroad Car.\n */" },
#endif
		{ "IncludePath", "SomeRandomCarProjectOffroadWheelFront.h" },
		{ "ModuleRelativePath", "SomeRandomCarProjectOffroadWheelFront.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Front wheel definition for Offroad Car." },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USomeRandomCarProjectOffroadWheelFront>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USomeRandomCarProjectOffroadWheelFront_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USomeRandomCarProjectWheelFront,
	(UObject* (*)())Z_Construct_UPackage__Script_SomeRandomCarProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USomeRandomCarProjectOffroadWheelFront_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USomeRandomCarProjectOffroadWheelFront_Statics::ClassParams = {
	&USomeRandomCarProjectOffroadWheelFront::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USomeRandomCarProjectOffroadWheelFront_Statics::Class_MetaDataParams), Z_Construct_UClass_USomeRandomCarProjectOffroadWheelFront_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USomeRandomCarProjectOffroadWheelFront()
{
	if (!Z_Registration_Info_UClass_USomeRandomCarProjectOffroadWheelFront.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USomeRandomCarProjectOffroadWheelFront.OuterSingleton, Z_Construct_UClass_USomeRandomCarProjectOffroadWheelFront_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USomeRandomCarProjectOffroadWheelFront.OuterSingleton;
}
template<> SOMERANDOMCARPROJECT_API UClass* StaticClass<USomeRandomCarProjectOffroadWheelFront>()
{
	return USomeRandomCarProjectOffroadWheelFront::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USomeRandomCarProjectOffroadWheelFront);
USomeRandomCarProjectOffroadWheelFront::~USomeRandomCarProjectOffroadWheelFront() {}
// End Class USomeRandomCarProjectOffroadWheelFront

// Begin Registration
struct Z_CompiledInDeferFile_FID_anthony_Documents_Unreal_Projects_SomeRandomCarProject_Source_SomeRandomCarProject_SomeRandomCarProjectOffroadWheelFront_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USomeRandomCarProjectOffroadWheelFront, USomeRandomCarProjectOffroadWheelFront::StaticClass, TEXT("USomeRandomCarProjectOffroadWheelFront"), &Z_Registration_Info_UClass_USomeRandomCarProjectOffroadWheelFront, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USomeRandomCarProjectOffroadWheelFront), 470089373U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_anthony_Documents_Unreal_Projects_SomeRandomCarProject_Source_SomeRandomCarProject_SomeRandomCarProjectOffroadWheelFront_h_35212214(TEXT("/Script/SomeRandomCarProject"),
	Z_CompiledInDeferFile_FID_anthony_Documents_Unreal_Projects_SomeRandomCarProject_Source_SomeRandomCarProject_SomeRandomCarProjectOffroadWheelFront_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_anthony_Documents_Unreal_Projects_SomeRandomCarProject_Source_SomeRandomCarProject_SomeRandomCarProjectOffroadWheelFront_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
