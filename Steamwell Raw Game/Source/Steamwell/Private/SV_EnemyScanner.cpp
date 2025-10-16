// Fill out your copyright notice in the Description page of Project Settings.


#include "SV_EnemyScanner.h"
#include "Player/SV_PlayerCharacter.h"
#include "Kismet/GameplayStatics.h"
#include "Engine/World.h"



// Sets default values
ASV_EnemyScanner::ASV_EnemyScanner()
{

	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	
	SetRootComponent(Mesh);
	Mesh->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	Mesh->SetCollisionObjectType(ECC_WorldDynamic);
	Mesh->SetCollisionResponseToAllChannels(ECR_Overlap);
	Mesh->SetGenerateOverlapEvents(true);



	// Bind Overlap event
	Mesh->OnComponentBeginOverlap.AddDynamic(this, &ASV_EnemyScanner::OnOverlapBegin);


}

// Called when the game starts or when spawned
void ASV_EnemyScanner::BeginPlay()
{
	Super::BeginPlay();
	if (Mesh)
	{
		Mesh->SetGenerateOverlapEvents(true);
		Mesh->OnComponentBeginOverlap.AddDynamic(this, &ASV_EnemyScanner::OnOverlapBegin);
	}
}

// Called every frame
void ASV_EnemyScanner::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ASV_EnemyScanner::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (OtherActor && OtherActor != this)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, TEXT("someone has been shot"));
	
		ASV_PlayerCharacter* Player = Cast<ASV_PlayerCharacter>(OtherActor);
		if (Player) {
			GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, TEXT("player has been shot"));
			UWorld* World = GetWorld();
			if (World)
			{
				FString LevelName = "Level_1";
				UGameplayStatics::OpenLevel(World, FName(*LevelName), false);
			}
		}
	}
}

