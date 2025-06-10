// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SomeRandomCarProject/A_CarGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeA_CarGameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
SOMERANDOMCARPROJECT_API UClass* Z_Construct_UClass_AA_CarGameMode();
SOMERANDOMCARPROJECT_API UClass* Z_Construct_UClass_AA_CarGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_SomeRandomCarProject();
// End Cross Module References

// Begin Class AA_CarGameMode
void AA_CarGameMode::StaticRegisterNativesAA_CarGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AA_CarGameMode);
UClass* Z_Construct_UClass_AA_CarGameMode_NoRegister()
{
	return AA_CarGameMode::StaticClass();
}
struct Z_Construct_UClass_AA_CarGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "A_CarGameMode.h" },
		{ "ModuleRelativePath", "A_CarGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AA_CarGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AA_CarGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_SomeRandomCarProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AA_CarGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AA_CarGameMode_Statics::ClassParams = {
	&AA_CarGameMode::StaticClass,
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
	0x009002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AA_CarGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AA_CarGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AA_CarGameMode()
{
	if (!Z_Registration_Info_UClass_AA_CarGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AA_CarGameMode.OuterSingleton, Z_Construct_UClass_AA_CarGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AA_CarGameMode.OuterSingleton;
}
template<> SOMERANDOMCARPROJECT_API UClass* StaticClass<AA_CarGameMode>()
{
	return AA_CarGameMode::StaticClass();
}
AA_CarGameMode::AA_CarGameMode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AA_CarGameMode);
AA_CarGameMode::~AA_CarGameMode() {}
// End Class AA_CarGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_cupra_OneDrive_Desktop_CorrectCarGame_SomeRandomCarProject_SomeRandomCarProject_SomeRandomCarProject_Source_SomeRandomCarProject_A_CarGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AA_CarGameMode, AA_CarGameMode::StaticClass, TEXT("AA_CarGameMode"), &Z_Registration_Info_UClass_AA_CarGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AA_CarGameMode), 3160794454U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_cupra_OneDrive_Desktop_CorrectCarGame_SomeRandomCarProject_SomeRandomCarProject_SomeRandomCarProject_Source_SomeRandomCarProject_A_CarGameMode_h_4287504093(TEXT("/Script/SomeRandomCarProject"),
	Z_CompiledInDeferFile_FID_Users_cupra_OneDrive_Desktop_CorrectCarGame_SomeRandomCarProject_SomeRandomCarProject_SomeRandomCarProject_Source_SomeRandomCarProject_A_CarGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_cupra_OneDrive_Desktop_CorrectCarGame_SomeRandomCarProject_SomeRandomCarProject_SomeRandomCarProject_Source_SomeRandomCarProject_A_CarGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
