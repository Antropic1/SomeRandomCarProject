// Copyright Epic Games, Inc. All Rights Reserved.

#include "SomeRandomCarProjectWheelRear.h"
#include "UObject/ConstructorHelpers.h"

USomeRandomCarProjectWheelRear::USomeRandomCarProjectWheelRear()
{
	AxleType = EAxleType::Rear;
	bAffectedByHandbrake = true;
	bAffectedByEngine = true;
}