// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SomeRandomCarProject/SomeRandomCarProjectWheelFront.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSomeRandomCarProjectWheelFront() {}

// Begin Cross Module References
CHAOSVEHICLES_API UClass* Z_Construct_UClass_UChaosVehicleWheel();
SOMERANDOMCARPROJECT_API UClass* Z_Construct_UClass_USomeRandomCarProjectWheelFront();
SOMERANDOMCARPROJECT_API UClass* Z_Construct_UClass_USomeRandomCarProjectWheelFront_NoRegister();
UPackage* Z_Construct_UPackage__Script_SomeRandomCarProject();
// End Cross Module References

// Begin Class USomeRandomCarProjectWheelFront
void USomeRandomCarProjectWheelFront::StaticRegisterNativesUSomeRandomCarProjectWheelFront()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USomeRandomCarProjectWheelFront);
UClass* Z_Construct_UClass_USomeRandomCarProjectWheelFront_NoRegister()
{
	return USomeRandomCarProjectWheelFront::StaticClass();
}
struct Z_Construct_UClass_USomeRandomCarProjectWheelFront_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Base front wheel definition.\n */" },
#endif
		{ "IncludePath", "SomeRandomCarProjectWheelFront.h" },
		{ "ModuleRelativePath", "SomeRandomCarProjectWheelFront.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Base front wheel definition." },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USomeRandomCarProjectWheelFront>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USomeRandomCarProjectWheelFront_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UChaosVehicleWheel,
	(UObject* (*)())Z_Construct_UPackage__Script_SomeRandomCarProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USomeRandomCarProjectWheelFront_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USomeRandomCarProjectWheelFront_Statics::ClassParams = {
	&USomeRandomCarProjectWheelFront::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USomeRandomCarProjectWheelFront_Statics::Class_MetaDataParams), Z_Construct_UClass_USomeRandomCarProjectWheelFront_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USomeRandomCarProjectWheelFront()
{
	if (!Z_Registration_Info_UClass_USomeRandomCarProjectWheelFront.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USomeRandomCarProjectWheelFront.OuterSingleton, Z_Construct_UClass_USomeRandomCarProjectWheelFront_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USomeRandomCarProjectWheelFront.OuterSingleton;
}
template<> SOMERANDOMCARPROJECT_API UClass* StaticClass<USomeRandomCarProjectWheelFront>()
{
	return USomeRandomCarProjectWheelFront::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USomeRandomCarProjectWheelFront);
USomeRandomCarProjectWheelFront::~USomeRandomCarProjectWheelFront() {}
// End Class USomeRandomCarProjectWheelFront

// Begin Registration
struct Z_CompiledInDeferFile_FID_SomeRandomCarProject_Source_SomeRandomCarProject_SomeRandomCarProjectWheelFront_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USomeRandomCarProjectWheelFront, USomeRandomCarProjectWheelFront::StaticClass, TEXT("USomeRandomCarProjectWheelFront"), &Z_Registration_Info_UClass_USomeRandomCarProjectWheelFront, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USomeRandomCarProjectWheelFront), 593896245U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SomeRandomCarProject_Source_SomeRandomCarProject_SomeRandomCarProjectWheelFront_h_3869868229(TEXT("/Script/SomeRandomCarProject"),
	Z_CompiledInDeferFile_FID_SomeRandomCarProject_Source_SomeRandomCarProject_SomeRandomCarProjectWheelFront_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SomeRandomCarProject_Source_SomeRandomCarProject_SomeRandomCarProjectWheelFront_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
