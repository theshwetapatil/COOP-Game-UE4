// Fill out your copyright notice in the Description page of Project Settings.


#include "SProjectileWeapon.h"
#include <Runtime/Engine/Classes/Engine/World.h>

void  ASProjectileWeapon::Fire()
{
	AActor* MyOnwer = GetOwner();
	if (MyOnwer && ProjectileClass)
	{
		FVector EyeLocation;
		FRotator EyeRotation;
		MyOnwer->GetActorEyesViewPoint(EyeLocation, EyeRotation);

		FVector MuzzleLocation = MeshComp->GetSocketLocation(MuzzleSocketName);

		FActorSpawnParameters SpawnParams;
		SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;

		GetWorld()->SpawnActor<AActor>(ProjectileClass, MuzzleLocation, EyeRotation, SpawnParams);;
	}
}
