// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "COOPGame/Public/SWeapon.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSWeapon() {}
// Cross Module References
	COOPGAME_API UScriptStruct* Z_Construct_UScriptStruct_FHitScanTrace();
	UPackage* Z_Construct_UPackage__Script_COOPGame();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EPhysicalSurface();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FVector_NetQuantize();
	COOPGAME_API UClass* Z_Construct_UClass_ASWeapon_NoRegister();
	COOPGAME_API UClass* Z_Construct_UClass_ASWeapon();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	COOPGAME_API UFunction* Z_Construct_UFunction_ASWeapon_OnRep_HitScanTrace();
	COOPGAME_API UFunction* Z_Construct_UFunction_ASWeapon_PlayFireEffects();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COOPGAME_API UFunction* Z_Construct_UFunction_ASWeapon_ServerFire();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UCameraShake_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDamageType_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
// End Cross Module References
class UScriptStruct* FHitScanTrace::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern COOPGAME_API uint32 Get_Z_Construct_UScriptStruct_FHitScanTrace_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FHitScanTrace, Z_Construct_UPackage__Script_COOPGame(), TEXT("HitScanTrace"), sizeof(FHitScanTrace), Get_Z_Construct_UScriptStruct_FHitScanTrace_Hash());
	}
	return Singleton;
}
template<> COOPGAME_API UScriptStruct* StaticStruct<FHitScanTrace>()
{
	return FHitScanTrace::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FHitScanTrace(FHitScanTrace::StaticStruct, TEXT("/Script/COOPGame"), TEXT("HitScanTrace"), false, nullptr, nullptr);
static struct FScriptStruct_COOPGame_StaticRegisterNativesFHitScanTrace
{
	FScriptStruct_COOPGame_StaticRegisterNativesFHitScanTrace()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("HitScanTrace")),new UScriptStruct::TCppStructOps<FHitScanTrace>);
	}
} ScriptStruct_COOPGame_StaticRegisterNativesFHitScanTrace;
	struct Z_Construct_UScriptStruct_FHitScanTrace_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SurfaceType_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SurfaceType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TraceTo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TraceTo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TraceFrom_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TraceFrom;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHitScanTrace_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SWeapon.h" },
		{ "ToolTip", "Information of a single hitscan weapon linetrace" },
	};
#endif
	void* Z_Construct_UScriptStruct_FHitScanTrace_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHitScanTrace>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHitScanTrace_Statics::NewProp_SurfaceType_MetaData[] = {
		{ "ModuleRelativePath", "Public/SWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FHitScanTrace_Statics::NewProp_SurfaceType = { "SurfaceType", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHitScanTrace, SurfaceType), Z_Construct_UEnum_Engine_EPhysicalSurface, METADATA_PARAMS(Z_Construct_UScriptStruct_FHitScanTrace_Statics::NewProp_SurfaceType_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FHitScanTrace_Statics::NewProp_SurfaceType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHitScanTrace_Statics::NewProp_TraceTo_MetaData[] = {
		{ "ModuleRelativePath", "Public/SWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHitScanTrace_Statics::NewProp_TraceTo = { "TraceTo", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHitScanTrace, TraceTo), Z_Construct_UScriptStruct_FVector_NetQuantize, METADATA_PARAMS(Z_Construct_UScriptStruct_FHitScanTrace_Statics::NewProp_TraceTo_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FHitScanTrace_Statics::NewProp_TraceTo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHitScanTrace_Statics::NewProp_TraceFrom_MetaData[] = {
		{ "ModuleRelativePath", "Public/SWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHitScanTrace_Statics::NewProp_TraceFrom = { "TraceFrom", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHitScanTrace, TraceFrom), Z_Construct_UScriptStruct_FVector_NetQuantize, METADATA_PARAMS(Z_Construct_UScriptStruct_FHitScanTrace_Statics::NewProp_TraceFrom_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FHitScanTrace_Statics::NewProp_TraceFrom_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHitScanTrace_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHitScanTrace_Statics::NewProp_SurfaceType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHitScanTrace_Statics::NewProp_TraceTo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHitScanTrace_Statics::NewProp_TraceFrom,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHitScanTrace_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_COOPGame,
		nullptr,
		&NewStructOps,
		"HitScanTrace",
		sizeof(FHitScanTrace),
		alignof(FHitScanTrace),
		Z_Construct_UScriptStruct_FHitScanTrace_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FHitScanTrace_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FHitScanTrace_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FHitScanTrace_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FHitScanTrace()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FHitScanTrace_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_COOPGame();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("HitScanTrace"), sizeof(FHitScanTrace), Get_Z_Construct_UScriptStruct_FHitScanTrace_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FHitScanTrace_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FHitScanTrace_Hash() { return 4100684269U; }
	static FName NAME_ASWeapon_ServerFire = FName(TEXT("ServerFire"));
	void ASWeapon::ServerFire()
	{
		ProcessEvent(FindFunctionChecked(NAME_ASWeapon_ServerFire),NULL);
	}
	void ASWeapon::StaticRegisterNativesASWeapon()
	{
		UClass* Class = ASWeapon::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnRep_HitScanTrace", &ASWeapon::execOnRep_HitScanTrace },
			{ "PlayFireEffects", &ASWeapon::execPlayFireEffects },
			{ "ServerFire", &ASWeapon::execServerFire },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASWeapon_OnRep_HitScanTrace_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASWeapon_OnRep_HitScanTrace_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASWeapon_OnRep_HitScanTrace_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASWeapon, nullptr, "OnRep_HitScanTrace", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASWeapon_OnRep_HitScanTrace_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ASWeapon_OnRep_HitScanTrace_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASWeapon_OnRep_HitScanTrace()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASWeapon_OnRep_HitScanTrace_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASWeapon_PlayFireEffects_Statics
	{
		struct SWeapon_eventPlayFireEffects_Parms
		{
			FVector TracerEndPoint;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TracerEndPoint;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASWeapon_PlayFireEffects_Statics::NewProp_TracerEndPoint = { "TracerEndPoint", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SWeapon_eventPlayFireEffects_Parms, TracerEndPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASWeapon_PlayFireEffects_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASWeapon_PlayFireEffects_Statics::NewProp_TracerEndPoint,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASWeapon_PlayFireEffects_Statics::Function_MetaDataParams[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Public/SWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASWeapon_PlayFireEffects_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASWeapon, nullptr, "PlayFireEffects", sizeof(SWeapon_eventPlayFireEffects_Parms), Z_Construct_UFunction_ASWeapon_PlayFireEffects_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ASWeapon_PlayFireEffects_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04880401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASWeapon_PlayFireEffects_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ASWeapon_PlayFireEffects_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASWeapon_PlayFireEffects()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASWeapon_PlayFireEffects_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASWeapon_ServerFire_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASWeapon_ServerFire_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASWeapon_ServerFire_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASWeapon, nullptr, "ServerFire", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80280CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASWeapon_ServerFire_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ASWeapon_ServerFire_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASWeapon_ServerFire()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASWeapon_ServerFire_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASWeapon_NoRegister()
	{
		return ASWeapon::StaticClass();
	}
	struct Z_Construct_UClass_ASWeapon_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitScanTrace_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HitScanTrace;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BulletSpread_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BulletSpread;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RateOfFire_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RateOfFire;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseDamage_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BaseDamage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TraceEffect_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TraceEffect;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FleshImpactEffect_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FleshImpactEffect;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultImpactEffect_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DefaultImpactEffect;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MuzzleEffect_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MuzzleEffect;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TracerTargetName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_TracerTargetName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MuzzleSocketName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_MuzzleSocketName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FireCamShake_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_FireCamShake;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DamageType_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_DamageType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MeshComp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASWeapon_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_COOPGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASWeapon_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASWeapon_OnRep_HitScanTrace, "OnRep_HitScanTrace" }, // 4236016575
		{ &Z_Construct_UFunction_ASWeapon_PlayFireEffects, "PlayFireEffects" }, // 3544597392
		{ &Z_Construct_UFunction_ASWeapon_ServerFire, "ServerFire" }, // 3143324267
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASWeapon_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SWeapon.h" },
		{ "ModuleRelativePath", "Public/SWeapon.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASWeapon_Statics::NewProp_HitScanTrace_MetaData[] = {
		{ "ModuleRelativePath", "Public/SWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASWeapon_Statics::NewProp_HitScanTrace = { "HitScanTrace", "OnRep_HitScanTrace", (EPropertyFlags)0x0020080100000020, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASWeapon, HitScanTrace), Z_Construct_UScriptStruct_FHitScanTrace, METADATA_PARAMS(Z_Construct_UClass_ASWeapon_Statics::NewProp_HitScanTrace_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASWeapon_Statics::NewProp_HitScanTrace_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASWeapon_Statics::NewProp_BulletSpread_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ClampMin", "0.000000" },
		{ "ModuleRelativePath", "Public/SWeapon.h" },
		{ "ToolTip", "Bullet Spread in Degrees" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASWeapon_Statics::NewProp_BulletSpread = { "BulletSpread", nullptr, (EPropertyFlags)0x0020080000010015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASWeapon, BulletSpread), METADATA_PARAMS(Z_Construct_UClass_ASWeapon_Statics::NewProp_BulletSpread_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASWeapon_Statics::NewProp_BulletSpread_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASWeapon_Statics::NewProp_RateOfFire_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Public/SWeapon.h" },
		{ "ToolTip", "RPM - Bullets per minute fired by weapon" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASWeapon_Statics::NewProp_RateOfFire = { "RateOfFire", nullptr, (EPropertyFlags)0x0020080000010015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASWeapon, RateOfFire), METADATA_PARAMS(Z_Construct_UClass_ASWeapon_Statics::NewProp_RateOfFire_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASWeapon_Statics::NewProp_RateOfFire_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASWeapon_Statics::NewProp_BaseDamage_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Public/SWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASWeapon_Statics::NewProp_BaseDamage = { "BaseDamage", nullptr, (EPropertyFlags)0x0020080000010015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASWeapon, BaseDamage), METADATA_PARAMS(Z_Construct_UClass_ASWeapon_Statics::NewProp_BaseDamage_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASWeapon_Statics::NewProp_BaseDamage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASWeapon_Statics::NewProp_TraceEffect_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Public/SWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASWeapon_Statics::NewProp_TraceEffect = { "TraceEffect", nullptr, (EPropertyFlags)0x0020080000010015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASWeapon, TraceEffect), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASWeapon_Statics::NewProp_TraceEffect_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASWeapon_Statics::NewProp_TraceEffect_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASWeapon_Statics::NewProp_FleshImpactEffect_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Public/SWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASWeapon_Statics::NewProp_FleshImpactEffect = { "FleshImpactEffect", nullptr, (EPropertyFlags)0x0020080000010015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASWeapon, FleshImpactEffect), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASWeapon_Statics::NewProp_FleshImpactEffect_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASWeapon_Statics::NewProp_FleshImpactEffect_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASWeapon_Statics::NewProp_DefaultImpactEffect_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Public/SWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASWeapon_Statics::NewProp_DefaultImpactEffect = { "DefaultImpactEffect", nullptr, (EPropertyFlags)0x0020080000010015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASWeapon, DefaultImpactEffect), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASWeapon_Statics::NewProp_DefaultImpactEffect_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASWeapon_Statics::NewProp_DefaultImpactEffect_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASWeapon_Statics::NewProp_MuzzleEffect_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Public/SWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASWeapon_Statics::NewProp_MuzzleEffect = { "MuzzleEffect", nullptr, (EPropertyFlags)0x0020080000010015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASWeapon, MuzzleEffect), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASWeapon_Statics::NewProp_MuzzleEffect_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASWeapon_Statics::NewProp_MuzzleEffect_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASWeapon_Statics::NewProp_TracerTargetName_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Public/SWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_ASWeapon_Statics::NewProp_TracerTargetName = { "TracerTargetName", nullptr, (EPropertyFlags)0x0020080000030015, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASWeapon, TracerTargetName), METADATA_PARAMS(Z_Construct_UClass_ASWeapon_Statics::NewProp_TracerTargetName_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASWeapon_Statics::NewProp_TracerTargetName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASWeapon_Statics::NewProp_MuzzleSocketName_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Public/SWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_ASWeapon_Statics::NewProp_MuzzleSocketName = { "MuzzleSocketName", nullptr, (EPropertyFlags)0x0020080000030015, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASWeapon, MuzzleSocketName), METADATA_PARAMS(Z_Construct_UClass_ASWeapon_Statics::NewProp_MuzzleSocketName_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASWeapon_Statics::NewProp_MuzzleSocketName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASWeapon_Statics::NewProp_FireCamShake_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Public/SWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASWeapon_Statics::NewProp_FireCamShake = { "FireCamShake", nullptr, (EPropertyFlags)0x0024080000010015, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASWeapon, FireCamShake), Z_Construct_UClass_UCameraShake_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ASWeapon_Statics::NewProp_FireCamShake_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASWeapon_Statics::NewProp_FireCamShake_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASWeapon_Statics::NewProp_DamageType_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Public/SWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASWeapon_Statics::NewProp_DamageType = { "DamageType", nullptr, (EPropertyFlags)0x0024080000010015, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASWeapon, DamageType), Z_Construct_UClass_UDamageType_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ASWeapon_Statics::NewProp_DamageType_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASWeapon_Statics::NewProp_DamageType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASWeapon_Statics::NewProp_MeshComp_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASWeapon_Statics::NewProp_MeshComp = { "MeshComp", nullptr, (EPropertyFlags)0x00200800000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASWeapon, MeshComp), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASWeapon_Statics::NewProp_MeshComp_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASWeapon_Statics::NewProp_MeshComp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASWeapon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASWeapon_Statics::NewProp_HitScanTrace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASWeapon_Statics::NewProp_BulletSpread,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASWeapon_Statics::NewProp_RateOfFire,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASWeapon_Statics::NewProp_BaseDamage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASWeapon_Statics::NewProp_TraceEffect,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASWeapon_Statics::NewProp_FleshImpactEffect,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASWeapon_Statics::NewProp_DefaultImpactEffect,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASWeapon_Statics::NewProp_MuzzleEffect,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASWeapon_Statics::NewProp_TracerTargetName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASWeapon_Statics::NewProp_MuzzleSocketName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASWeapon_Statics::NewProp_FireCamShake,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASWeapon_Statics::NewProp_DamageType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASWeapon_Statics::NewProp_MeshComp,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASWeapon_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASWeapon>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASWeapon_Statics::ClassParams = {
		&ASWeapon::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASWeapon_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_ASWeapon_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ASWeapon_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ASWeapon_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASWeapon()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASWeapon_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASWeapon, 2847212640);
	template<> COOPGAME_API UClass* StaticClass<ASWeapon>()
	{
		return ASWeapon::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASWeapon(Z_Construct_UClass_ASWeapon, &ASWeapon::StaticClass, TEXT("/Script/COOPGame"), TEXT("ASWeapon"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASWeapon);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
