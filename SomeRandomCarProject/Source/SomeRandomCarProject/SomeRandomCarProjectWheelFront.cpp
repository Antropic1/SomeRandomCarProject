// Copyright Epic Games, Inc. All Rights Reserved.

#include "SomeRandomCarProjectWheelFront.h"
#include "UObject/ConstructorHelpers.h"

USomeRandomCarProjectWheelFront::USomeRandomCarProjectWheelFront()
{
	AxleType = EAxleType::Front;
	bAffectedBySteering = true;
	MaxSteerAngle = 40.f;
}