// Fill out your copyright notice in the Description page of Project Settings.


#include "BattleSubsystem.h"

void UBattleSubsystem::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);
	
	AmountOfEnemies.SetNum(5);
	CurrentEnemyIndex = 0;
	
}

void UBattleSubsystem::Deinitialize()
{
	Super::Deinitialize();
}

void UBattleSubsystem::AddEnemies(const int EnemyAmount)
{
	for (int i = 0; i < EnemyAmount; ++i)
		AmountOfEnemies.Add(i);

	if (AmountOfEnemies.Num() > 5)
		AmountOfEnemies.SetNum(5);
}

