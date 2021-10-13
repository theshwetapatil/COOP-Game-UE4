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
#ifdef COOPGAME_SExplosiveBarrel_generated_h
#error "SExplosiveBarrel.generated.h already included, missing '#pragma once' in SExplosiveBarrel.h"
#endif
#define COOPGAME_SExplosiveBarrel_generated_h

#define COOPGame_Source_COOPGame_Public_Challenges_SExplosiveBarrel_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnRep_Exploded) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_Exploded(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnHealthChanged) \
	{ \
		P_GET_OBJECT(USHealthComponent,Z_Param_OwningHealthComp); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Health); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_HealthDelta); \
		P_GET_OBJECT(UDamageType,Z_Param_DamageType); \
		P_GET_OBJECT(AController,Z_Param_InstigatedBy); \
		P_GET_OBJECT(AActor,Z_Param_DamageCauser); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnHealthChanged(Z_Param_OwningHealthComp,Z_Param_Health,Z_Param_HealthDelta,Z_Param_DamageType,Z_Param_InstigatedBy,Z_Param_DamageCauser); \
		P_NATIVE_END; \
	}


#define COOPGame_Source_COOPGame_Public_Challenges_SExplosiveBarrel_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnRep_Exploded) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_Exploded(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnHealthChanged) \
	{ \
		P_GET_OBJECT(USHealthComponent,Z_Param_OwningHealthComp); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Health); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_HealthDelta); \
		P_GET_OBJECT(UDamageType,Z_Param_DamageType); \
		P_GET_OBJECT(AController,Z_Param_InstigatedBy); \
		P_GET_OBJECT(AActor,Z_Param_DamageCauser); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnHealthChanged(Z_Param_OwningHealthComp,Z_Param_Health,Z_Param_HealthDelta,Z_Param_DamageType,Z_Param_InstigatedBy,Z_Param_DamageCauser); \
		P_NATIVE_END; \
	}


#define COOPGame_Source_COOPGame_Public_Challenges_SExplosiveBarrel_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASExplosiveBarrel(); \
	friend struct Z_Construct_UClass_ASExplosiveBarrel_Statics; \
public: \
	DECLARE_CLASS(ASExplosiveBarrel, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/COOPGame"), NO_API) \
	DECLARE_SERIALIZER(ASExplosiveBarrel)


#define COOPGame_Source_COOPGame_Public_Challenges_SExplosiveBarrel_h_17_INCLASS \
private: \
	static void StaticRegisterNativesASExplosiveBarrel(); \
	friend struct Z_Construct_UClass_ASExplosiveBarrel_Statics; \
public: \
	DECLARE_CLASS(ASExplosiveBarrel, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/COOPGame"), NO_API) \
	DECLARE_SERIALIZER(ASExplosiveBarrel)


#define COOPGame_Source_COOPGame_Public_Challenges_SExplosiveBarrel_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASExplosiveBarrel(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASExplosiveBarrel) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASExplosiveBarrel); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASExplosiveBarrel); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASExplosiveBarrel(ASExplosiveBarrel&&); \
	NO_API ASExplosiveBarrel(const ASExplosiveBarrel&); \
public:


#define COOPGame_Source_COOPGame_Public_Challenges_SExplosiveBarrel_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASExplosiveBarrel(ASExplosiveBarrel&&); \
	NO_API ASExplosiveBarrel(const ASExplosiveBarrel&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASExplosiveBarrel); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASExplosiveBarrel); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASExplosiveBarrel)


#define COOPGame_Source_COOPGame_Public_Challenges_SExplosiveBarrel_h_17_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__HealthComp() { return STRUCT_OFFSET(ASExplosiveBarrel, HealthComp); } \
	FORCEINLINE static uint32 __PPO__MeshComp() { return STRUCT_OFFSET(ASExplosiveBarrel, MeshComp); } \
	FORCEINLINE static uint32 __PPO__RadialForceComp() { return STRUCT_OFFSET(ASExplosiveBarrel, RadialForceComp); } \
	FORCEINLINE static uint32 __PPO__bExploded() { return STRUCT_OFFSET(ASExplosiveBarrel, bExploded); } \
	FORCEINLINE static uint32 __PPO__ExplosionImpulse() { return STRUCT_OFFSET(ASExplosiveBarrel, ExplosionImpulse); } \
	FORCEINLINE static uint32 __PPO__ExplosionEffect() { return STRUCT_OFFSET(ASExplosiveBarrel, ExplosionEffect); } \
	FORCEINLINE static uint32 __PPO__ExplodedMaterial() { return STRUCT_OFFSET(ASExplosiveBarrel, ExplodedMaterial); }


#define COOPGame_Source_COOPGame_Public_Challenges_SExplosiveBarrel_h_14_PROLOG
#define COOPGame_Source_COOPGame_Public_Challenges_SExplosiveBarrel_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	COOPGame_Source_COOPGame_Public_Challenges_SExplosiveBarrel_h_17_PRIVATE_PROPERTY_OFFSET \
	COOPGame_Source_COOPGame_Public_Challenges_SExplosiveBarrel_h_17_RPC_WRAPPERS \
	COOPGame_Source_COOPGame_Public_Challenges_SExplosiveBarrel_h_17_INCLASS \
	COOPGame_Source_COOPGame_Public_Challenges_SExplosiveBarrel_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define COOPGame_Source_COOPGame_Public_Challenges_SExplosiveBarrel_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	COOPGame_Source_COOPGame_Public_Challenges_SExplosiveBarrel_h_17_PRIVATE_PROPERTY_OFFSET \
	COOPGame_Source_COOPGame_Public_Challenges_SExplosiveBarrel_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	COOPGame_Source_COOPGame_Public_Challenges_SExplosiveBarrel_h_17_INCLASS_NO_PURE_DECLS \
	COOPGame_Source_COOPGame_Public_Challenges_SExplosiveBarrel_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COOPGAME_API UClass* StaticClass<class ASExplosiveBarrel>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID COOPGame_Source_COOPGame_Public_Challenges_SExplosiveBarrel_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
