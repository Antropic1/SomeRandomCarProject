// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SomeRandomCarProject/SomeRandomCarProjectOffroadCar.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSomeRandomCarProjectOffroadCar() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
SOMERANDOMCARPROJECT_API UClass* Z_Construct_UClass_ASomeRandomCarProjectOffroadCar();
SOMERANDOMCARPROJECT_API UClass* Z_Construct_UClass_ASomeRandomCarProjectOffroadCar_NoRegister();
SOMERANDOMCARPROJECT_API UClass* Z_Construct_UClass_ASomeRandomCarProjectPawn();
UPackage* Z_Construct_UPackage__Script_SomeRandomCarProject();
// End Cross Module References

// Begin Class ASomeRandomCarProjectOffroadCar
void ASomeRandomCarProjectOffroadCar::StaticRegisterNativesASomeRandomCarProjectOffroadCar()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASomeRandomCarProjectOffroadCar);
UClass* Z_Construct_UClass_ASomeRandomCarProjectOffroadCar_NoRegister()
{
	return ASomeRandomCarProjectOffroadCar::StaticClass();
}
struct Z_Construct_UClass_ASomeRandomCarProjectOffroadCar_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Offroad car wheeled vehicle implementation\n */" },
#endif
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "SomeRandomCarProjectOffroadCar.h" },
		{ "ModuleRelativePath", "SomeRandomCarProjectOffroadCar.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Offroad car wheeled vehicle implementation" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Chassis_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Meshes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Chassis static mesh */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SomeRandomCarProjectOffroadCar.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Chassis static mesh" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TireFrontLeft_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Meshes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** FL Tire static mesh */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SomeRandomCarProjectOffroadCar.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "FL Tire static mesh" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TireFrontRight_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Meshes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** FR Tire static mesh */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SomeRandomCarProjectOffroadCar.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "FR Tire static mesh" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TireRearLeft_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Meshes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** RL Tire static mesh */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SomeRandomCarProjectOffroadCar.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "RL Tire static mesh" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TireRearRight_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Meshes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** RR Tire static mesh */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SomeRandomCarProjectOffroadCar.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "RR Tire static mesh" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Chassis;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TireFrontLeft;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TireFrontRight;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TireRearLeft;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TireRearRight;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASomeRandomCarProjectOffroadCar>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASomeRandomCarProjectOffroadCar_Statics::NewProp_Chassis = { "Chassis", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASomeRandomCarProjectOffroadCar, Chassis), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Chassis_MetaData), NewProp_Chassis_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASomeRandomCarProjectOffroadCar_Statics::NewProp_TireFrontLeft = { "TireFrontLeft", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASomeRandomCarProjectOffroadCar, TireFrontLeft), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TireFrontLeft_MetaData), NewProp_TireFrontLeft_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASomeRandomCarProjectOffroadCar_Statics::NewProp_TireFrontRight = { "TireFrontRight", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASomeRandomCarProjectOffroadCar, TireFrontRight), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TireFrontRight_MetaData), NewProp_TireFrontRight_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASomeRandomCarProjectOffroadCar_Statics::NewProp_TireRearLeft = { "TireRearLeft", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASomeRandomCarProjectOffroadCar, TireRearLeft), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TireRearLeft_MetaData), NewProp_TireRearLeft_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASomeRandomCarProjectOffroadCar_Statics::NewProp_TireRearRight = { "TireRearRight", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASomeRandomCarProjectOffroadCar, TireRearRight), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TireRearRight_MetaData), NewProp_TireRearRight_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASomeRandomCarProjectOffroadCar_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASomeRandomCarProjectOffroadCar_Statics::NewProp_Chassis,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASomeRandomCarProjectOffroadCar_Statics::NewProp_TireFrontLeft,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASomeRandomCarProjectOffroadCar_Statics::NewProp_TireFrontRight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASomeRandomCarProjectOffroadCar_Statics::NewProp_TireRearLeft,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASomeRandomCarProjectOffroadCar_Statics::NewProp_TireRearRight,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASomeRandomCarProjectOffroadCar_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ASomeRandomCarProjectOffroadCar_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ASomeRandomCarProjectPawn,
	(UObject* (*)())Z_Construct_UPackage__Script_SomeRandomCarProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASomeRandomCarProjectOffroadCar_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASomeRandomCarProjectOffroadCar_Statics::ClassParams = {
	&ASomeRandomCarProjectOffroadCar::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ASomeRandomCarProjectOffroadCar_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ASomeRandomCarProjectOffroadCar_Statics::PropPointers),
	0,
	0x009000A5u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASomeRandomCarProjectOffroadCar_Statics::Class_MetaDataParams), Z_Construct_UClass_ASomeRandomCarProjectOffroadCar_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASomeRandomCarProjectOffroadCar()
{
	if (!Z_Registration_Info_UClass_ASomeRandomCarProjectOffroadCar.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASomeRandomCarProjectOffroadCar.OuterSingleton, Z_Construct_UClass_ASomeRandomCarProjectOffroadCar_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASomeRandomCarProjectOffroadCar.OuterSingleton;
}
template<> SOMERANDOMCARPROJECT_API UClass* StaticClass<ASomeRandomCarProjectOffroadCar>()
{
	return ASomeRandomCarProjectOffroadCar::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASomeRandomCarProjectOffroadCar);
ASomeRandomCarProjectOffroadCar::~ASomeRandomCarProjectOffroadCar() {}
// End Class ASomeRandomCarProjectOffroadCar

// Begin Registration
struct Z_CompiledInDeferFile_FID_SomeRandomCarProject_Source_SomeRandomCarProject_SomeRandomCarProjectOffroadCar_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASomeRandomCarProjectOffroadCar, ASomeRandomCarProjectOffroadCar::StaticClass, TEXT("ASomeRandomCarProjectOffroadCar"), &Z_Registration_Info_UClass_ASomeRandomCarProjectOffroadCar, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASomeRandomCarProjectOffroadCar), 3559743029U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SomeRandomCarProject_Source_SomeRandomCarProject_SomeRandomCarProjectOffroadCar_h_661501571(TEXT("/Script/SomeRandomCarProject"),
	Z_CompiledInDeferFile_FID_SomeRandomCarProject_Source_SomeRandomCarProject_SomeRandomCarProjectOffroadCar_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SomeRandomCarProject_Source_SomeRandomCarProject_SomeRandomCarProjectOffroadCar_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
