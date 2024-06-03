// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "TurnBasedSystem/Subsystem/BattleSubsystem.h"
#include "HandyFunctions.generated.h"

/**
 * 
 */
UCLASS()
class TURNBASEDSYSTEM_API UHandyFunctions : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
public:

	UBattleSubsystem* GetBattleSubsystem();

	static void PrintString(FString Text);
	
	
};
