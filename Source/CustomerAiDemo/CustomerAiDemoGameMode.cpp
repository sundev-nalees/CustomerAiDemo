// Copyright Epic Games, Inc. All Rights Reserved.

#include "CustomerAiDemoGameMode.h"
#include "CustomerAiDemoCharacter.h"
#include "UObject/ConstructorHelpers.h"

ACustomerAiDemoGameMode::ACustomerAiDemoGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
