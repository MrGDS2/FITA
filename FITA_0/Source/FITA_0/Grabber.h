// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Engine.h"
#include "Components/ActorComponent.h"
#include "DrawDebugHelpers.h"
#include "PhysicsEngine/PhysicsHandleComponent.h" 
#include "Components/InputComponent.h"
#include "Grabber.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FGrabEvent);

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class FITA_0_API UGrabber : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UGrabber();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

	

	

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

private:
	float Reach = 100.0f;

	UPhysicsHandleComponent* PH=nullptr;
	UInputComponent* IC=nullptr;

	void Grab();

	void Release();
	//Find physics handler on component
	void FindPhysicsHandlerComponent();

	//Set up Input component on actor
	void SetInputComponent();

	UPROPERTY(BlueprintAssignable)
		FGrabEvent OnGrab;

	UPROPERTY(BlueprintAssignable)
		FGrabEvent OnDrop;

	const FHitResult GetFirstPhysicBodyReach();
	
	//return reach line start
	FVector GetLineReachStart();

	//returns ending reach line
	FVector GetLineReachEnd();
};


