// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef COOPGAME_SGameMode_generated_h
#error "SGameMode.generated.h already included, missing '#pragma once' in SGameMode.h"
#endif
#define COOPGAME_SGameMode_generated_h

#define COOPGame_Source_COOPGame_Public_SGameMode_h_15_RPC_WRAPPERS
#define COOPGame_Source_COOPGame_Public_SGameMode_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define COOPGame_Source_COOPGame_Public_SGameMode_h_15_EVENT_PARMS
#define COOPGame_Source_COOPGame_Public_SGameMode_h_15_CALLBACK_WRAPPERS
#define COOPGame_Source_COOPGame_Public_SGameMode_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASGameMode(); \
	friend struct Z_Construct_UClass_ASGameMode_Statics; \
public: \
	DECLARE_CLASS(ASGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/COOPGame"), NO_API) \
	DECLARE_SERIALIZER(ASGameMode)


#define COOPGame_Source_COOPGame_Public_SGameMode_h_15_INCLASS \
private: \
	static void StaticRegisterNativesASGameMode(); \
	friend struct Z_Construct_UClass_ASGameMode_Statics; \
public: \
	DECLARE_CLASS(ASGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/COOPGame"), NO_API) \
	DECLARE_SERIALIZER(ASGameMode)


#define COOPGame_Source_COOPGame_Public_SGameMode_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASGameMode(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASGameMode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASGameMode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASGameMode(ASGameMode&&); \
	NO_API ASGameMode(const ASGameMode&); \
public:


#define COOPGame_Source_COOPGame_Public_SGameMode_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASGameMode(ASGameMode&&); \
	NO_API ASGameMode(const ASGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASGameMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASGameMode)


#define COOPGame_Source_COOPGame_Public_SGameMode_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__TimeBetweenWaves() { return STRUCT_OFFSET(ASGameMode, TimeBetweenWaves); }


#define COOPGame_Source_COOPGame_Public_SGameMode_h_12_PROLOG \
	COOPGame_Source_COOPGame_Public_SGameMode_h_15_EVENT_PARMS


#define COOPGame_Source_COOPGame_Public_SGameMode_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	COOPGame_Source_COOPGame_Public_SGameMode_h_15_PRIVATE_PROPERTY_OFFSET \
	COOPGame_Source_COOPGame_Public_SGameMode_h_15_RPC_WRAPPERS \
	COOPGame_Source_COOPGame_Public_SGameMode_h_15_CALLBACK_WRAPPERS \
	COOPGame_Source_COOPGame_Public_SGameMode_h_15_INCLASS \
	COOPGame_Source_COOPGame_Public_SGameMode_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define COOPGame_Source_COOPGame_Public_SGameMode_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	COOPGame_Source_COOPGame_Public_SGameMode_h_15_PRIVATE_PROPERTY_OFFSET \
	COOPGame_Source_COOPGame_Public_SGameMode_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	COOPGame_Source_COOPGame_Public_SGameMode_h_15_CALLBACK_WRAPPERS \
	COOPGame_Source_COOPGame_Public_SGameMode_h_15_INCLASS_NO_PURE_DECLS \
	COOPGame_Source_COOPGame_Public_SGameMode_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COOPGAME_API UClass* StaticClass<class ASGameMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID COOPGame_Source_COOPGame_Public_SGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
