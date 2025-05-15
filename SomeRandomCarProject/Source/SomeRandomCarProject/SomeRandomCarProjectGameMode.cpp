// Copyright Epic Games, Inc. All Rights Reserved.

#include "SomeRandomCarProjectGameMode.h"
#include "SomeRandomCarProjectPlayerController.h"

ASomeRandomCarProjectGameMode::ASomeRandomCarProjectGameMode()
{
	PlayerControllerClass = ASomeRandomCarProjectPlayerController::StaticClass();
}
