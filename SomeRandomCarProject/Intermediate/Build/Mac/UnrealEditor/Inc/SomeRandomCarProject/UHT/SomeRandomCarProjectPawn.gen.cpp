// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SomeRandomCarProject/SomeRandomCarProjectPawn.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSomeRandomCarProjectPawn() {}

// Begin Cross Module References
CHAOSVEHICLES_API UClass* Z_Construct_UClass_AWheeledVehiclePawn();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
SOMERANDOMCARPROJECT_API UClass* Z_Construct_UClass_ASomeRandomCarProjectPawn();
SOMERANDOMCARPROJECT_API UClass* Z_Construct_UClass_ASomeRandomCarProjectPawn_NoRegister();
UPackage* Z_Construct_UPackage__Script_SomeRandomCarProject();
// End Cross Module References

// Begin Class ASomeRandomCarProjectPawn Function BrakeLights
struct SomeRandomCarProjectPawn_eventBrakeLights_Parms
{
	bool bBraking;
};
static const FName NAME_ASomeRandomCarProjectPawn_BrakeLights = FName(TEXT("BrakeLights"));
void ASomeRandomCarProjectPawn::BrakeLights(bool bBraking)
{
	SomeRandomCarProjectPawn_eventBrakeLights_Parms Parms;
	Parms.bBraking=bBraking ? true : false;
	UFunction* Func = FindFunctionChecked(NAME_ASomeRandomCarProjectPawn_BrakeLights);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_ASomeRandomCarProjectPawn_BrakeLights_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Vehicle" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Called when the brake lights are turned on or off */" },
#endif
		{ "ModuleRelativePath", "SomeRandomCarProjectPawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called when the brake lights are turned on or off" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_bBraking_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bBraking;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ASomeRandomCarProjectPawn_BrakeLights_Statics::NewProp_bBraking_SetBit(void* Obj)
{
	((SomeRandomCarProjectPawn_eventBrakeLights_Parms*)Obj)->bBraking = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASomeRandomCarProjectPawn_BrakeLights_Statics::NewProp_bBraking = { "bBraking", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SomeRandomCarProjectPawn_eventBrakeLights_Parms), &Z_Construct_UFunction_ASomeRandomCarProjectPawn_BrakeLights_Statics::NewProp_bBraking_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASomeRandomCarProjectPawn_BrakeLights_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASomeRandomCarProjectPawn_BrakeLights_Statics::NewProp_bBraking,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASomeRandomCarProjectPawn_BrakeLights_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASomeRandomCarProjectPawn_BrakeLights_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASomeRandomCarProjectPawn, nullptr, "BrakeLights", nullptr, nullptr, Z_Construct_UFunction_ASomeRandomCarProjectPawn_BrakeLights_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASomeRandomCarProjectPawn_BrakeLights_Statics::PropPointers), sizeof(SomeRandomCarProjectPawn_eventBrakeLights_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASomeRandomCarProjectPawn_BrakeLights_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASomeRandomCarProjectPawn_BrakeLights_Statics::Function_MetaDataParams) };
static_assert(sizeof(SomeRandomCarProjectPawn_eventBrakeLights_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASomeRandomCarProjectPawn_BrakeLights()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASomeRandomCarProjectPawn_BrakeLights_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class ASomeRandomCarProjectPawn Function BrakeLights

// Begin Class ASomeRandomCarProjectPawn
void ASomeRandomCarProjectPawn::StaticRegisterNativesASomeRandomCarProjectPawn()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASomeRandomCarProjectPawn);
UClass* Z_Construct_UClass_ASomeRandomCarProjectPawn_NoRegister()
{
	return ASomeRandomCarProjectPawn::StaticClass();
}
struct Z_Construct_UClass_ASomeRandomCarProjectPawn_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Vehicle Pawn class\n *  Handles common functionality for all vehicle types,\n *  including input handling and camera management.\n *  \n *  Specific vehicle configurations are handled in subclasses.\n */" },
#endif
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "SomeRandomCarProjectPawn.h" },
		{ "ModuleRelativePath", "SomeRandomCarProjectPawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Vehicle Pawn class\nHandles common functionality for all vehicle types,\nincluding input handling and camera management.\n\nSpecific vehicle configurations are handled in subclasses." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FrontSpringArm_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Spring Arm for the front camera */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SomeRandomCarProjectPawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Spring Arm for the front camera" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FrontCamera_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Front Camera component */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SomeRandomCarProjectPawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Front Camera component" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BackSpringArm_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Spring Arm for the back camera */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SomeRandomCarProjectPawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Spring Arm for the back camera" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BackCamera_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Back Camera component */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SomeRandomCarProjectPawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Back Camera component" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SteeringAction_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Steering Action */" },
#endif
		{ "ModuleRelativePath", "SomeRandomCarProjectPawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Steering Action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ThrottleAction_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Throttle Action */" },
#endif
		{ "ModuleRelativePath", "SomeRandomCarProjectPawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Throttle Action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BrakeAction_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Brake Action */" },
#endif
		{ "ModuleRelativePath", "SomeRandomCarProjectPawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Brake Action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HandbrakeAction_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Handbrake Action */" },
#endif
		{ "ModuleRelativePath", "SomeRandomCarProjectPawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Handbrake Action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LookAroundAction_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Look Around Action */" },
#endif
		{ "ModuleRelativePath", "SomeRandomCarProjectPawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Look Around Action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ToggleCameraAction_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Toggle Camera Action */" },
#endif
		{ "ModuleRelativePath", "SomeRandomCarProjectPawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Toggle Camera Action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ResetVehicleAction_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Reset Vehicle Action */" },
#endif
		{ "ModuleRelativePath", "SomeRandomCarProjectPawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Reset Vehicle Action" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FrontSpringArm;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FrontCamera;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BackSpringArm;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BackCamera;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SteeringAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ThrottleAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BrakeAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HandbrakeAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LookAroundAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ToggleCameraAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ResetVehicleAction;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ASomeRandomCarProjectPawn_BrakeLights, "BrakeLights" }, // 3408522764
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASomeRandomCarProjectPawn>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASomeRandomCarProjectPawn_Statics::NewProp_FrontSpringArm = { "FrontSpringArm", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASomeRandomCarProjectPawn, FrontSpringArm), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FrontSpringArm_MetaData), NewProp_FrontSpringArm_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASomeRandomCarProjectPawn_Statics::NewProp_FrontCamera = { "FrontCamera", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASomeRandomCarProjectPawn, FrontCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FrontCamera_MetaData), NewProp_FrontCamera_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASomeRandomCarProjectPawn_Statics::NewProp_BackSpringArm = { "BackSpringArm", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASomeRandomCarProjectPawn, BackSpringArm), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BackSpringArm_MetaData), NewProp_BackSpringArm_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASomeRandomCarProjectPawn_Statics::NewProp_BackCamera = { "BackCamera", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASomeRandomCarProjectPawn, BackCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BackCamera_MetaData), NewProp_BackCamera_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASomeRandomCarProjectPawn_Statics::NewProp_SteeringAction = { "SteeringAction", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASomeRandomCarProjectPawn, SteeringAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SteeringAction_MetaData), NewProp_SteeringAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASomeRandomCarProjectPawn_Statics::NewProp_ThrottleAction = { "ThrottleAction", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASomeRandomCarProjectPawn, ThrottleAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ThrottleAction_MetaData), NewProp_ThrottleAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASomeRandomCarProjectPawn_Statics::NewProp_BrakeAction = { "BrakeAction", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASomeRandomCarProjectPawn, BrakeAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BrakeAction_MetaData), NewProp_BrakeAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASomeRandomCarProjectPawn_Statics::NewProp_HandbrakeAction = { "HandbrakeAction", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASomeRandomCarProjectPawn, HandbrakeAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HandbrakeAction_MetaData), NewProp_HandbrakeAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASomeRandomCarProjectPawn_Statics::NewProp_LookAroundAction = { "LookAroundAction", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASomeRandomCarProjectPawn, LookAroundAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LookAroundAction_MetaData), NewProp_LookAroundAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASomeRandomCarProjectPawn_Statics::NewProp_ToggleCameraAction = { "ToggleCameraAction", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASomeRandomCarProjectPawn, ToggleCameraAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ToggleCameraAction_MetaData), NewProp_ToggleCameraAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASomeRandomCarProjectPawn_Statics::NewProp_ResetVehicleAction = { "ResetVehicleAction", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASomeRandomCarProjectPawn, ResetVehicleAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ResetVehicleAction_MetaData), NewProp_ResetVehicleAction_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASomeRandomCarProjectPawn_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASomeRandomCarProjectPawn_Statics::NewProp_FrontSpringArm,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASomeRandomCarProjectPawn_Statics::NewProp_FrontCamera,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASomeRandomCarProjectPawn_Statics::NewProp_BackSpringArm,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASomeRandomCarProjectPawn_Statics::NewProp_BackCamera,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASomeRandomCarProjectPawn_Statics::NewProp_SteeringAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASomeRandomCarProjectPawn_Statics::NewProp_ThrottleAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASomeRandomCarProjectPawn_Statics::NewProp_BrakeAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASomeRandomCarProjectPawn_Statics::NewProp_HandbrakeAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASomeRandomCarProjectPawn_Statics::NewProp_LookAroundAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASomeRandomCarProjectPawn_Statics::NewProp_ToggleCameraAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASomeRandomCarProjectPawn_Statics::NewProp_ResetVehicleAction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASomeRandomCarProjectPawn_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ASomeRandomCarProjectPawn_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AWheeledVehiclePawn,
	(UObject* (*)())Z_Construct_UPackage__Script_SomeRandomCarProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASomeRandomCarProjectPawn_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASomeRandomCarProjectPawn_Statics::ClassParams = {
	&ASomeRandomCarProjectPawn::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ASomeRandomCarProjectPawn_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ASomeRandomCarProjectPawn_Statics::PropPointers),
	0,
	0x008000A5u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASomeRandomCarProjectPawn_Statics::Class_MetaDataParams), Z_Construct_UClass_ASomeRandomCarProjectPawn_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASomeRandomCarProjectPawn()
{
	if (!Z_Registration_Info_UClass_ASomeRandomCarProjectPawn.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASomeRandomCarProjectPawn.OuterSingleton, Z_Construct_UClass_ASomeRandomCarProjectPawn_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASomeRandomCarProjectPawn.OuterSingleton;
}
template<> SOMERANDOMCARPROJECT_API UClass* StaticClass<ASomeRandomCarProjectPawn>()
{
	return ASomeRandomCarProjectPawn::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASomeRandomCarProjectPawn);
ASomeRandomCarProjectPawn::~ASomeRandomCarProjectPawn() {}
// End Class ASomeRandomCarProjectPawn

// Begin Registration
struct Z_CompiledInDeferFile_FID_anthony_Documents_Unreal_Projects_SomeRandomCarProject_Source_SomeRandomCarProject_SomeRandomCarProjectPawn_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASomeRandomCarProjectPawn, ASomeRandomCarProjectPawn::StaticClass, TEXT("ASomeRandomCarProjectPawn"), &Z_Registration_Info_UClass_ASomeRandomCarProjectPawn, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASomeRandomCarProjectPawn), 1084736671U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_anthony_Documents_Unreal_Projects_SomeRandomCarProject_Source_SomeRandomCarProject_SomeRandomCarProjectPawn_h_4048760054(TEXT("/Script/SomeRandomCarProject"),
	Z_CompiledInDeferFile_FID_anthony_Documents_Unreal_Projects_SomeRandomCarProject_Source_SomeRandomCarProject_SomeRandomCarProjectPawn_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_anthony_Documents_Unreal_Projects_SomeRandomCarProject_Source_SomeRandomCarProject_SomeRandomCarProjectPawn_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
