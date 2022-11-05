// Fill out your copyright notice in the Description page of Project Settings.


#include "Moving_Platform.h"

// Sets default values
AMoving_Platform::AMoving_Platform()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMoving_Platform::BeginPlay()
{
	Super::BeginPlay();
	
	StartingPoint = GetActorLocation();
	FString String = "My String Value";
	UE_LOG(LogTemp, Display, TEXT("Your message: %s"), *String);
	
}

// Called every frame
void AMoving_Platform::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	MovePlatform(DeltaTime);
	RPlatform(DeltaTime);

	


	
}

void AMoving_Platform :: MovePlatform(float DeltaTime)
{
	//Platform Moves Forward
		//Gets current Location
	FVector CurrentLocation = GetActorLocation();
		//Add vector to the location
	CurrentLocation = CurrentLocation + (Velocity * DeltaTime);
		// sets location
	SetActorLocation(CurrentLocation);
	//Send Platform backwards
		//check distance
	float DistanceMovement = FVector::Dist(StartingPoint, CurrentLocation);
		//reverse direction
	
	if(DistanceMovement > Movement)
	{

		float Overshot = DistanceMovement - Movement;
		FString Name = GetName();
		UE_LOG(LogTemp, Display, TEXT("%s Movement: %f"), *Name, Overshot);
		FVector MoveDirection = Velocity.GetSafeNormal();
		StartingPoint = StartingPoint + MoveDirection * Movement;
		SetActorLocation(StartingPoint);
		Velocity = -Velocity;
		
	}
	
}

void AMoving_Platform :: RPlatform(float DeltaTime)
{

}
