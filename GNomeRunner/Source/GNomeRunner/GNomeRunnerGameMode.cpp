// Copyright Epic Games, Inc. All Rights Reserved.

#include "GNomeRunnerGameMode.h"
#include "GNomeRunnerCharacter.h"
#include "UObject/ConstructorHelpers.h"

AGNomeRunnerGameMode::AGNomeRunnerGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
