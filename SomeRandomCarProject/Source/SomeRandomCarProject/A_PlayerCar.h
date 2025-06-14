// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "WheeledVehiclePawn.h"
#include "ChaosWheeledVehicleMovementComponent.h"
#include "A_PlayerCar.generated.h"

/**
 * 
 */
UCLASS()
class SOMERANDOMCARPROJECT_API AA_PlayerCar : public AWheeledVehiclePawn
{
	GENERATED_BODY()
	

public:
	AA_PlayerCar();

protected:
	virtual void SetupPlayerInputComponent(UInputComponent* PlayerInputComponent) override;

private:
		// Input functions
	void MoveForward(float Value);

};
