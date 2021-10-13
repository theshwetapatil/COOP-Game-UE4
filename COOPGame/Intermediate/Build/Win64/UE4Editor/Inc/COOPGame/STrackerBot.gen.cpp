// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "COOPGame/Public/AI/STrackerBot.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSTrackerBot() {}
// Cross Module References
	COOPGAME_API UClass* Z_Construct_UClass_ASTrackerBot_NoRegister();
	COOPGAME_API UClass* Z_Construct_UClass_ASTrackerBot();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_COOPGame();
	COOPGAME_API UFunction* Z_Construct_UFunction_ASTrackerBot_HandleTakeDamage();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AController_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDamageType_NoRegister();
	COOPGAME_API UClass* Z_Construct_UClass_USHealthComponent_NoRegister();
	COOPGAME_API UFunction* Z_Construct_UFunction_ASTrackerBot_OnRep_PowerLevel();
	ENGINE_API UClass* Z_Construct_UClass_USoundCue_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void ASTrackerBot::StaticRegisterNativesASTrackerBot()
	{
		UClass* Class = ASTrackerBot::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HandleTakeDamage", &ASTrackerBot::execHandleTakeDamage },
			{ "OnRep_PowerLevel", &ASTrackerBot::execOnRep_PowerLevel },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASTrackerBot_HandleTakeDamage_Statics
	{
		struct STrackerBot_eventHandleTakeDamage_Parms
		{
			USHealthComponent* OwningHealthComp;
			float Health;
			float HealthDelta;
			const UDamageType* DamageType;
			AController* InstigatedBy;
			AActor* DamageCauser;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DamageCauser;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InstigatedBy;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DamageType_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DamageType;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HealthDelta;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Health;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OwningHealthComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OwningHealthComp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASTrackerBot_HandleTakeDamage_Statics::NewProp_DamageCauser = { "DamageCauser", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(STrackerBot_eventHandleTakeDamage_Parms, DamageCauser), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASTrackerBot_HandleTakeDamage_Statics::NewProp_InstigatedBy = { "InstigatedBy", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(STrackerBot_eventHandleTakeDamage_Parms, InstigatedBy), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASTrackerBot_HandleTakeDamage_Statics::NewProp_DamageType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASTrackerBot_HandleTakeDamage_Statics::NewProp_DamageType = { "DamageType", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(STrackerBot_eventHandleTakeDamage_Parms, DamageType), Z_Construct_UClass_UDamageType_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASTrackerBot_HandleTakeDamage_Statics::NewProp_DamageType_MetaData, ARRAY_COUNT(Z_Construct_UFunction_ASTrackerBot_HandleTakeDamage_Statics::NewProp_DamageType_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASTrackerBot_HandleTakeDamage_Statics::NewProp_HealthDelta = { "HealthDelta", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(STrackerBot_eventHandleTakeDamage_Parms, HealthDelta), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASTrackerBot_HandleTakeDamage_Statics::NewProp_Health = { "Health", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(STrackerBot_eventHandleTakeDamage_Parms, Health), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASTrackerBot_HandleTakeDamage_Statics::NewProp_OwningHealthComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASTrackerBot_HandleTakeDamage_Statics::NewProp_OwningHealthComp = { "OwningHealthComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(STrackerBot_eventHandleTakeDamage_Parms, OwningHealthComp), Z_Construct_UClass_USHealthComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASTrackerBot_HandleTakeDamage_Statics::NewProp_OwningHealthComp_MetaData, ARRAY_COUNT(Z_Construct_UFunction_ASTrackerBot_HandleTakeDamage_Statics::NewProp_OwningHealthComp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASTrackerBot_HandleTakeDamage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASTrackerBot_HandleTakeDamage_Statics::NewProp_DamageCauser,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASTrackerBot_HandleTakeDamage_Statics::NewProp_InstigatedBy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASTrackerBot_HandleTakeDamage_Statics::NewProp_DamageType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASTrackerBot_HandleTakeDamage_Statics::NewProp_HealthDelta,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASTrackerBot_HandleTakeDamage_Statics::NewProp_Health,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASTrackerBot_HandleTakeDamage_Statics::NewProp_OwningHealthComp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASTrackerBot_HandleTakeDamage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AI/STrackerBot.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASTrackerBot_HandleTakeDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASTrackerBot, nullptr, "HandleTakeDamage", sizeof(STrackerBot_eventHandleTakeDamage_Parms), Z_Construct_UFunction_ASTrackerBot_HandleTakeDamage_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ASTrackerBot_HandleTakeDamage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASTrackerBot_HandleTakeDamage_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ASTrackerBot_HandleTakeDamage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASTrackerBot_HandleTakeDamage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASTrackerBot_HandleTakeDamage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASTrackerBot_OnRep_PowerLevel_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASTrackerBot_OnRep_PowerLevel_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AI/STrackerBot.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASTrackerBot_OnRep_PowerLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASTrackerBot, nullptr, "OnRep_PowerLevel", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASTrackerBot_OnRep_PowerLevel_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ASTrackerBot_OnRep_PowerLevel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASTrackerBot_OnRep_PowerLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASTrackerBot_OnRep_PowerLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASTrackerBot_NoRegister()
	{
		return ASTrackerBot::StaticClass();
	}
	struct Z_Construct_UClass_ASTrackerBot_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AlphaClients_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AlphaClients;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PowerLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PowerLevel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExplodeSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ExplodeSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SelfDestructSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SelfDestructSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SelfDamageInterval_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SelfDamageInterval;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExplosionDamage_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ExplosionDamage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExplosionRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ExplosionRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExplosionEffect_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ExplosionEffect;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RequiredDistanceToTarget_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RequiredDistanceToTarget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseVelocityChange_MetaData[];
#endif
		static void NewProp_bUseVelocityChange_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseVelocityChange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MovementForce_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MovementForce;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SphereComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SphereComp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HealthComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HealthComp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MeshComp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASTrackerBot_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_COOPGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASTrackerBot_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASTrackerBot_HandleTakeDamage, "HandleTakeDamage" }, // 646408480
		{ &Z_Construct_UFunction_ASTrackerBot_OnRep_PowerLevel, "OnRep_PowerLevel" }, // 1347628870
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASTrackerBot_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "AI/STrackerBot.h" },
		{ "ModuleRelativePath", "Public/AI/STrackerBot.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASTrackerBot_Statics::NewProp_AlphaClients_MetaData[] = {
		{ "ModuleRelativePath", "Public/AI/STrackerBot.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASTrackerBot_Statics::NewProp_AlphaClients = { "AlphaClients", nullptr, (EPropertyFlags)0x0020080000000020, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASTrackerBot, AlphaClients), METADATA_PARAMS(Z_Construct_UClass_ASTrackerBot_Statics::NewProp_AlphaClients_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASTrackerBot_Statics::NewProp_AlphaClients_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASTrackerBot_Statics::NewProp_PowerLevel_MetaData[] = {
		{ "Category", "TrackerBot" },
		{ "ModuleRelativePath", "Public/AI/STrackerBot.h" },
		{ "ToolTip", "The power boost of the bot, affects damage caused to enemies and color of the bot (range: 1 to 4)" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ASTrackerBot_Statics::NewProp_PowerLevel = { "PowerLevel", "OnRep_PowerLevel", (EPropertyFlags)0x0020080100010021, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASTrackerBot, PowerLevel), METADATA_PARAMS(Z_Construct_UClass_ASTrackerBot_Statics::NewProp_PowerLevel_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASTrackerBot_Statics::NewProp_PowerLevel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASTrackerBot_Statics::NewProp_ExplodeSound_MetaData[] = {
		{ "Category", "TrackerBot" },
		{ "ModuleRelativePath", "Public/AI/STrackerBot.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASTrackerBot_Statics::NewProp_ExplodeSound = { "ExplodeSound", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASTrackerBot, ExplodeSound), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASTrackerBot_Statics::NewProp_ExplodeSound_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASTrackerBot_Statics::NewProp_ExplodeSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASTrackerBot_Statics::NewProp_SelfDestructSound_MetaData[] = {
		{ "Category", "TrackerBot" },
		{ "ModuleRelativePath", "Public/AI/STrackerBot.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASTrackerBot_Statics::NewProp_SelfDestructSound = { "SelfDestructSound", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASTrackerBot, SelfDestructSound), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASTrackerBot_Statics::NewProp_SelfDestructSound_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASTrackerBot_Statics::NewProp_SelfDestructSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASTrackerBot_Statics::NewProp_SelfDamageInterval_MetaData[] = {
		{ "Category", "TrackerBot" },
		{ "ModuleRelativePath", "Public/AI/STrackerBot.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASTrackerBot_Statics::NewProp_SelfDamageInterval = { "SelfDamageInterval", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASTrackerBot, SelfDamageInterval), METADATA_PARAMS(Z_Construct_UClass_ASTrackerBot_Statics::NewProp_SelfDamageInterval_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASTrackerBot_Statics::NewProp_SelfDamageInterval_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASTrackerBot_Statics::NewProp_ExplosionDamage_MetaData[] = {
		{ "Category", "TrackerBot" },
		{ "ModuleRelativePath", "Public/AI/STrackerBot.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASTrackerBot_Statics::NewProp_ExplosionDamage = { "ExplosionDamage", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASTrackerBot, ExplosionDamage), METADATA_PARAMS(Z_Construct_UClass_ASTrackerBot_Statics::NewProp_ExplosionDamage_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASTrackerBot_Statics::NewProp_ExplosionDamage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASTrackerBot_Statics::NewProp_ExplosionRadius_MetaData[] = {
		{ "Category", "TrackerBot" },
		{ "ModuleRelativePath", "Public/AI/STrackerBot.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASTrackerBot_Statics::NewProp_ExplosionRadius = { "ExplosionRadius", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASTrackerBot, ExplosionRadius), METADATA_PARAMS(Z_Construct_UClass_ASTrackerBot_Statics::NewProp_ExplosionRadius_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASTrackerBot_Statics::NewProp_ExplosionRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASTrackerBot_Statics::NewProp_ExplosionEffect_MetaData[] = {
		{ "Category", "TrackerBot" },
		{ "ModuleRelativePath", "Public/AI/STrackerBot.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASTrackerBot_Statics::NewProp_ExplosionEffect = { "ExplosionEffect", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASTrackerBot, ExplosionEffect), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASTrackerBot_Statics::NewProp_ExplosionEffect_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASTrackerBot_Statics::NewProp_ExplosionEffect_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASTrackerBot_Statics::NewProp_RequiredDistanceToTarget_MetaData[] = {
		{ "Category", "TrackerBot" },
		{ "ModuleRelativePath", "Public/AI/STrackerBot.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASTrackerBot_Statics::NewProp_RequiredDistanceToTarget = { "RequiredDistanceToTarget", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASTrackerBot, RequiredDistanceToTarget), METADATA_PARAMS(Z_Construct_UClass_ASTrackerBot_Statics::NewProp_RequiredDistanceToTarget_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASTrackerBot_Statics::NewProp_RequiredDistanceToTarget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASTrackerBot_Statics::NewProp_bUseVelocityChange_MetaData[] = {
		{ "Category", "TrackerBot" },
		{ "ModuleRelativePath", "Public/AI/STrackerBot.h" },
	};
#endif
	void Z_Construct_UClass_ASTrackerBot_Statics::NewProp_bUseVelocityChange_SetBit(void* Obj)
	{
		((ASTrackerBot*)Obj)->bUseVelocityChange = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASTrackerBot_Statics::NewProp_bUseVelocityChange = { "bUseVelocityChange", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASTrackerBot), &Z_Construct_UClass_ASTrackerBot_Statics::NewProp_bUseVelocityChange_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASTrackerBot_Statics::NewProp_bUseVelocityChange_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASTrackerBot_Statics::NewProp_bUseVelocityChange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASTrackerBot_Statics::NewProp_MovementForce_MetaData[] = {
		{ "Category", "TrackerBot" },
		{ "ModuleRelativePath", "Public/AI/STrackerBot.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASTrackerBot_Statics::NewProp_MovementForce = { "MovementForce", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASTrackerBot, MovementForce), METADATA_PARAMS(Z_Construct_UClass_ASTrackerBot_Statics::NewProp_MovementForce_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASTrackerBot_Statics::NewProp_MovementForce_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASTrackerBot_Statics::NewProp_SphereComp_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AI/STrackerBot.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASTrackerBot_Statics::NewProp_SphereComp = { "SphereComp", nullptr, (EPropertyFlags)0x00200800000b0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASTrackerBot, SphereComp), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASTrackerBot_Statics::NewProp_SphereComp_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASTrackerBot_Statics::NewProp_SphereComp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASTrackerBot_Statics::NewProp_HealthComp_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AI/STrackerBot.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASTrackerBot_Statics::NewProp_HealthComp = { "HealthComp", nullptr, (EPropertyFlags)0x00200800000b0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASTrackerBot, HealthComp), Z_Construct_UClass_USHealthComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASTrackerBot_Statics::NewProp_HealthComp_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASTrackerBot_Statics::NewProp_HealthComp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASTrackerBot_Statics::NewProp_MeshComp_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AI/STrackerBot.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASTrackerBot_Statics::NewProp_MeshComp = { "MeshComp", nullptr, (EPropertyFlags)0x00200800000b0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASTrackerBot, MeshComp), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASTrackerBot_Statics::NewProp_MeshComp_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASTrackerBot_Statics::NewProp_MeshComp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASTrackerBot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASTrackerBot_Statics::NewProp_AlphaClients,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASTrackerBot_Statics::NewProp_PowerLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASTrackerBot_Statics::NewProp_ExplodeSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASTrackerBot_Statics::NewProp_SelfDestructSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASTrackerBot_Statics::NewProp_SelfDamageInterval,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASTrackerBot_Statics::NewProp_ExplosionDamage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASTrackerBot_Statics::NewProp_ExplosionRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASTrackerBot_Statics::NewProp_ExplosionEffect,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASTrackerBot_Statics::NewProp_RequiredDistanceToTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASTrackerBot_Statics::NewProp_bUseVelocityChange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASTrackerBot_Statics::NewProp_MovementForce,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASTrackerBot_Statics::NewProp_SphereComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASTrackerBot_Statics::NewProp_HealthComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASTrackerBot_Statics::NewProp_MeshComp,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASTrackerBot_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASTrackerBot>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASTrackerBot_Statics::ClassParams = {
		&ASTrackerBot::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASTrackerBot_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_ASTrackerBot_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ASTrackerBot_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ASTrackerBot_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASTrackerBot()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASTrackerBot_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASTrackerBot, 583002628);
	template<> COOPGAME_API UClass* StaticClass<ASTrackerBot>()
	{
		return ASTrackerBot::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASTrackerBot(Z_Construct_UClass_ASTrackerBot, &ASTrackerBot::StaticClass, TEXT("/Script/COOPGame"), TEXT("ASTrackerBot"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASTrackerBot);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
