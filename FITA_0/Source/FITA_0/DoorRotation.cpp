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
	//CloseDoor();
	if(!PressurePoint)
	{
		UE_LOG(LogTemp, Error, TEXT("%s has no Trigger volume component on it"), *GetOwner()->GetName())
	}
}


/**void UDoorRotation::OpenDoor()
{


	//create a rotator
	//set the door rotation
	//Owner->SetActorRotation(FRotator(0.0f, OpenAngle, 0.0f)); rotation code 1/21/18

	
}
void UDoorRotation::CloseDoor()
{
	
	//create a rotator

	Owner->SetActorRotation(FRotator(0.0f, 0.0f, 0.0f)); //my doors are lefthanded doors 
}
1/21/18**/

// Called every frame
void UDoorRotation::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	//poll the trigger volume
	//if the actor that opens is in the volume
	if (GetMassOnPlate() > TotalMassAllowedToOpen) {
		//OpenDoor();
		OnOpen.Broadcast(); //built for blueprint instead of c++ coding
        //open time for the door
		//DoorLastOpened=GetWorld()->GetTimeSeconds(); 
	}
	//check close time
	//if (GetWorld()->GetTimeSeconds() - DoorLastOpened > DoorCloseDelay) 1/21/18
	else
	{
		OnClose.Broadcast();
		//CloseDoor();
	}
}

float UDoorRotation::GetMassOnPlate()
{
	float TotalMass = 0.0f;
	//find overlapping actors 
	TArray<AActor*> OverlappingActors;
	if (!PressurePoint) { return TotalMass;} //pointer replacing
	PressurePoint->GetOverlappingActors(OUT OverlappingActors);
	//Interate through them and add their mass
	for (auto* Actor : OverlappingActors)
	{
		TotalMass+= Actor->FindComponentByClass<UPrimitiveComponent>()->GetMass();
	}
	return TotalMass;
}