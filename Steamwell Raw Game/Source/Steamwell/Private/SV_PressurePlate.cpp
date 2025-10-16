// Fill out your copyright notice in the Description page of Project Settings.


#include "SV_PressurePlate.h"
#include "SV_PushableObject.h"

// Sets default values
ASV_PressurePlate::ASV_PressurePlate()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	Bounds = CreateDefaultSubobject<UBoxComponent>(TEXT("Bounds"));

	// Set the root component
	SetRootComponent(Mesh);

	// Attach Bounds to Mesh
	Bounds->SetupAttachment(Mesh);

	// Ensure Bounds generates overlap events
	/*Bounds->SetGenerateOverlapEvents(true);
	Bounds->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
	Bounds->SetCollisionObjectType(ECC_WorldDynamic);
	Bounds->SetCollisionResponseToAllChannels(ECR_Overlap);*/

	// Bind Overlap event
	Mesh->OnComponentBeginOverlap.AddDynamic(this, &ASV_PressurePlate::OnOverlapBegin);
}

// Called when the game starts or when spawned
void ASV_PressurePlate::BeginPlay()
{
	Super::BeginPlay();

}

void ASV_PressurePlate::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (OtherActor && OtherActor != this)
	{
	
			//GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, TEXT("OVERLAP"));
			ASV_PushableObject* PushedObject = Cast<ASV_PushableObject>(OtherActor);
			if (PushedObject) {
				//GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Orange, TEXT("OVERLAP IS A PUSHABLE"));
				int PushedPressureID = PushedObject->PressureID;
				if (PressureID == PushedPressureID) {
					//GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Yellow, TEXT("OVERLAP IS CORRECT PUSHABLE"));
					PushedObject->isPlaced = true;
					BlockPlaced(PushedObject);
					
					if (!isPlaced) {
						Manager->ActivatePlate(PressureID);
						isPlaced = true;
					}
					
				}
			}
		

	}
}

// Called every frame
void ASV_PressurePlate::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

