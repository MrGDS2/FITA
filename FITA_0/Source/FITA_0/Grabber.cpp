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

	FindPhysicsHandlerComponent();

	SetInputComponent();
}

void UGrabber::SetInputComponent()
{
	//look for attached Input component
	IC = GetOwner()->FindComponentByClass<UInputComponent>();
	//hits the actor => then looks for a component of type PHandler

	if (IC)
	{
		UE_LOG(LogTemp, Warning, TEXT("Input component found "))
			//IC is found bind key
			IC->BindAction("Grab", IE_Pressed,this, &UGrabber::Grab);
			IC->BindAction("Grab", IE_Released, this, &UGrabber::Release);
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("%s has no Input component on it"), *GetOwner()->GetName())
	}
}

const FHitResult UGrabber::GetFirstPhysicBodyReach()
{


	
	//Set a query parameters
	FCollisionQueryParams TraceParams(FName(TEXT(" ")), false, GetOwner());
	///Raycasting
	FHitResult Hit;
	//see what we hit
	GetWorld()->LineTraceSingleByObjectType(

		OUT Hit,
		GetLineReachStart(),
		GetLineReachEnd(),
		FCollisionObjectQueryParams(ECollisionChannel::ECC_PhysicsBody), //looking for physics body
		TraceParams
	);
	//get actor hit
	AActor* ActorHit = Hit.GetActor();
	if (ActorHit)
	{
		UE_LOG(LogTemp, Warning, TEXT("Your looking at the: %s "), *ActorHit->GetName())
	}
	return Hit;
}

void UGrabber::FindPhysicsHandlerComponent()
{
	//look for attached Physics handle
	PH = GetOwner()->FindComponentByClass<UPhysicsHandleComponent>();
	//hits the actor => then looks for a component of type PHandler

	if (PH == nullptr)
	{
		UE_LOG(LogTemp, Error, TEXT("%s has no Physics component on it"), *GetOwner()->GetName())
	}
}

void UGrabber::Grab()
{


		//Trace line and see if we reach any actors with a physics body collision channel set
		GetFirstPhysicBodyReach();

	//if we hit something then attach a physics handle
	auto HitResult = GetFirstPhysicBodyReach();
	auto ComponentToGrab = HitResult.GetComponent();
	auto ActorHit = HitResult.GetActor();
	//Check to see if an actor was hit
	if (ActorHit) {
		PH->GrabComponent(
			ComponentToGrab,
			NAME_None,
			ComponentToGrab->GetOwner()->GetActorLocation(),
			true);
	}

}
void UGrabber::Release()
{
		PH->ReleaseComponent();
}

/// Called every frame
void UGrabber::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	

	//if PH is attached move object
	if (PH->GrabbedComponent)
	{
		PH->SetTargetLocation(GetLineReachEnd());
	}
}

FVector UGrabber::GetLineReachStart()
{
	//Get player view point this tick
	FVector PlayerViewLocation;
	FRotator PlayerViewPointRotation;
	GetWorld()->GetFirstPlayerController()->GetPlayerViewPoint(
		OUT PlayerViewLocation,
		OUT PlayerViewPointRotation
	);

	FVector LineStart = PlayerViewLocation;
	return LineStart;
}

FVector UGrabber::GetLineReachEnd()
{

	//Get player view point this tick
	FVector PlayerViewLocation;
	FRotator PlayerViewPointRotation;
	GetWorld()->GetFirstPlayerController()->GetPlayerViewPoint(
		OUT PlayerViewLocation,
		OUT PlayerViewPointRotation
	);

	FVector LineEnd = PlayerViewLocation + PlayerViewPointRotation.Vector() * Reach;
	return LineEnd;

}

