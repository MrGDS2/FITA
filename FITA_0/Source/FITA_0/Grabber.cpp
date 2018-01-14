// Fill out your copyright notice in the Description page of Project Settings.

#include "Grabber.h"

#define OUT

// Sets default values for this component's properties
UGrabber::UGrabber()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


///Called when the game starts
void UGrabber::BeginPlay()
{
	Super::BeginPlay();

	// ...
	UE_LOG(LogTemp, Warning, TEXT("Grabber has spawned"));
	

	//look for attached Physics handle
	PH=GetOwner()->FindComponentByClass<UPhysicsHandleComponent>();
	//hits the actor => then looks for a component of type PHandler

	if (PH)
	{
		//PH is found
	}
	else
	{UE_LOG(LogTemp, Error, TEXT("%s has no Physics component on it"), *GetOwner()->GetName());}

	//look for attached Input component
   IC=GetOwner()->FindComponentByClass<UInputComponent>();
	//hits the actor => then looks for a component of type PHandler

	if (IC)
	{
		//IC is found bind key
	IC->BindAction("Grab", IE_Pressed,this, &UGrabber::Grab);

	UE_LOG(LogTemp, Warning, TEXT("%s Input component found "), *GetOwner()->GetName());
	}
	else
	{UE_LOG(LogTemp, Error, TEXT("%s has no Input component on it"), *GetOwner()->GetName());}



}

void UGrabber::Grab()
{

	UE_LOG(LogTemp, Error, TEXT("Grab"));
}

/// Called every frame
void UGrabber::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	//Get player view point this tick
	FVector PlayerViewLocation;
	FRotator PlayerViewPointRotation;
	GetWorld()->GetFirstPlayerController()->GetPlayerViewPoint(
		OUT PlayerViewLocation, 
		OUT PlayerViewPointRotation
	);

	//log player viewpoint everytick
	/*UE_LOG(LogTemp, Warning, TEXT("Player Location: %s, Player Position: %s"),
		*PlayerViewLocation.ToString(),
		*PlayerViewPointRotation.ToString());*/


	FVector LineEnd = PlayerViewLocation + PlayerViewPointRotation.Vector() * Reach;	
	
	
	///Draw  a red line in the world
	DrawDebugLine(
		GetWorld(),
		PlayerViewLocation,
		LineEnd,
		FColor(255, 0, 0),
		false,
		0.0f,
		0.0f,
		10.0f


	);


	//Set a query parameters
	FCollisionQueryParams TraceParams(FName(TEXT(" ")), false, GetOwner());


	///Raycasting
	FHitResult Hit;
	GetWorld()->LineTraceSingleByObjectType(

		OUT Hit,
		PlayerViewLocation,
		LineEnd,
		FCollisionObjectQueryParams(ECollisionChannel::ECC_PhysicsBody),
		TraceParams
	);

	AActor* ActorHit = Hit.GetActor();
	if (ActorHit)
	{
		UE_LOG(LogTemp, Warning, TEXT("Your looking at the: %s "), *ActorHit->GetName());
	}
	


}

