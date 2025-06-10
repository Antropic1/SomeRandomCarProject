// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SomeRandomCarProject/A_PlayerCar.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeA_PlayerCar() {}

// Begin Cross Module References
CHAOSVEHICLES_API UClass* Z_Construct_UClass_AWheeledVehiclePawn();
SOMERANDOMCARPROJECT_API UClass* Z_Construct_UClass_AA_PlayerCar();
SOMERANDOMCARPROJECT_API UClass* Z_Construct_UClass_AA_PlayerCar_NoRegister();
UPackage* Z_Construct_UPackage__Script_SomeRandomCarProject();
// End Cross Module References

// Begin Class AA_PlayerCar
void AA_PlayerCar::StaticRegisterNativesAA_PlayerCar()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AA_PlayerCar);
UClass* Z_Construct_UClass_AA_PlayerCar_NoRegister()
{
	return AA_PlayerCar::StaticClass();
}
struct Z_Construct_UClass_AA_PlayerCar_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "A_PlayerCar.h" },
		{ "ModuleRelativePath", "A_PlayerCar.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AA_PlayerCar>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AA_PlayerCar_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AWheeledVehiclePawn,
	(UObject* (*)())Z_Construct_UPackage__Script_SomeRandomCarProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AA_PlayerCar_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AA_PlayerCar_Statics::ClassParams = {
	&AA_PlayerCar::StaticClass,
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
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AA_PlayerCar_Statics::Class_MetaDataParams), Z_Construct_UClass_AA_PlayerCar_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AA_PlayerCar()
{
	if (!Z_Registration_Info_UClass_AA_PlayerCar.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AA_PlayerCar.OuterSingleton, Z_Construct_UClass_AA_PlayerCar_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AA_PlayerCar.OuterSingleton;
}
template<> SOMERANDOMCARPROJECT_API UClass* StaticClass<AA_PlayerCar>()
{
	return AA_PlayerCar::StaticClass();
}
AA_PlayerCar::AA_PlayerCar(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AA_PlayerCar);
AA_PlayerCar::~AA_PlayerCar() {}
// End Class AA_PlayerCar

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_cupra_OneDrive_Desktop_CorrectCarGame_SomeRandomCarProject_SomeRandomCarProject_SomeRandomCarProject_Source_SomeRandomCarProject_A_PlayerCar_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AA_PlayerCar, AA_PlayerCar::StaticClass, TEXT("AA_PlayerCar"), &Z_Registration_Info_UClass_AA_PlayerCar, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AA_PlayerCar), 288245339U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_cupra_OneDrive_Desktop_CorrectCarGame_SomeRandomCarProject_SomeRandomCarProject_SomeRandomCarProject_Source_SomeRandomCarProject_A_PlayerCar_h_3782474233(TEXT("/Script/SomeRandomCarProject"),
	Z_CompiledInDeferFile_FID_Users_cupra_OneDrive_Desktop_CorrectCarGame_SomeRandomCarProject_SomeRandomCarProject_SomeRandomCarProject_Source_SomeRandomCarProject_A_PlayerCar_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_cupra_OneDrive_Desktop_CorrectCarGame_SomeRandomCarProject_SomeRandomCarProject_SomeRandomCarProject_Source_SomeRandomCarProject_A_PlayerCar_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
