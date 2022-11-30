// Fill out your copyright notice in the Description page of Project Settings.


#include "GNomeGameMode.h"
#include "GNomeMovement.h"
//#include "GNomeRunnerCharacter.h"
#include "UObject/ConstructorHelpers.h"

AGNomeGameMode::AGNomeGameMode()
{
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/Blueprints/GNomeMovement_BP"));
	//static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
