// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SomeRandomCarProject/SomeRandomCarProjectSportsWheelRear.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSomeRandomCarProjectSportsWheelRear() {}

// Begin Cross Module References
SOMERANDOMCARPROJECT_API UClass* Z_Construct_UClass_USomeRandomCarProjectSportsWheelRear();
SOMERANDOMCARPROJECT_API UClass* Z_Construct_UClass_USomeRandomCarProjectSportsWheelRear_NoRegister();
SOMERANDOMCARPROJECT_API UClass* Z_Construct_UClass_USomeRandomCarProjectWheelRear();
UPackage* Z_Construct_UPackage__Script_SomeRandomCarProject();
// End Cross Module References

// Begin Class USomeRandomCarProjectSportsWheelRear
void USomeRandomCarProjectSportsWheelRear::StaticRegisterNativesUSomeRandomCarProjectSportsWheelRear()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USomeRandomCarProjectSportsWheelRear);
UClass* Z_Construct_UClass_USomeRandomCarProjectSportsWheelRear_NoRegister()
{
	return USomeRandomCarProjectSportsWheelRear::StaticClass();
}
struct Z_Construct_UClass_USomeRandomCarProjectSportsWheelRear_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Rear wheel definition for Sports Car.\n */" },
#endif
		{ "IncludePath", "SomeRandomCarProjectSportsWheelRear.h" },
		{ "ModuleRelativePath", "SomeRandomCarProjectSportsWheelRear.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Rear wheel definition for Sports Car." },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USomeRandomCarProjectSportsWheelRear>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USomeRandomCarProjectSportsWheelRear_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USomeRandomCarProjectWheelRear,
	(UObject* (*)())Z_Construct_UPackage__Script_SomeRandomCarProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USomeRandomCarProjectSportsWheelRear_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USomeRandomCarProjectSportsWheelRear_Statics::ClassParams = {
	&USomeRandomCarProjectSportsWheelRear::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USomeRandomCarProjectSportsWheelRear_Statics::Class_MetaDataParams), Z_Construct_UClass_USomeRandomCarProjectSportsWheelRear_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USomeRandomCarProjectSportsWheelRear()
{
	if (!Z_Registration_Info_UClass_USomeRandomCarProjectSportsWheelRear.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USomeRandomCarProjectSportsWheelRear.OuterSingleton, Z_Construct_UClass_USomeRandomCarProjectSportsWheelRear_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USomeRandomCarProjectSportsWheelRear.OuterSingleton;
}
template<> SOMERANDOMCARPROJECT_API UClass* StaticClass<USomeRandomCarProjectSportsWheelRear>()
{
	return USomeRandomCarProjectSportsWheelRear::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USomeRandomCarProjectSportsWheelRear);
USomeRandomCarProjectSportsWheelRear::~USomeRandomCarProjectSportsWheelRear() {}
// End Class USomeRandomCarProjectSportsWheelRear

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_cupra_OneDrive_Desktop_CorrectCarGame_SomeRandomCarProject_SomeRandomCarProject_SomeRandomCarProject_Source_SomeRandomCarProject_SomeRandomCarProjectSportsWheelRear_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USomeRandomCarProjectSportsWheelRear, USomeRandomCarProjectSportsWheelRear::StaticClass, TEXT("USomeRandomCarProjectSportsWheelRear"), &Z_Registration_Info_UClass_USomeRandomCarProjectSportsWheelRear, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USomeRandomCarProjectSportsWheelRear), 3340105909U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_cupra_OneDrive_Desktop_CorrectCarGame_SomeRandomCarProject_SomeRandomCarProject_SomeRandomCarProject_Source_SomeRandomCarProject_SomeRandomCarProjectSportsWheelRear_h_2674453281(TEXT("/Script/SomeRandomCarProject"),
	Z_CompiledInDeferFile_FID_Users_cupra_OneDrive_Desktop_CorrectCarGame_SomeRandomCarProject_SomeRandomCarProject_SomeRandomCarProject_Source_SomeRandomCarProject_SomeRandomCarProjectSportsWheelRear_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_cupra_OneDrive_Desktop_CorrectCarGame_SomeRandomCarProject_SomeRandomCarProject_SomeRandomCarProject_Source_SomeRandomCarProject_SomeRandomCarProjectSportsWheelRear_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
