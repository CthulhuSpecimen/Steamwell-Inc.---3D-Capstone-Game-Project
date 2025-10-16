// Fill out your copyright notice in the Description page of Project Settings.


#include "SV_ScenePushable.h"
#include "Components/BoxComponent.h" 

// Sets default values
ASV_ScenePushable::ASV_ScenePushable()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// Create a box collider component for the pushable object
	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BoxCollider"));
	Mesh->SetSimulatePhysics(true);
	Mesh->SetCollisionProfileName(TEXT("PhysicsActor"));
	Mesh->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	Mesh->SetCollisionResponseToAllChannels(ECR_Block);
	Mesh->OnComponentHit.AddDynamic(this, &ASV_ScenePushable::OnHit); // Add Hit event

	// Mesh for visual representation
	//ody = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshBody"));
	SetRootComponent(Mesh);
	//Body->SetupAttachment(Mesh);
	

}

// Called when the game starts or when spawned
void ASV_ScenePushable::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void ASV_ScenePushable::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	TArray<AActor*> OverlappingActors;
	/*/Mesh->GetOverlappingActors(OverlappingActors, ASV_ScenePushable::StaticClass());

	// If we find another pushable object, stop movement
	if (OverlappingActors.Num() > 0)
	{
		// Stop the object's movement by setting velocity to zero
		Mesh->BodyInstance.bLockXTranslation = true;
		Mesh->BodyInstance.bLockYTranslation = true;
		Mesh->BodyInstance.bLockZTranslation = true;

		Mesh->BodyInstance.bLockXRotation = true;
		Mesh->BodyInstance.bLockYRotation = true;
		Mesh->BodyInstance.bLockZRotation = true;

		//Mesh->BodyInstance.SetDOFLock(EDOFMode::SixDOF);
		Mesh->SetPhysicsLinearVelocity(FVector::ZeroVector);
		GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Green, TEXT("Some debug message!"));
	}
	else {
		Mesh->BodyInstance.bLockXTranslation = false;
		Mesh->BodyInstance.bLockYTranslation = false;
		
	}*/

}

void ASV_ScenePushable::ApplyForce(FVector Force)
{
	if (Mesh)
	{
		Mesh->AddForce(Force, NAME_None, true); // Apply force to the mesh
	}
}
void ASV_ScenePushable::OnHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
	/*if (OtherActor && Cast<ASV_ScenePushable>(OtherActor))
	{
		// Prevent movement in the direction of the collision
		FVector HitNormal = Hit.Normal;

		// This will stop the movement by setting velocity to zero in the direction of the collision
		FVector CurrentVelocity = Mesh->GetPhysicsLinearVelocity();
		FVector NewVelocity = FVector::ZeroVector;

		// Block movement in the direction of the hit by setting velocity to zero in that axis
		if (FVector::DotProduct(CurrentVelocity, HitNormal) > 0.0f)
		{
			// Stop the movement in the direction of the hit
			NewVelocity = FVector::ZeroVector;
		}

		// Apply the new velocity (which will effectively stop the movement in the direction of the collision)
		Mesh->SetPhysicsLinearVelocity(NewVelocity);

		// Optional: Add a visual debug message for testing
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Pushable hit a brick wall!"));
	}*/
}