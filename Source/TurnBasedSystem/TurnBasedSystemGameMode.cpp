// Copyright Epic Games, Inc. All Rights Reserved.

#include "TurnBasedSystemGameMode.h"
#include "TurnBasedSystemCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATurnBasedSystemGameMode::ATurnBasedSystemGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
