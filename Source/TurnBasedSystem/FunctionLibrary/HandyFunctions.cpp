// Fill out your copyright notice in the Description page of Project Settings.


#include "HandyFunctions.h"

UBattleSubsystem* UHandyFunctions::GetBattleSubsystem()
{
	UBattleSubsystem* BattleSubsystem = GetWorld()->GetSubsystem<UBattleSubsystem>();
	return BattleSubsystem;
}

void UHandyFunctions::PrintString(FString Text)
{
	
	GEngine->AddOnScreenDebugMessage(-1, 2, FColor::Black, FString::Printf(TEXT("")));
}
