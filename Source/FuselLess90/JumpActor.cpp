// Fill out your copyright notice in the Description page of Project Settings.


#include "JumpActor.h"

// Sets default values
AJumpActor::AJumpActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	JumpMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("JumpMesh"));
}

// Called when the game starts or when spawned
void AJumpActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AJumpActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (GetActorLocation().Z > JumpHeight)
	{
		_currentDirection = UDirectionEnum::Direction::Down;
	}
	else if (GetActorLocation().Z <= 200)
	{
		_currentDirection = UDirectionEnum::Direction::Up;
	}

	FVector newFVector = GetActorLocation();
	newFVector.Z += JumpSpeed * DeltaTime * static_cast<int>(_currentDirection);

	SetActorLocation(newFVector);
}

