// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "COOPGame/Public/SPowerupActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSPowerupActor() {}
// Cross Module References
	COOPGAME_API UClass* Z_Construct_UClass_ASPowerupActor_NoRegister();
	COOPGAME_API UClass* Z_Construct_UClass_ASPowerupActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_COOPGame();
	COOPGAME_API UFunction* Z_Construct_UFunction_ASPowerupActor_OnActivated();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COOPGAME_API UFunction* Z_Construct_UFunction_ASPowerupActor_OnExpired();
	COOPGAME_API UFunction* Z_Construct_UFunction_ASPowerupActor_OnPowerupStateChanged();
	COOPGAME_API UFunction* Z_Construct_UFunction_ASPowerupActor_OnPowerupTicked();
	COOPGAME_API UFunction* Z_Construct_UFunction_ASPowerupActor_OnRep_PowerupActive();
	COOPGAME_API UFunction* Z_Construct_UFunction_ASPowerupActor_OnTickPowerup();
// End Cross Module References
	static FName NAME_ASPowerupActor_OnActivated = FName(TEXT("OnActivated"));
	void ASPowerupActor::OnActivated(AActor* ActiveFor)
	{
		SPowerupActor_eventOnActivated_Parms Parms;
		Parms.ActiveFor=ActiveFor;
		ProcessEvent(FindFunctionChecked(NAME_ASPowerupActor_OnActivated),&Parms);
	}
	static FName NAME_ASPowerupActor_OnExpired = FName(TEXT("OnExpired"));
	void ASPowerupActor::OnExpired()
	{
		ProcessEvent(FindFunctionChecked(NAME_ASPowerupActor_OnExpired),NULL);
	}
	static FName NAME_ASPowerupActor_OnPowerupStateChanged = FName(TEXT("OnPowerupStateChanged"));
	void ASPowerupActor::OnPowerupStateChanged(bool bNewIsActive)
	{
		SPowerupActor_eventOnPowerupStateChanged_Parms Parms;
		Parms.bNewIsActive=bNewIsActive ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_ASPowerupActor_OnPowerupStateChanged),&Parms);
	}
	static FName NAME_ASPowerupActor_OnPowerupTicked = FName(TEXT("OnPowerupTicked"));
	void ASPowerupActor::OnPowerupTicked()
	{
		ProcessEvent(FindFunctionChecked(NAME_ASPowerupActor_OnPowerupTicked),NULL);
	}
	void ASPowerupActor::StaticRegisterNativesASPowerupActor()
	{
		UClass* Class = ASPowerupActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnRep_PowerupActive", &ASPowerupActor::execOnRep_PowerupActive },
			{ "OnTickPowerup", &ASPowerupActor::execOnTickPowerup },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASPowerupActor_OnActivated_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActiveFor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASPowerupActor_OnActivated_Statics::NewProp_ActiveFor = { "ActiveFor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SPowerupActor_eventOnActivated_Parms, ActiveFor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASPowerupActor_OnActivated_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASPowerupActor_OnActivated_Statics::NewProp_ActiveFor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASPowerupActor_OnActivated_Statics::Function_MetaDataParams[] = {
		{ "Category", "Powerups" },
		{ "ModuleRelativePath", "Public/SPowerupActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASPowerupActor_OnActivated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASPowerupActor, nullptr, "OnActivated", sizeof(SPowerupActor_eventOnActivated_Parms), Z_Construct_UFunction_ASPowerupActor_OnActivated_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ASPowerupActor_OnActivated_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASPowerupActor_OnActivated_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ASPowerupActor_OnActivated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASPowerupActor_OnActivated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASPowerupActor_OnActivated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASPowerupActor_OnExpired_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASPowerupActor_OnExpired_Statics::Function_MetaDataParams[] = {
		{ "Category", "Powerups" },
		{ "ModuleRelativePath", "Public/SPowerupActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASPowerupActor_OnExpired_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASPowerupActor, nullptr, "OnExpired", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASPowerupActor_OnExpired_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ASPowerupActor_OnExpired_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASPowerupActor_OnExpired()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASPowerupActor_OnExpired_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASPowerupActor_OnPowerupStateChanged_Statics
	{
		static void NewProp_bNewIsActive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNewIsActive;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ASPowerupActor_OnPowerupStateChanged_Statics::NewProp_bNewIsActive_SetBit(void* Obj)
	{
		((SPowerupActor_eventOnPowerupStateChanged_Parms*)Obj)->bNewIsActive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASPowerupActor_OnPowerupStateChanged_Statics::NewProp_bNewIsActive = { "bNewIsActive", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SPowerupActor_eventOnPowerupStateChanged_Parms), &Z_Construct_UFunction_ASPowerupActor_OnPowerupStateChanged_Statics::NewProp_bNewIsActive_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASPowerupActor_OnPowerupStateChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASPowerupActor_OnPowerupStateChanged_Statics::NewProp_bNewIsActive,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASPowerupActor_OnPowerupStateChanged_Statics::Function_MetaDataParams[] = {
		{ "Category", "Powerups" },
		{ "ModuleRelativePath", "Public/SPowerupActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASPowerupActor_OnPowerupStateChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASPowerupActor, nullptr, "OnPowerupStateChanged", sizeof(SPowerupActor_eventOnPowerupStateChanged_Parms), Z_Construct_UFunction_ASPowerupActor_OnPowerupStateChanged_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ASPowerupActor_OnPowerupStateChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASPowerupActor_OnPowerupStateChanged_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ASPowerupActor_OnPowerupStateChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASPowerupActor_OnPowerupStateChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASPowerupActor_OnPowerupStateChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASPowerupActor_OnPowerupTicked_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASPowerupActor_OnPowerupTicked_Statics::Function_MetaDataParams[] = {
		{ "Category", "Powerups" },
		{ "ModuleRelativePath", "Public/SPowerupActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASPowerupActor_OnPowerupTicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASPowerupActor, nullptr, "OnPowerupTicked", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASPowerupActor_OnPowerupTicked_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ASPowerupActor_OnPowerupTicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASPowerupActor_OnPowerupTicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASPowerupActor_OnPowerupTicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASPowerupActor_OnRep_PowerupActive_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASPowerupActor_OnRep_PowerupActive_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SPowerupActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASPowerupActor_OnRep_PowerupActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASPowerupActor, nullptr, "OnRep_PowerupActive", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASPowerupActor_OnRep_PowerupActive_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ASPowerupActor_OnRep_PowerupActive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASPowerupActor_OnRep_PowerupActive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASPowerupActor_OnRep_PowerupActive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASPowerupActor_OnTickPowerup_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASPowerupActor_OnTickPowerup_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SPowerupActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASPowerupActor_OnTickPowerup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASPowerupActor, nullptr, "OnTickPowerup", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASPowerupActor_OnTickPowerup_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ASPowerupActor_OnTickPowerup_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASPowerupActor_OnTickPowerup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASPowerupActor_OnTickPowerup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASPowerupActor_NoRegister()
	{
		return ASPowerupActor::StaticClass();
	}
	struct Z_Construct_UClass_ASPowerupActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsPowerupActive_MetaData[];
#endif
		static void NewProp_bIsPowerupActive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsPowerupActive;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TotalNrOfTicks_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TotalNrOfTicks;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PowerupInterval_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PowerupInterval;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASPowerupActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_COOPGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASPowerupActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASPowerupActor_OnActivated, "OnActivated" }, // 4235339497
		{ &Z_Construct_UFunction_ASPowerupActor_OnExpired, "OnExpired" }, // 2380084211
		{ &Z_Construct_UFunction_ASPowerupActor_OnPowerupStateChanged, "OnPowerupStateChanged" }, // 3600862132
		{ &Z_Construct_UFunction_ASPowerupActor_OnPowerupTicked, "OnPowerupTicked" }, // 1841680674
		{ &Z_Construct_UFunction_ASPowerupActor_OnRep_PowerupActive, "OnRep_PowerupActive" }, // 550527254
		{ &Z_Construct_UFunction_ASPowerupActor_OnTickPowerup, "OnTickPowerup" }, // 2508821057
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASPowerupActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SPowerupActor.h" },
		{ "ModuleRelativePath", "Public/SPowerupActor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASPowerupActor_Statics::NewProp_bIsPowerupActive_MetaData[] = {
		{ "ModuleRelativePath", "Public/SPowerupActor.h" },
		{ "ToolTip", "Keeps state of the power-up" },
	};
#endif
	void Z_Construct_UClass_ASPowerupActor_Statics::NewProp_bIsPowerupActive_SetBit(void* Obj)
	{
		((ASPowerupActor*)Obj)->bIsPowerupActive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASPowerupActor_Statics::NewProp_bIsPowerupActive = { "bIsPowerupActive", "OnRep_PowerupActive", (EPropertyFlags)0x0020080100000020, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASPowerupActor), &Z_Construct_UClass_ASPowerupActor_Statics::NewProp_bIsPowerupActive_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASPowerupActor_Statics::NewProp_bIsPowerupActive_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASPowerupActor_Statics::NewProp_bIsPowerupActive_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASPowerupActor_Statics::NewProp_TotalNrOfTicks_MetaData[] = {
		{ "Category", "Powerups" },
		{ "ModuleRelativePath", "Public/SPowerupActor.h" },
		{ "ToolTip", "Total times the power effect is applied" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ASPowerupActor_Statics::NewProp_TotalNrOfTicks = { "TotalNrOfTicks", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASPowerupActor, TotalNrOfTicks), METADATA_PARAMS(Z_Construct_UClass_ASPowerupActor_Statics::NewProp_TotalNrOfTicks_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASPowerupActor_Statics::NewProp_TotalNrOfTicks_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASPowerupActor_Statics::NewProp_PowerupInterval_MetaData[] = {
		{ "Category", "Powerups" },
		{ "ModuleRelativePath", "Public/SPowerupActor.h" },
		{ "ToolTip", "Time between powerup ticks" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASPowerupActor_Statics::NewProp_PowerupInterval = { "PowerupInterval", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASPowerupActor, PowerupInterval), METADATA_PARAMS(Z_Construct_UClass_ASPowerupActor_Statics::NewProp_PowerupInterval_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASPowerupActor_Statics::NewProp_PowerupInterval_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASPowerupActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASPowerupActor_Statics::NewProp_bIsPowerupActive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASPowerupActor_Statics::NewProp_TotalNrOfTicks,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASPowerupActor_Statics::NewProp_PowerupInterval,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASPowerupActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASPowerupActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASPowerupActor_Statics::ClassParams = {
		&ASPowerupActor::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASPowerupActor_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_ASPowerupActor_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ASPowerupActor_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ASPowerupActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASPowerupActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASPowerupActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASPowerupActor, 869273069);
	template<> COOPGAME_API UClass* StaticClass<ASPowerupActor>()
	{
		return ASPowerupActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASPowerupActor(Z_Construct_UClass_ASPowerupActor, &ASPowerupActor::StaticClass, TEXT("/Script/COOPGame"), TEXT("ASPowerupActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASPowerupActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
