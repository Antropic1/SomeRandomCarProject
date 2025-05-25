// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SomeRandomCarProject/SomeRandomCarProjectOffroadWheelRear.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSomeRandomCarProjectOffroadWheelRear() {}

// Begin Cross Module References
SOMERANDOMCARPROJECT_API UClass* Z_Construct_UClass_USomeRandomCarProjectOffroadWheelRear();
SOMERANDOMCARPROJECT_API UClass* Z_Construct_UClass_USomeRandomCarProjectOffroadWheelRear_NoRegister();
SOMERANDOMCARPROJECT_API UClass* Z_Construct_UClass_USomeRandomCarProjectWheelRear();
UPackage* Z_Construct_UPackage__Script_SomeRandomCarProject();
// End Cross Module References

// Begin Class USomeRandomCarProjectOffroadWheelRear
void USomeRandomCarProjectOffroadWheelRear::StaticRegisterNativesUSomeRandomCarProjectOffroadWheelRear()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USomeRandomCarProjectOffroadWheelRear);
UClass* Z_Construct_UClass_USomeRandomCarProjectOffroadWheelRear_NoRegister()
{
	return USomeRandomCarProjectOffroadWheelRear::StaticClass();
}
struct Z_Construct_UClass_USomeRandomCarProjectOffroadWheelRear_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Rear wheel definition for Offroad Car.\n */" },
#endif
		{ "IncludePath", "SomeRandomCarProjectOffroadWheelRear.h" },
		{ "ModuleRelativePath", "SomeRandomCarProjectOffroadWheelRear.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Rear wheel definition for Offroad Car." },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USomeRandomCarProjectOffroadWheelRear>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USomeRandomCarProjectOffroadWheelRear_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USomeRandomCarProjectWheelRear,
	(UObject* (*)())Z_Construct_UPackage__Script_SomeRandomCarProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USomeRandomCarProjectOffroadWheelRear_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USomeRandomCarProjectOffroadWheelRear_Statics::ClassParams = {
	&USomeRandomCarProjectOffroadWheelRear::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USomeRandomCarProjectOffroadWheelRear_Statics::Class_MetaDataParams), Z_Construct_UClass_USomeRandomCarProjectOffroadWheelRear_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USomeRandomCarProjectOffroadWheelRear()
{
	if (!Z_Registration_Info_UClass_USomeRandomCarProjectOffroadWheelRear.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USomeRandomCarProjectOffroadWheelRear.OuterSingleton, Z_Construct_UClass_USomeRandomCarProjectOffroadWheelRear_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USomeRandomCarProjectOffroadWheelRear.OuterSingleton;
}
template<> SOMERANDOMCARPROJECT_API UClass* StaticClass<USomeRandomCarProjectOffroadWheelRear>()
{
	return USomeRandomCarProjectOffroadWheelRear::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USomeRandomCarProjectOffroadWheelRear);
USomeRandomCarProjectOffroadWheelRear::~USomeRandomCarProjectOffroadWheelRear() {}
// End Class USomeRandomCarProjectOffroadWheelRear

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_cupra_OneDrive_Desktop_CorrectCarGame_SomeRandomCarProject_SomeRandomCarProject_SomeRandomCarProject_Source_SomeRandomCarProject_SomeRandomCarProjectOffroadWheelRear_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USomeRandomCarProjectOffroadWheelRear, USomeRandomCarProjectOffroadWheelRear::StaticClass, TEXT("USomeRandomCarProjectOffroadWheelRear"), &Z_Registration_Info_UClass_USomeRandomCarProjectOffroadWheelRear, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USomeRandomCarProjectOffroadWheelRear), 288330794U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_cupra_OneDrive_Desktop_CorrectCarGame_SomeRandomCarProject_SomeRandomCarProject_SomeRandomCarProject_Source_SomeRandomCarProject_SomeRandomCarProjectOffroadWheelRear_h_2662142413(TEXT("/Script/SomeRandomCarProject"),
	Z_CompiledInDeferFile_FID_Users_cupra_OneDrive_Desktop_CorrectCarGame_SomeRandomCarProject_SomeRandomCarProject_SomeRandomCarProject_Source_SomeRandomCarProject_SomeRandomCarProjectOffroadWheelRear_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_cupra_OneDrive_Desktop_CorrectCarGame_SomeRandomCarProject_SomeRandomCarProject_SomeRandomCarProject_Source_SomeRandomCarProject_SomeRandomCarProjectOffroadWheelRear_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
