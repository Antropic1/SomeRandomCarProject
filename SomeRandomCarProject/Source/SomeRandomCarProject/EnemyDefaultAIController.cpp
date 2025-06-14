// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemyDefaultAIController.h"
#include "Kismet/GameplayStatics.h"
#include "Engine/Engine.h"
#include "WheeledVehiclePawn.h"
#include "TimerManager.h"


AEnemyDefaultAIController::AEnemyDefaultAIController()
{
	PrimaryActorTick.bCanEverTick = false; // Disable ticking for this controller by default

    
}

void AEnemyDefaultAIController::BeginPlay()
{
	Super::BeginPlay();

	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("Enemy AI Controller Initialized!"));


	//playerPawn = UGameplayStatics::GetPlayerPawn(GetWorld(), 0);

    APlayerController* playerController = UGameplayStatics::GetPlayerController(GetWorld(), 0);

	if (playerController)
	{
		APawn* controlledPawn = playerController->GetPawn();

		AWheeledVehiclePawn* playerCar = Cast<AWheeledVehiclePawn>(controlledPawn);

		if (playerCar)
		{
			playerPawn = playerCar;
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("Player Pawn found and casted to AWheeledVehiclePawn!"));
		}
		else
		{
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Player Pawn is not of type AWheeledVehiclePawn!"));


		}
	}


	MoveToPlayer();
	
}

void AEnemyDefaultAIController::MoveToPlayer()
{
	if (playerPawn)
	{
		MoveToActor(playerPawn, 100.0f);
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("Moving towards Player Pawn!"));
	}
	else
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Player Pawn not found!"));
	}
}

void AEnemyDefaultAIController::OnMoveCompleted(FAIRequestID RequestID, const FPathFollowingResult& Result)
{
	Super::OnMoveCompleted(RequestID, Result);

	if (Result.IsSuccess())
	{
		GetWorldTimerManager().SetTimer(
		MoveTimerHandle, 
		this, 
		&AEnemyDefaultAIController::MoveToPlayer, 
		0.25f, 
		false); // Wait for 0.25 seconds before moving agai


	}

}


