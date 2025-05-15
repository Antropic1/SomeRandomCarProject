// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SomeRandomCarProjectPawn.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SOMERANDOMCARPROJECT_SomeRandomCarProjectPawn_generated_h
#error "SomeRandomCarProjectPawn.generated.h already included, missing '#pragma once' in SomeRandomCarProjectPawn.h"
#endif
#define SOMERANDOMCARPROJECT_SomeRandomCarProjectPawn_generated_h

#define FID_SomeRandomCarProject_Source_SomeRandomCarProject_SomeRandomCarProjectPawn_h_27_CALLBACK_WRAPPERS
#define FID_SomeRandomCarProject_Source_SomeRandomCarProject_SomeRandomCarProjectPawn_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASomeRandomCarProjectPawn(); \
	friend struct Z_Construct_UClass_ASomeRandomCarProjectPawn_Statics; \
public: \
	DECLARE_CLASS(ASomeRandomCarProjectPawn, AWheeledVehiclePawn, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/SomeRandomCarProject"), NO_API) \
	DECLARE_SERIALIZER(ASomeRandomCarProjectPawn)


#define FID_SomeRandomCarProject_Source_SomeRandomCarProject_SomeRandomCarProjectPawn_h_27_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ASomeRandomCarProjectPawn(ASomeRandomCarProjectPawn&&); \
	ASomeRandomCarProjectPawn(const ASomeRandomCarProjectPawn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASomeRandomCarProjectPawn); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASomeRandomCarProjectPawn); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(ASomeRandomCarProjectPawn) \
	NO_API virtual ~ASomeRandomCarProjectPawn();


#define FID_SomeRandomCarProject_Source_SomeRandomCarProject_SomeRandomCarProjectPawn_h_24_PROLOG
#define FID_SomeRandomCarProject_Source_SomeRandomCarProject_SomeRandomCarProjectPawn_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SomeRandomCarProject_Source_SomeRandomCarProject_SomeRandomCarProjectPawn_h_27_CALLBACK_WRAPPERS \
	FID_SomeRandomCarProject_Source_SomeRandomCarProject_SomeRandomCarProjectPawn_h_27_INCLASS_NO_PURE_DECLS \
	FID_SomeRandomCarProject_Source_SomeRandomCarProject_SomeRandomCarProjectPawn_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SOMERANDOMCARPROJECT_API UClass* StaticClass<class ASomeRandomCarProjectPawn>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_SomeRandomCarProject_Source_SomeRandomCarProject_SomeRandomCarProjectPawn_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
