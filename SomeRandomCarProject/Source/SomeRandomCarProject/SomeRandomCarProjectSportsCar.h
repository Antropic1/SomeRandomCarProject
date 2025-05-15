// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "SomeRandomCarProjectPawn.h"
#include "SomeRandomCarProjectSportsCar.generated.h"

/**
 *  Sports car wheeled vehicle implementation
 */
UCLASS(abstract)
class SOMERANDOMCARPROJECT_API ASomeRandomCarProjectSportsCar : public ASomeRandomCarProjectPawn
{
	GENERATED_BODY()
	
public:

	ASomeRandomCarProjectSportsCar();
};
