// Fill out your copyright notice in the Description page of Project Settings.


#include "SV_EnemyManager.h"
#include "AI/NPC.h"
#include "Player/SV_PlayerCharacter.h"

// Sets default values
ASV_EnemyManager::ASV_EnemyManager()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	Mesh = CreateDefaultSubobject<UBoxComponent>(TEXT("Mesh"));
	Mesh->OnComponentBeginOverlap.AddDynamic(this, &ASV_EnemyManager::OnOverlapBegin);
}

// Called when the game starts or when spawned
void ASV_EnemyManager::BeginPlay()
{
	Super::BeginPlay();
	
}
void ASV_EnemyManager::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (OtherActor && OtherActor != this)
	{

		//GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, TEXT("OVERLAP"));
		ASV_PlayerCharacter* Player = Cast<ASV_PlayerCharacter>(OtherActor);
		if (Player) {
			GetWorldTimerManager().SetTimer(EnemyRelease, this, &ASV_EnemyManager::TimerFunction, EnemySpawnTimer, true);
			}
		}


}

void ASV_EnemyManager::TimerFunction()
{
	if (EnemyIter < Enemies.Num()){
	Enemies[EnemyIter]->ActivateEnemyFunc();
	EnemyIter += 1;
	}
}

// Called every frame
void ASV_EnemyManager::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

