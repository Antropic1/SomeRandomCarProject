// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SomeRandomCarProject/SomeRandomCarProjectSportsCar.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSomeRandomCarProjectSportsCar() {}

// Begin Cross Module References
SOMERANDOMCARPROJECT_API UClass* Z_Construct_UClass_ASomeRandomCarProjectPawn();
SOMERANDOMCARPROJECT_API UClass* Z_Construct_UClass_ASomeRandomCarProjectSportsCar();
SOMERANDOMCARPROJECT_API UClass* Z_Construct_UClass_ASomeRandomCarProjectSportsCar_NoRegister();
UPackage* Z_Construct_UPackage__Script_SomeRandomCarProject();
// End Cross Module References

// Begin Class ASomeRandomCarProjectSportsCar
void ASomeRandomCarProjectSportsCar::StaticRegisterNativesASomeRandomCarProjectSportsCar()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASomeRandomCarProjectSportsCar);
UClass* Z_Construct_UClass_ASomeRandomCarProjectSportsCar_NoRegister()
{
	return ASomeRandomCarProjectSportsCar::StaticClass();
}
struct Z_Construct_UClass_ASomeRandomCarProjectSportsCar_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Sports car wheeled vehicle implementation\n */" },
#endif
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "SomeRandomCarProjectSportsCar.h" },
		{ "ModuleRelativePath", "SomeRandomCarProjectSportsCar.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sports car wheeled vehicle implementation" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASomeRandomCarProjectSportsCar>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ASomeRandomCarProjectSportsCar_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ASomeRandomCarProjectPawn,
	(UObject* (*)())Z_Construct_UPackage__Script_SomeRandomCarProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASomeRandomCarProjectSportsCar_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASomeRandomCarProjectSportsCar_Statics::ClassParams = {
	&ASomeRandomCarProjectSportsCar::StaticClass,
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
	0x009000A5u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASomeRandomCarProjectSportsCar_Statics::Class_MetaDataParams), Z_Construct_UClass_ASomeRandomCarProjectSportsCar_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASomeRandomCarProjectSportsCar()
{
	if (!Z_Registration_Info_UClass_ASomeRandomCarProjectSportsCar.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASomeRandomCarProjectSportsCar.OuterSingleton, Z_Construct_UClass_ASomeRandomCarProjectSportsCar_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASomeRandomCarProjectSportsCar.OuterSingleton;
}
template<> SOMERANDOMCARPROJECT_API UClass* StaticClass<ASomeRandomCarProjectSportsCar>()
{
	return ASomeRandomCarProjectSportsCar::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASomeRandomCarProjectSportsCar);
ASomeRandomCarProjectSportsCar::~ASomeRandomCarProjectSportsCar() {}
// End Class ASomeRandomCarProjectSportsCar

// Begin Registration
struct Z_CompiledInDeferFile_FID_anthony_Documents_Unreal_Projects_SomeRandomCarProject_Source_SomeRandomCarProject_SomeRandomCarProjectSportsCar_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASomeRandomCarProjectSportsCar, ASomeRandomCarProjectSportsCar::StaticClass, TEXT("ASomeRandomCarProjectSportsCar"), &Z_Registration_Info_UClass_ASomeRandomCarProjectSportsCar, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASomeRandomCarProjectSportsCar), 909716557U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_anthony_Documents_Unreal_Projects_SomeRandomCarProject_Source_SomeRandomCarProject_SomeRandomCarProjectSportsCar_h_2413680913(TEXT("/Script/SomeRandomCarProject"),
	Z_CompiledInDeferFile_FID_anthony_Documents_Unreal_Projects_SomeRandomCarProject_Source_SomeRandomCarProject_SomeRandomCarProjectSportsCar_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_anthony_Documents_Unreal_Projects_SomeRandomCarProject_Source_SomeRandomCarProject_SomeRandomCarProjectSportsCar_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
