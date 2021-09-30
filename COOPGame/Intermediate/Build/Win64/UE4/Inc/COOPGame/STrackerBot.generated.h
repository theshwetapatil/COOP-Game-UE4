// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USHealthComponent;
class UDamageType;
class AController;
class AActor;
#ifdef COOPGAME_STrackerBot_generated_h
#error "STrackerBot.generated.h already included, missing '#pragma once' in STrackerBot.h"
#endif
#define COOPGAME_STrackerBot_generated_h

#define COOPGame_Source_COOPGame_Public_AI_STrackerBot_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execHandleTakeDamage) \
	{ \
		P_GET_OBJECT(USHealthComponent,Z_Param_OwningHealthComp); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Health); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_HealthDelta); \
		P_GET_OBJECT(UDamageType,Z_Param_DamageType); \
		P_GET_OBJECT(AController,Z_Param_InstigatedBy); \
		P_GET_OBJECT(AActor,Z_Param_DamageCauser); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->HandleTakeDamage(Z_Param_OwningHealthComp,Z_Param_Health,Z_Param_HealthDelta,Z_Param_DamageType,Z_Param_InstigatedBy,Z_Param_DamageCauser); \
		P_NATIVE_END; \
	}


#define COOPGame_Source_COOPGame_Public_AI_STrackerBot_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHandleTakeDamage) \
	{ \
		P_GET_OBJECT(USHealthComponent,Z_Param_OwningHealthComp); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Health); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_HealthDelta); \
		P_GET_OBJECT(UDamageType,Z_Param_DamageType); \
		P_GET_OBJECT(AController,Z_Param_InstigatedBy); \
		P_GET_OBJECT(AActor,Z_Param_DamageCauser); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->HandleTakeDamage(Z_Param_OwningHealthComp,Z_Param_Health,Z_Param_HealthDelta,Z_Param_DamageType,Z_Param_InstigatedBy,Z_Param_DamageCauser); \
		P_NATIVE_END; \
	}


#define COOPGame_Source_COOPGame_Public_AI_STrackerBot_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASTrackerBot(); \
	friend struct Z_Construct_UClass_ASTrackerBot_Statics; \
public: \
	DECLARE_CLASS(ASTrackerBot, APawn, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/COOPGame"), NO_API) \
	DECLARE_SERIALIZER(ASTrackerBot)


#define COOPGame_Source_COOPGame_Public_AI_STrackerBot_h_16_INCLASS \
private: \
	static void StaticRegisterNativesASTrackerBot(); \
	friend struct Z_Construct_UClass_ASTrackerBot_Statics; \
public: \
	DECLARE_CLASS(ASTrackerBot, APawn, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/COOPGame"), NO_API) \
	DECLARE_SERIALIZER(ASTrackerBot)


#define COOPGame_Source_COOPGame_Public_AI_STrackerBot_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASTrackerBot(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASTrackerBot) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASTrackerBot); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASTrackerBot); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASTrackerBot(ASTrackerBot&&); \
	NO_API ASTrackerBot(const ASTrackerBot&); \
public:


#define COOPGame_Source_COOPGame_Public_AI_STrackerBot_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASTrackerBot(ASTrackerBot&&); \
	NO_API ASTrackerBot(const ASTrackerBot&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASTrackerBot); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASTrackerBot); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASTrackerBot)


#define COOPGame_Source_COOPGame_Public_AI_STrackerBot_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__MeshComp() { return STRUCT_OFFSET(ASTrackerBot, MeshComp); } \
	FORCEINLINE static uint32 __PPO__HealthComp() { return STRUCT_OFFSET(ASTrackerBot, HealthComp); } \
	FORCEINLINE static uint32 __PPO__SphereComp() { return STRUCT_OFFSET(ASTrackerBot, SphereComp); } \
	FORCEINLINE static uint32 __PPO__MovementForce() { return STRUCT_OFFSET(ASTrackerBot, MovementForce); } \
	FORCEINLINE static uint32 __PPO__bUseVelocityChange() { return STRUCT_OFFSET(ASTrackerBot, bUseVelocityChange); } \
	FORCEINLINE static uint32 __PPO__RequiredDistanceToTarget() { return STRUCT_OFFSET(ASTrackerBot, RequiredDistanceToTarget); } \
	FORCEINLINE static uint32 __PPO__ExplosionEffect() { return STRUCT_OFFSET(ASTrackerBot, ExplosionEffect); } \
	FORCEINLINE static uint32 __PPO__ExplosionRadius() { return STRUCT_OFFSET(ASTrackerBot, ExplosionRadius); } \
	FORCEINLINE static uint32 __PPO__ExplosionDamage() { return STRUCT_OFFSET(ASTrackerBot, ExplosionDamage); } \
	FORCEINLINE static uint32 __PPO__SelfDamageInterval() { return STRUCT_OFFSET(ASTrackerBot, SelfDamageInterval); } \
	FORCEINLINE static uint32 __PPO__SelfDestructSound() { return STRUCT_OFFSET(ASTrackerBot, SelfDestructSound); } \
	FORCEINLINE static uint32 __PPO__ExplodeSound() { return STRUCT_OFFSET(ASTrackerBot, ExplodeSound); }


#define COOPGame_Source_COOPGame_Public_AI_STrackerBot_h_13_PROLOG
#define COOPGame_Source_COOPGame_Public_AI_STrackerBot_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	COOPGame_Source_COOPGame_Public_AI_STrackerBot_h_16_PRIVATE_PROPERTY_OFFSET \
	COOPGame_Source_COOPGame_Public_AI_STrackerBot_h_16_RPC_WRAPPERS \
	COOPGame_Source_COOPGame_Public_AI_STrackerBot_h_16_INCLASS \
	COOPGame_Source_COOPGame_Public_AI_STrackerBot_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define COOPGame_Source_COOPGame_Public_AI_STrackerBot_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	COOPGame_Source_COOPGame_Public_AI_STrackerBot_h_16_PRIVATE_PROPERTY_OFFSET \
	COOPGame_Source_COOPGame_Public_AI_STrackerBot_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	COOPGame_Source_COOPGame_Public_AI_STrackerBot_h_16_INCLASS_NO_PURE_DECLS \
	COOPGame_Source_COOPGame_Public_AI_STrackerBot_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COOPGAME_API UClass* StaticClass<class ASTrackerBot>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID COOPGame_Source_COOPGame_Public_AI_STrackerBot_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
