// Fill out your copyright notice in the Description page of Project Settings.


#include "SGameMode.h"
#include "Components/SHealthComponent.h"
#include "../Public/SGameState.h"
#include "../Public/SPlayerState.h"

#include "Runtime/Engine/Public/TimerManager.h"
#include "Runtime/Engine/Classes/Engine/World.h"

ASGameMode::ASGameMode()
{
	TimeBetweenWaves = 20.0f;

	GameStateClass = ASGameState::StaticClass();
	PlayerStateClass = ASGameState::StaticClass();

	PrimaryActorTick.bCanEverTick = true;
	PrimaryActorTick.TickInterval = 1.0f;
}

void ASGameMode::SpawnBotTimerElapsed()
{
	SpawnNewBot();

	NrOfBotsToSpawn--;
	UE_LOG(LogTemp, Log, TEXT("SpawnBotTimerElapsed::NrOfBotsToSpawn Changed: %s"), *FString::SanitizeFloat(NrOfBotsToSpawn));

	if (NrOfBotsToSpawn <= 0)
	{
		EndWave();
	}
}

void ASGameMode::StartWave()
{
	WaveCount++;

	NrOfBotsToSpawn = 2 * WaveCount;

	GetWorldTimerManager().SetTimer(TimerHandle_BotSpawner, this, &ASGameMode::SpawnBotTimerElapsed, 1.0f, true, 0.0f);

	UE_LOG(LogTemp, Log, TEXT("StartWave::WaveCount Changed: %s"), *FString::SanitizeFloat(WaveCount));
	UE_LOG(LogTemp, Log, TEXT("StartWave::NrOfBotsToSpawn Changed: %s"), *FString::SanitizeFloat(NrOfBotsToSpawn));

	SetWaveState(EWaveState::WaveInProgress);
}

void ASGameMode::EndWave()
{
	GetWorldTimerManager().ClearTimer(TimerHandle_BotSpawner);

	SetWaveState(EWaveState::WaitingToComplete);

	//PrepareForNextWave();
}

void ASGameMode::PrepareForNextWave()
{
	GetWorldTimerManager().SetTimer(TimerHandle_NextWaveStart, this, &ASGameMode::StartWave, TimeBetweenWaves, false);

	SetWaveState(EWaveState::WaitingToStart);

	RestartDeadPlayers();
}

void ASGameMode::CheckWaveState()
{
	bool bIsPreparingForWave = GetWorldTimerManager().IsTimerActive(TimerHandle_NextWaveStart);
	if (NrOfBotsToSpawn > 0 || bIsPreparingForWave)
	{
		return;
	}
	//UE_LOG(LogTemp, Log, TEXT("CheckWaveState::NrOfBotsToSpawn Changed: %s"), *FString::SanitizeFloat(NrOfBotsToSpawn));

	bool bIsAnyBotAlive = false;

	for (FConstPawnIterator It = GetWorld()->GetPawnIterator(); It; It++)
	{
		APawn* TestPawn = It->Get();
		if (TestPawn == nullptr || TestPawn->IsPlayerControlled())
		{
			continue;
		}

		USHealthComponent* HealthComp = Cast<USHealthComponent>(TestPawn->GetComponentByClass(USHealthComponent::StaticClass()));
		if (HealthComp && HealthComp->GetHealth() > 0.0f)
		{
			UE_LOG(LogTemp, Log, TEXT("CheckWaveState::ALIVE!"));
			bIsAnyBotAlive = true;
			break;
		}
	}

	if (!bIsAnyBotAlive)
	{
		SetWaveState(EWaveState::WaveComplete);

		PrepareForNextWave();
	}
}

void ASGameMode::CheckAnyPlayerAlive()
{
	for (FConstPlayerControllerIterator  It = GetWorld()->GetPlayerControllerIterator(); It; It++)
	{
		APlayerController* PC = It->Get();
		
		if (PC && PC->GetPawn())
		{
			APawn* TestPawn = PC->GetPawn();
			USHealthComponent* HealthComp = Cast<USHealthComponent>(TestPawn->GetComponentByClass(USHealthComponent::StaticClass()));
			if (ensure(HealthComp) && HealthComp->GetHealth() > 0.0f)
			{
				//A player is still alive
				return;
			}
		}
	}

	//No player alive

}

void ASGameMode::GameOver()
{
	EndWave();

	// @TODO: Finish up the match, present 'game over' to players

	SetWaveState(EWaveState::GameOver);

	UE_LOG(LogTemp, Log, TEXT("GAME OVER!"));
}

void ASGameMode::SetWaveState(EWaveState NewState)
{
	ASGameState* GS = GetGameState<ASGameState>();
	if (ensureAlways(GS))
	{
		GS->SetWaveState(NewState);
	}
}

void ASGameMode::RestartDeadPlayers()
{
	for (FConstPlayerControllerIterator It = GetWorld()->GetPlayerControllerIterator(); It; It++)
	{
		APlayerController* PC = It->Get();

		if (PC && PC->GetPawn() == nullptr)
		{
			RestartPlayer(PC);
		}
	}
}

void ASGameMode::StartPlay()
{
	Super::StartPlay();

	PrepareForNextWave();
}

void ASGameMode::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);

	CheckWaveState();
	CheckAnyPlayerAlive();
}
