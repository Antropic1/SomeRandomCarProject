// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SomeRandomCarProject/EnemyDefaultAIController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemyDefaultAIController() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_AAIController();
SOMERANDOMCARPROJECT_API UClass* Z_Construct_UClass_AEnemyDefaultAIController();
SOMERANDOMCARPROJECT_API UClass* Z_Construct_UClass_AEnemyDefaultAIController_NoRegister();
UPackage* Z_Construct_UPackage__Script_SomeRandomCarProject();
// End Cross Module References

// Begin Class AEnemyDefaultAIController
void AEnemyDefaultAIController::StaticRegisterNativesAEnemyDefaultAIController()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AEnemyDefaultAIController);
UClass* Z_Construct_UClass_AEnemyDefaultAIController_NoRegister()
{
	return AEnemyDefaultAIController::StaticClass();
}
struct Z_Construct_UClass_AEnemyDefaultAIController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "EnemyDefaultAIController.h" },
		{ "ModuleRelativePath", "EnemyDefaultAIController.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemyDefaultAIController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AEnemyDefaultAIController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AAIController,
	(UObject* (*)())Z_Construct_UPackage__Script_SomeRandomCarProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyDefaultAIController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AEnemyDefaultAIController_Statics::ClassParams = {
	&AEnemyDefaultAIController::StaticClass,
	"Engine",
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyDefaultAIController_Statics::Class_MetaDataParams), Z_Construct_UClass_AEnemyDefaultAIController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AEnemyDefaultAIController()
{
	if (!Z_Registration_Info_UClass_AEnemyDefaultAIController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AEnemyDefaultAIController.OuterSingleton, Z_Construct_UClass_AEnemyDefaultAIController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AEnemyDefaultAIController.OuterSingleton;
}
template<> SOMERANDOMCARPROJECT_API UClass* StaticClass<AEnemyDefaultAIController>()
{
	return AEnemyDefaultAIController::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemyDefaultAIController);
AEnemyDefaultAIController::~AEnemyDefaultAIController() {}
// End Class AEnemyDefaultAIController

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_cupra_OneDrive_Desktop_CorrectCarGame_SomeRandomCarProject_SomeRandomCarProject_SomeRandomCarProject_Source_SomeRandomCarProject_EnemyDefaultAIController_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AEnemyDefaultAIController, AEnemyDefaultAIController::StaticClass, TEXT("AEnemyDefaultAIController"), &Z_Registration_Info_UClass_AEnemyDefaultAIController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEnemyDefaultAIController), 1294124975U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_cupra_OneDrive_Desktop_CorrectCarGame_SomeRandomCarProject_SomeRandomCarProject_SomeRandomCarProject_Source_SomeRandomCarProject_EnemyDefaultAIController_h_472596720(TEXT("/Script/SomeRandomCarProject"),
	Z_CompiledInDeferFile_FID_Users_cupra_OneDrive_Desktop_CorrectCarGame_SomeRandomCarProject_SomeRandomCarProject_SomeRandomCarProject_Source_SomeRandomCarProject_EnemyDefaultAIController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_cupra_OneDrive_Desktop_CorrectCarGame_SomeRandomCarProject_SomeRandomCarProject_SomeRandomCarProject_Source_SomeRandomCarProject_EnemyDefaultAIController_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
