// Fill out your copyright notice in the Description page of Project Settings.

#include "DoorRotation.h"


// Sets default values for this component's properties
UDoorRotation::UDoorRotation()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UDoorRotation::BeginPlay()
{
	Super::BeginPlay();
	Owner = GetOwner();//finds the owner and the actor it opens
	OpensDoorActor= GetWorld()->GetFirstPlayerController()->GetPawn();

}

void UDoorRotation::OpenDoor()
{


	//create a rotator
	//set the door rotation
	Owner->SetActorRotation(FRotator(0.0f, OpenAngle, 0.0f));
}
void UDoorRotation::CloseDoor()
{
	
	//create a rotator

	Owner->SetActorRotation(FRotator(0.0f, 0.0f, 0.0f));
}

// Called every frame
void UDoorRotation::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	//poll the trigger volume
	//if the actor that opens is in the volume
	if (PressurePoint->IsOverlappingActor(OpensDoorActor)) {
		OpenDoor();

		DoorLastOpened=GetWorld()->GetTimeSeconds(); //open time for the door
	}
	//check close time
	if (GetWorld()->GetTimeSeconds() - DoorLastOpened > DoorCloseDelay)
	{

		CloseDoor();
	}
}

