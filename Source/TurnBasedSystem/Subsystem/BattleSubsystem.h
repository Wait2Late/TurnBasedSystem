// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "BattleSubsystem.generated.h"

/**
 * 
 */

DECLARE_MULTICAST_DELEGATE_OneParam(FOnEnemyDefeat, int, RemoveEnemy);
UCLASS()
class TURNBASEDSYSTEM_API UBattleSubsystem : public UWorldSubsystem
{
	GENERATED_BODY()
public:
	virtual void Initialize(FSubsystemCollectionBase& Collection) override;
	virtual void Deinitialize() override;

	UPROPERTY(BlueprintAssignable, Category="Battle Event")
	FOnEnemyDefeat OnEnemyDefeat;

	
	UFUNCTION(BlueprintCallable)
	void AddEnemies(int EnemyAmount);
private:
	TArray<int> AmountOfEnemies;
	int CurrentEnemyIndex;
};
