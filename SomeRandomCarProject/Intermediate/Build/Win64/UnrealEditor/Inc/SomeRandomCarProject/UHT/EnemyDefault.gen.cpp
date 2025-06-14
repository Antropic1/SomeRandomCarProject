// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SomeRandomCarProject/EnemyDefault.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemyDefault() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
SOMERANDOMCARPROJECT_API UClass* Z_Construct_UClass_AEnemyDefault();
SOMERANDOMCARPROJECT_API UClass* Z_Construct_UClass_AEnemyDefault_NoRegister();
UPackage* Z_Construct_UPackage__Script_SomeRandomCarProject();
// End Cross Module References

// Begin Class AEnemyDefault
void AEnemyDefault::StaticRegisterNativesAEnemyDefault()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AEnemyDefault);
UClass* Z_Construct_UClass_AEnemyDefault_NoRegister()
{
	return AEnemyDefault::StaticClass();
}
struct Z_Construct_UClass_AEnemyDefault_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "EnemyDefault.h" },
		{ "ModuleRelativePath", "EnemyDefault.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemyDefault>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AEnemyDefault_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_SomeRandomCarProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyDefault_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AEnemyDefault_Statics::ClassParams = {
	&AEnemyDefault::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyDefault_Statics::Class_MetaDataParams), Z_Construct_UClass_AEnemyDefault_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AEnemyDefault()
{
	if (!Z_Registration_Info_UClass_AEnemyDefault.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AEnemyDefault.OuterSingleton, Z_Construct_UClass_AEnemyDefault_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AEnemyDefault.OuterSingleton;
}
template<> SOMERANDOMCARPROJECT_API UClass* StaticClass<AEnemyDefault>()
{
	return AEnemyDefault::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemyDefault);
AEnemyDefault::~AEnemyDefault() {}
// End Class AEnemyDefault

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_cupra_OneDrive_Desktop_CorrectCarGame_SomeRandomCarProject_SomeRandomCarProject_SomeRandomCarProject_Source_SomeRandomCarProject_EnemyDefault_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AEnemyDefault, AEnemyDefault::StaticClass, TEXT("AEnemyDefault"), &Z_Registration_Info_UClass_AEnemyDefault, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEnemyDefault), 3973210949U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_cupra_OneDrive_Desktop_CorrectCarGame_SomeRandomCarProject_SomeRandomCarProject_SomeRandomCarProject_Source_SomeRandomCarProject_EnemyDefault_h_1748938942(TEXT("/Script/SomeRandomCarProject"),
	Z_CompiledInDeferFile_FID_Users_cupra_OneDrive_Desktop_CorrectCarGame_SomeRandomCarProject_SomeRandomCarProject_SomeRandomCarProject_Source_SomeRandomCarProject_EnemyDefault_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_cupra_OneDrive_Desktop_CorrectCarGame_SomeRandomCarProject_SomeRandomCarProject_SomeRandomCarProject_Source_SomeRandomCarProject_EnemyDefault_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
