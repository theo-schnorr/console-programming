// Fill out your copyright notice in the Description page of Project Settings.


#include "PointBubbleSpawning.h"
#include "Math/UnrealMathUtility.h"

FTransform UPointBubbleSpawning::RandomizeSpawnLocation(AActor* minActor, AActor* maxActor)
{
	// Get the min and max locations as vectors
	FVector minLoc = minActor->GetActorLocation();
	FVector maxLoc = maxActor->GetActorLocation();

	// Get a random x and y coordinate
	float spawnX = FMath::RandRange(minLoc.X, maxLoc.X);
	float spawnY = FMath::RandRange(minLoc.Y, maxLoc.Y);

	// Set the spawn location
	FVector spawnLoc = FVector(spawnX, spawnY, minLoc.Z);

	// Create the transform and send it
	FTransform spawn;
	spawn.SetLocation(spawnLoc);
	spawn.SetRotation(FQuat(0, 0, 0, 0));
	spawn.SetScale3D(FVector(1, 1, 1));
	return spawn;
}

TSubclassOf<AActor> UPointBubbleSpawning::RandomizeActor(TSubclassOf<AActor> actorOne, TSubclassOf<AActor> actorTwo, TSubclassOf<AActor> actorThree, TSubclassOf<AActor> actorFour)
{
	int choice = FMath::RandRange(0,3);

	switch (choice)
	{
	case 0:
		return actorOne;
		break;

	case 1:
		return actorTwo;
		break;

	case 2:
		return actorThree;
		break;

	case 3:
		return actorFour;
		break;

	default:
		return actorFour;
	}
}