// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FULLTEST_FullTestCharacter_generated_h
#error "FullTestCharacter.generated.h already included, missing '#pragma once' in FullTestCharacter.h"
#endif
#define FULLTEST_FullTestCharacter_generated_h

#define FullTest_Source_FullTest_FullTestCharacter_h_12_SPARSE_DATA
#define FullTest_Source_FullTest_FullTestCharacter_h_12_RPC_WRAPPERS
#define FullTest_Source_FullTest_FullTestCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define FullTest_Source_FullTest_FullTestCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFullTestCharacter(); \
	friend struct Z_Construct_UClass_AFullTestCharacter_Statics; \
public: \
	DECLARE_CLASS(AFullTestCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FullTest"), NO_API) \
	DECLARE_SERIALIZER(AFullTestCharacter)


#define FullTest_Source_FullTest_FullTestCharacter_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAFullTestCharacter(); \
	friend struct Z_Construct_UClass_AFullTestCharacter_Statics; \
public: \
	DECLARE_CLASS(AFullTestCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FullTest"), NO_API) \
	DECLARE_SERIALIZER(AFullTestCharacter)


#define FullTest_Source_FullTest_FullTestCharacter_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFullTestCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFullTestCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFullTestCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFullTestCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFullTestCharacter(AFullTestCharacter&&); \
	NO_API AFullTestCharacter(const AFullTestCharacter&); \
public:


#define FullTest_Source_FullTest_FullTestCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFullTestCharacter(AFullTestCharacter&&); \
	NO_API AFullTestCharacter(const AFullTestCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFullTestCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFullTestCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFullTestCharacter)


#define FullTest_Source_FullTest_FullTestCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(AFullTestCharacter, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__FollowCamera() { return STRUCT_OFFSET(AFullTestCharacter, FollowCamera); }


#define FullTest_Source_FullTest_FullTestCharacter_h_9_PROLOG
#define FullTest_Source_FullTest_FullTestCharacter_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FullTest_Source_FullTest_FullTestCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	FullTest_Source_FullTest_FullTestCharacter_h_12_SPARSE_DATA \
	FullTest_Source_FullTest_FullTestCharacter_h_12_RPC_WRAPPERS \
	FullTest_Source_FullTest_FullTestCharacter_h_12_INCLASS \
	FullTest_Source_FullTest_FullTestCharacter_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FullTest_Source_FullTest_FullTestCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FullTest_Source_FullTest_FullTestCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	FullTest_Source_FullTest_FullTestCharacter_h_12_SPARSE_DATA \
	FullTest_Source_FullTest_FullTestCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FullTest_Source_FullTest_FullTestCharacter_h_12_INCLASS_NO_PURE_DECLS \
	FullTest_Source_FullTest_FullTestCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FULLTEST_API UClass* StaticClass<class AFullTestCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FullTest_Source_FullTest_FullTestCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
