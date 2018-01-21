// Fill out your copyright notice in the Description page of Project Settings.

#pragma once


#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Engine/TriggerVolume.h"
#include "DoorRotation.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnOpenRequest);

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class FITA_0_API UDoorRotation : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UDoorRotation();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

	void OpenDoor();
	void CloseDoor();
public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	

 private:
	UPROPERTY(EditAnywhere)
		float OpenAngle;

	UPROPERTY(EditAnywhere)
		ATriggerVolume* PressurePoint=nullptr;

	UPROPERTY(EditAnywhere)
		float DoorCloseDelay = 1.0f;

	UPROPERTY(EditAnywhere)
		float TotalMassAllowedToOpen;

	UPROPERTY(BlueprintAssignable)
		FOnOpenRequest OnOpenRequest;

		float GetMassOnPlate(); 
	//gets mass for plate

	   float DoorLastOpened;
		AActor* OpensDoorActor; //pawn is inherted from actor
	//the owning door
		AActor* Owner=nullptr; 
		
};
