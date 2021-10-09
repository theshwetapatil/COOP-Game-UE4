// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SWeapon.generated.h"

class USkeletalMeshComponent;
class UDamageType;
class UParticleSystem;
class UCameraShake;

//Information of a single hitscan weapon linetrace
USTRUCT()
struct FHitScanTrace
{
	GENERATED_BODY()
public:
	UPROPERTY()
	FVector_NetQuantize TraceFrom;

	UPROPERTY()
	FVector_NetQuantize TraceTo;

	UPROPERTY()
	TEnumAsByte<EPhysicalSurface> SurfaceType;
};

UCLASS()
class COOPGAME_API ASWeapon : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASWeapon();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	USkeletalMeshComponent* MeshComp;

	UFUNCTION(BlueprintCallable, Category = "Weapon")
	void PlayFireEffects(FVector TracerEndPoint);

	void PlayImpactEffects(EPhysicalSurface SurfaceType, FVector ImpactPoint);

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Weapon")
	TSubclassOf<UDamageType> DamageType;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Weapon")
	TSubclassOf<UCameraShake> FireCamShake;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = "Weapon")
	FName MuzzleSocketName;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = "Weapon")
	FName TracerTargetName;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Weapon")
	UParticleSystem* MuzzleEffect;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Weapon")
	UParticleSystem* DefaultImpactEffect;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Weapon")
	UParticleSystem* FleshImpactEffect;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Weapon")
	UParticleSystem* TraceEffect;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Weapon")
	float BaseDamage;

	//Challenge Code- Grenade Launcher
	virtual void Fire();

	UFUNCTION(Server, Reliable, WithValidation)
	void ServerFire();

	FTimerHandle TimerHandle_TimeBetweenShots;

	float LastFireTime;

	/*RPM - Bullets per minute fired by weapon*/
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Weapon")
	float RateOfFire;

	/*Bullet Spread in Degrees*/
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Weapon", meta= (ClampMin=0.0f))
	float BulletSpread;

	// Derived from RateOfFire
	float TimeBetweenShots;

	UPROPERTY(ReplicatedUsing = OnRep_HitScanTrace)
	FHitScanTrace HitScanTrace;

	UFUNCTION()
	void OnRep_HitScanTrace();

public:	
	void StartFire();
	void StopFire();

	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
};
