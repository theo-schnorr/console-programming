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

/*
UClass UPointBubbleSpawning::RandomizeActor(UClass classOne, UClass classTwo, UClass classThree, UClass classFour)
{
	int choice = FMath::RandRange(0,3);

	switch (choice)
	{
	case 0:
		return classOne;
		break;

	case 1:
		return classTwo;
		break;

	case 2:
		return classThree;
		break;

	case 3:
		return classFour;
		break;
	}
}
*/