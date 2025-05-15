// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SomeRandomCarProject/SomeRandomCarProjectGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSomeRandomCarProjectGameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
SOMERANDOMCARPROJECT_API UClass* Z_Construct_UClass_ASomeRandomCarProjectGameMode();
SOMERANDOMCARPROJECT_API UClass* Z_Construct_UClass_ASomeRandomCarProjectGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_SomeRandomCarProject();
// End Cross Module References

// Begin Class ASomeRandomCarProjectGameMode
void ASomeRandomCarProjectGameMode::StaticRegisterNativesASomeRandomCarProjectGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASomeRandomCarProjectGameMode);
UClass* Z_Construct_UClass_ASomeRandomCarProjectGameMode_NoRegister()
{
	return ASomeRandomCarProjectGameMode::StaticClass();
}
struct Z_Construct_UClass_ASomeRandomCarProjectGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "SomeRandomCarProjectGameMode.h" },
		{ "ModuleRelativePath", "SomeRandomCarProjectGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASomeRandomCarProjectGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ASomeRandomCarProjectGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_SomeRandomCarProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASomeRandomCarProjectGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASomeRandomCarProjectGameMode_Statics::ClassParams = {
	&ASomeRandomCarProjectGameMode::StaticClass,
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
	0x008802ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASomeRandomCarProjectGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ASomeRandomCarProjectGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASomeRandomCarProjectGameMode()
{
	if (!Z_Registration_Info_UClass_ASomeRandomCarProjectGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASomeRandomCarProjectGameMode.OuterSingleton, Z_Construct_UClass_ASomeRandomCarProjectGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASomeRandomCarProjectGameMode.OuterSingleton;
}
template<> SOMERANDOMCARPROJECT_API UClass* StaticClass<ASomeRandomCarProjectGameMode>()
{
	return ASomeRandomCarProjectGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASomeRandomCarProjectGameMode);
ASomeRandomCarProjectGameMode::~ASomeRandomCarProjectGameMode() {}
// End Class ASomeRandomCarProjectGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_anthony_Documents_Unreal_Projects_SomeRandomCarProject_Source_SomeRandomCarProject_SomeRandomCarProjectGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASomeRandomCarProjectGameMode, ASomeRandomCarProjectGameMode::StaticClass, TEXT("ASomeRandomCarProjectGameMode"), &Z_Registration_Info_UClass_ASomeRandomCarProjectGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASomeRandomCarProjectGameMode), 1795863920U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_anthony_Documents_Unreal_Projects_SomeRandomCarProject_Source_SomeRandomCarProject_SomeRandomCarProjectGameMode_h_3792089668(TEXT("/Script/SomeRandomCarProject"),
	Z_CompiledInDeferFile_FID_anthony_Documents_Unreal_Projects_SomeRandomCarProject_Source_SomeRandomCarProject_SomeRandomCarProjectGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_anthony_Documents_Unreal_Projects_SomeRandomCarProject_Source_SomeRandomCarProject_SomeRandomCarProjectGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
