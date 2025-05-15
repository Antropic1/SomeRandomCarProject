// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SomeRandomCarProject/SomeRandomCarProjectUI.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSomeRandomCarProjectUI() {}

// Begin Cross Module References
SOMERANDOMCARPROJECT_API UClass* Z_Construct_UClass_USomeRandomCarProjectUI();
SOMERANDOMCARPROJECT_API UClass* Z_Construct_UClass_USomeRandomCarProjectUI_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_SomeRandomCarProject();
// End Cross Module References

// Begin Class USomeRandomCarProjectUI Function OnGearUpdate
struct SomeRandomCarProjectUI_eventOnGearUpdate_Parms
{
	int32 NewGear;
};
static const FName NAME_USomeRandomCarProjectUI_OnGearUpdate = FName(TEXT("OnGearUpdate"));
void USomeRandomCarProjectUI::OnGearUpdate(int32 NewGear)
{
	SomeRandomCarProjectUI_eventOnGearUpdate_Parms Parms;
	Parms.NewGear=NewGear;
	UFunction* Func = FindFunctionChecked(NAME_USomeRandomCarProjectUI_OnGearUpdate);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_USomeRandomCarProjectUI_OnGearUpdate_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Vehicle" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Implemented in Blueprint to display the new gear */" },
#endif
		{ "ModuleRelativePath", "SomeRandomCarProjectUI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Implemented in Blueprint to display the new gear" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_NewGear;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USomeRandomCarProjectUI_OnGearUpdate_Statics::NewProp_NewGear = { "NewGear", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SomeRandomCarProjectUI_eventOnGearUpdate_Parms, NewGear), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USomeRandomCarProjectUI_OnGearUpdate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USomeRandomCarProjectUI_OnGearUpdate_Statics::NewProp_NewGear,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USomeRandomCarProjectUI_OnGearUpdate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USomeRandomCarProjectUI_OnGearUpdate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USomeRandomCarProjectUI, nullptr, "OnGearUpdate", nullptr, nullptr, Z_Construct_UFunction_USomeRandomCarProjectUI_OnGearUpdate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USomeRandomCarProjectUI_OnGearUpdate_Statics::PropPointers), sizeof(SomeRandomCarProjectUI_eventOnGearUpdate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USomeRandomCarProjectUI_OnGearUpdate_Statics::Function_MetaDataParams), Z_Construct_UFunction_USomeRandomCarProjectUI_OnGearUpdate_Statics::Function_MetaDataParams) };
static_assert(sizeof(SomeRandomCarProjectUI_eventOnGearUpdate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USomeRandomCarProjectUI_OnGearUpdate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USomeRandomCarProjectUI_OnGearUpdate_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class USomeRandomCarProjectUI Function OnGearUpdate

// Begin Class USomeRandomCarProjectUI Function OnSpeedUpdate
struct SomeRandomCarProjectUI_eventOnSpeedUpdate_Parms
{
	float NewSpeed;
};
static const FName NAME_USomeRandomCarProjectUI_OnSpeedUpdate = FName(TEXT("OnSpeedUpdate"));
void USomeRandomCarProjectUI::OnSpeedUpdate(float NewSpeed)
{
	SomeRandomCarProjectUI_eventOnSpeedUpdate_Parms Parms;
	Parms.NewSpeed=NewSpeed;
	UFunction* Func = FindFunctionChecked(NAME_USomeRandomCarProjectUI_OnSpeedUpdate);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_USomeRandomCarProjectUI_OnSpeedUpdate_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Vehicle" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Implemented in Blueprint to display the new speed */" },
#endif
		{ "ModuleRelativePath", "SomeRandomCarProjectUI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Implemented in Blueprint to display the new speed" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewSpeed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USomeRandomCarProjectUI_OnSpeedUpdate_Statics::NewProp_NewSpeed = { "NewSpeed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SomeRandomCarProjectUI_eventOnSpeedUpdate_Parms, NewSpeed), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USomeRandomCarProjectUI_OnSpeedUpdate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USomeRandomCarProjectUI_OnSpeedUpdate_Statics::NewProp_NewSpeed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USomeRandomCarProjectUI_OnSpeedUpdate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USomeRandomCarProjectUI_OnSpeedUpdate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USomeRandomCarProjectUI, nullptr, "OnSpeedUpdate", nullptr, nullptr, Z_Construct_UFunction_USomeRandomCarProjectUI_OnSpeedUpdate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USomeRandomCarProjectUI_OnSpeedUpdate_Statics::PropPointers), sizeof(SomeRandomCarProjectUI_eventOnSpeedUpdate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USomeRandomCarProjectUI_OnSpeedUpdate_Statics::Function_MetaDataParams), Z_Construct_UFunction_USomeRandomCarProjectUI_OnSpeedUpdate_Statics::Function_MetaDataParams) };
static_assert(sizeof(SomeRandomCarProjectUI_eventOnSpeedUpdate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USomeRandomCarProjectUI_OnSpeedUpdate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USomeRandomCarProjectUI_OnSpeedUpdate_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class USomeRandomCarProjectUI Function OnSpeedUpdate

// Begin Class USomeRandomCarProjectUI
void USomeRandomCarProjectUI::StaticRegisterNativesUSomeRandomCarProjectUI()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USomeRandomCarProjectUI);
UClass* Z_Construct_UClass_USomeRandomCarProjectUI_NoRegister()
{
	return USomeRandomCarProjectUI::StaticClass();
}
struct Z_Construct_UClass_USomeRandomCarProjectUI_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Simple Vehicle HUD class\n *  Displays the current speed and gear.\n *  Widget setup is handled in a Blueprint subclass.\n */" },
#endif
		{ "IncludePath", "SomeRandomCarProjectUI.h" },
		{ "ModuleRelativePath", "SomeRandomCarProjectUI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Simple Vehicle HUD class\nDisplays the current speed and gear.\nWidget setup is handled in a Blueprint subclass." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsMPH_MetaData[] = {
		{ "Category", "Vehicle" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Controls the display of speed in Km/h or MPH */" },
#endif
		{ "ModuleRelativePath", "SomeRandomCarProjectUI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Controls the display of speed in Km/h or MPH" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_bIsMPH_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsMPH;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USomeRandomCarProjectUI_OnGearUpdate, "OnGearUpdate" }, // 658737266
		{ &Z_Construct_UFunction_USomeRandomCarProjectUI_OnSpeedUpdate, "OnSpeedUpdate" }, // 3416772959
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USomeRandomCarProjectUI>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_USomeRandomCarProjectUI_Statics::NewProp_bIsMPH_SetBit(void* Obj)
{
	((USomeRandomCarProjectUI*)Obj)->bIsMPH = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USomeRandomCarProjectUI_Statics::NewProp_bIsMPH = { "bIsMPH", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USomeRandomCarProjectUI), &Z_Construct_UClass_USomeRandomCarProjectUI_Statics::NewProp_bIsMPH_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsMPH_MetaData), NewProp_bIsMPH_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USomeRandomCarProjectUI_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USomeRandomCarProjectUI_Statics::NewProp_bIsMPH,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USomeRandomCarProjectUI_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USomeRandomCarProjectUI_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_SomeRandomCarProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USomeRandomCarProjectUI_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USomeRandomCarProjectUI_Statics::ClassParams = {
	&USomeRandomCarProjectUI::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USomeRandomCarProjectUI_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USomeRandomCarProjectUI_Statics::PropPointers),
	0,
	0x00B010A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USomeRandomCarProjectUI_Statics::Class_MetaDataParams), Z_Construct_UClass_USomeRandomCarProjectUI_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USomeRandomCarProjectUI()
{
	if (!Z_Registration_Info_UClass_USomeRandomCarProjectUI.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USomeRandomCarProjectUI.OuterSingleton, Z_Construct_UClass_USomeRandomCarProjectUI_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USomeRandomCarProjectUI.OuterSingleton;
}
template<> SOMERANDOMCARPROJECT_API UClass* StaticClass<USomeRandomCarProjectUI>()
{
	return USomeRandomCarProjectUI::StaticClass();
}
USomeRandomCarProjectUI::USomeRandomCarProjectUI(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USomeRandomCarProjectUI);
USomeRandomCarProjectUI::~USomeRandomCarProjectUI() {}
// End Class USomeRandomCarProjectUI

// Begin Registration
struct Z_CompiledInDeferFile_FID_SomeRandomCarProject_Source_SomeRandomCarProject_SomeRandomCarProjectUI_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USomeRandomCarProjectUI, USomeRandomCarProjectUI::StaticClass, TEXT("USomeRandomCarProjectUI"), &Z_Registration_Info_UClass_USomeRandomCarProjectUI, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USomeRandomCarProjectUI), 3547479398U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SomeRandomCarProject_Source_SomeRandomCarProject_SomeRandomCarProjectUI_h_1433913579(TEXT("/Script/SomeRandomCarProject"),
	Z_CompiledInDeferFile_FID_SomeRandomCarProject_Source_SomeRandomCarProject_SomeRandomCarProjectUI_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SomeRandomCarProject_Source_SomeRandomCarProject_SomeRandomCarProjectUI_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
