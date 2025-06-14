// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemyDefault.h"
#include "EnemyDefaultAIController.h"

// Sets default values
AEnemyDefault::AEnemyDefault()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	AIControllerClass = AEnemyDefaultAIController::StaticClass();

	AutoPossessAI = EAutoPossessAI::PlacedInWorldOrSpawned;

}

// Called when the game starts or when spawned
void AEnemyDefault::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AEnemyDefault::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AEnemyDefault::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

