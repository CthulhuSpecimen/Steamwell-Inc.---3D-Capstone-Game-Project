// Fill out your copyright notice in the Description page of Project Settings.


#include "SV_InstantPushable.h"

// Sets default values
ASV_InstantPushable::ASV_InstantPushable()
{
	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	SetRootComponent(Mesh);

	Mesh->SetSimulatePhysics(true);
	Mesh->SetEnableGravity(true);
	Mesh->SetCollisionProfileName(TEXT("PhysicsActor"));
	Mesh->SetNotifyRigidBodyCollision(true);
	Mesh->BodyInstance.bUseCCD = true;

	Mesh->OnComponentHit.AddDynamic(this, &ASV_InstantPushable::OnHit);
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;


}

// Called when the game starts or when spawned
void ASV_InstantPushable::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ASV_InstantPushable::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	/*if (this->GetVelocity() == FVector(0, 0, 0)) {
		isMoving = false;
	}
	FVector Start = GetActorLocation();
	FVector End = Start; // Just a point check

	FHitResult HitResult;
	FCollisionQueryParams QueryParams;
	QueryParams.AddIgnoredActor(this);

	if (GetWorld()->SweepSingleByChannel(HitResult, Start, End, FQuat::Identity,
		ECC_PhysicsBody, FCollisionShape::MakeSphere(75.0f), QueryParams))
	{
		//GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Blue, TEXT("Collision Found in Tick!"));

		// Stop movement
		Mesh->SetPhysicsLinearVelocity(FVector::ZeroVector);
		Mesh->SetPhysicsAngularVelocityInDegrees(FVector::ZeroVector);
	}*/
	Super::Tick(DeltaTime);

}
void ASV_InstantPushable::OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor,
	UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
	GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::White, TEXT("COLLISION"));
	// Check if the object hit is of a certain type
	if (OtherActor && OtherActor->IsA(ASV_InstantPushable::StaticClass()))
	{
		// Stop movement by setting velocity to zero
		if (!isMoving) {
			Mesh->SetPhysicsLinearVelocity(FVector::ZeroVector);
			Mesh->SetPhysicsAngularVelocityInDegrees(FVector::ZeroVector);
		}
	}
}


