// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SomeRandomCarProject/A_PlayerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeA_PlayerController() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
SOMERANDOMCARPROJECT_API UClass* Z_Construct_UClass_AA_PlayerController();
SOMERANDOMCARPROJECT_API UClass* Z_Construct_UClass_AA_PlayerController_NoRegister();
UPackage* Z_Construct_UPackage__Script_SomeRandomCarProject();
// End Cross Module References

// Begin Class AA_PlayerController
void AA_PlayerController::StaticRegisterNativesAA_PlayerController()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AA_PlayerController);
UClass* Z_Construct_UClass_AA_PlayerController_NoRegister()
{
	return AA_PlayerController::StaticClass();
}
struct Z_Construct_UClass_AA_PlayerController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "A_PlayerController.h" },
		{ "ModuleRelativePath", "A_PlayerController.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AA_PlayerController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AA_PlayerController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_SomeRandomCarProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AA_PlayerController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AA_PlayerController_Statics::ClassParams = {
	&AA_PlayerController::StaticClass,
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
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AA_PlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_AA_PlayerController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AA_PlayerController()
{
	if (!Z_Registration_Info_UClass_AA_PlayerController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AA_PlayerController.OuterSingleton, Z_Construct_UClass_AA_PlayerController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AA_PlayerController.OuterSingleton;
}
template<> SOMERANDOMCARPROJECT_API UClass* StaticClass<AA_PlayerController>()
{
	return AA_PlayerController::StaticClass();
}
AA_PlayerController::AA_PlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AA_PlayerController);
AA_PlayerController::~AA_PlayerController() {}
// End Class AA_PlayerController

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_cupra_OneDrive_Desktop_CorrectCarGame_SomeRandomCarProject_SomeRandomCarProject_SomeRandomCarProject_Source_SomeRandomCarProject_A_PlayerController_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AA_PlayerController, AA_PlayerController::StaticClass, TEXT("AA_PlayerController"), &Z_Registration_Info_UClass_AA_PlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AA_PlayerController), 3293998765U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_cupra_OneDrive_Desktop_CorrectCarGame_SomeRandomCarProject_SomeRandomCarProject_SomeRandomCarProject_Source_SomeRandomCarProject_A_PlayerController_h_3509906718(TEXT("/Script/SomeRandomCarProject"),
	Z_CompiledInDeferFile_FID_Users_cupra_OneDrive_Desktop_CorrectCarGame_SomeRandomCarProject_SomeRandomCarProject_SomeRandomCarProject_Source_SomeRandomCarProject_A_PlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_cupra_OneDrive_Desktop_CorrectCarGame_SomeRandomCarProject_SomeRandomCarProject_SomeRandomCarProject_Source_SomeRandomCarProject_A_PlayerController_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
