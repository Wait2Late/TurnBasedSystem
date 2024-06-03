// Fill out your copyright notice in the Description page of Project Settings.


#include "BattleSubsystem.h"

#include "TurnBasedSystem/FunctionLibrary/HandyFunctions.h"

void UBattleSubsystem::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);
	
	CurrentEnemyIndex = 0; 
}

void UBattleSubsystem::Deinitialize()
{
	Super::Deinitialize();
}

void UBattleSubsystem::AddEnemies(const int AmountToAdd)
{
	
	AmountOfEnemies->SetNum(5);

	for (int i = 0; i < AmountToAdd; ++i)
		AmountOfEnemies->Add(i);

	if (AmountOfEnemies->Num() > 5)
		AmountOfEnemies->SetNum(5);

	CurrentEnemyIndex = AmountOfEnemies->Num();
}

void UBattleSubsystem::RemoveEnemies(const int AmountToRemove)
{
	if (CurrentEnemyIndex < AmountToRemove)
		return;
	
	for (int i = 0; i < AmountToRemove; ++i)
		AmountOfEnemies->Remove(i);

	CurrentEnemyIndex = AmountOfEnemies->Num();
	
	OnEnemyDefeat.Broadcast(CurrentEnemyIndex);

}

