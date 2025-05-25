// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SomeRandomCarProject/SomeRandomCarProjectWheelRear.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSomeRandomCarProjectWheelRear() {}

// Begin Cross Module References
CHAOSVEHICLES_API UClass* Z_Construct_UClass_UChaosVehicleWheel();
SOMERANDOMCARPROJECT_API UClass* Z_Construct_UClass_USomeRandomCarProjectWheelRear();
SOMERANDOMCARPROJECT_API UClass* Z_Construct_UClass_USomeRandomCarProjectWheelRear_NoRegister();
UPackage* Z_Construct_UPackage__Script_SomeRandomCarProject();
// End Cross Module References

// Begin Class USomeRandomCarProjectWheelRear
void USomeRandomCarProjectWheelRear::StaticRegisterNativesUSomeRandomCarProjectWheelRear()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USomeRandomCarProjectWheelRear);
UClass* Z_Construct_UClass_USomeRandomCarProjectWheelRear_NoRegister()
{
	return USomeRandomCarProjectWheelRear::StaticClass();
}
struct Z_Construct_UClass_USomeRandomCarProjectWheelRear_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Base rear wheel definition.\n */" },
#endif
		{ "IncludePath", "SomeRandomCarProjectWheelRear.h" },
		{ "ModuleRelativePath", "SomeRandomCarProjectWheelRear.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Base rear wheel definition." },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USomeRandomCarProjectWheelRear>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USomeRandomCarProjectWheelRear_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UChaosVehicleWheel,
	(UObject* (*)())Z_Construct_UPackage__Script_SomeRandomCarProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USomeRandomCarProjectWheelRear_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USomeRandomCarProjectWheelRear_Statics::ClassParams = {
	&USomeRandomCarProjectWheelRear::StaticClass,
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
	0x008000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USomeRandomCarProjectWheelRear_Statics::Class_MetaDataParams), Z_Construct_UClass_USomeRandomCarProjectWheelRear_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USomeRandomCarProjectWheelRear()
{
	if (!Z_Registration_Info_UClass_USomeRandomCarProjectWheelRear.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USomeRandomCarProjectWheelRear.OuterSingleton, Z_Construct_UClass_USomeRandomCarProjectWheelRear_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USomeRandomCarProjectWheelRear.OuterSingleton;
}
template<> SOMERANDOMCARPROJECT_API UClass* StaticClass<USomeRandomCarProjectWheelRear>()
{
	return USomeRandomCarProjectWheelRear::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USomeRandomCarProjectWheelRear);
USomeRandomCarProjectWheelRear::~USomeRandomCarProjectWheelRear() {}
// End Class USomeRandomCarProjectWheelRear

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_cupra_OneDrive_Desktop_CorrectCarGame_SomeRandomCarProject_SomeRandomCarProject_SomeRandomCarProject_Source_SomeRandomCarProject_SomeRandomCarProjectWheelRear_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USomeRandomCarProjectWheelRear, USomeRandomCarProjectWheelRear::StaticClass, TEXT("USomeRandomCarProjectWheelRear"), &Z_Registration_Info_UClass_USomeRandomCarProjectWheelRear, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USomeRandomCarProjectWheelRear), 392724476U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_cupra_OneDrive_Desktop_CorrectCarGame_SomeRandomCarProject_SomeRandomCarProject_SomeRandomCarProject_Source_SomeRandomCarProject_SomeRandomCarProjectWheelRear_h_553105982(TEXT("/Script/SomeRandomCarProject"),
	Z_CompiledInDeferFile_FID_Users_cupra_OneDrive_Desktop_CorrectCarGame_SomeRandomCarProject_SomeRandomCarProject_SomeRandomCarProject_Source_SomeRandomCarProject_SomeRandomCarProjectWheelRear_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_cupra_OneDrive_Desktop_CorrectCarGame_SomeRandomCarProject_SomeRandomCarProject_SomeRandomCarProject_Source_SomeRandomCarProject_SomeRandomCarProjectWheelRear_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
