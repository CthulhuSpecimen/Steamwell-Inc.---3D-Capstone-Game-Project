#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PatrolPath.generated.h"

UCLASS()
class STEAMWELL_API APatrolPath : public AActor
{
    GENERATED_BODY()

public:
    APatrolPath();

    FVector GetPatrolPoint(int const index) const;
    int Num() const;

protected:
    virtual void BeginPlay() override;

public:
    UPROPERTY(EditInstanceOnly, BlueprintReadOnly, Category = "AI", meta = (MakeEditWidget = "true"))
        TArray<FVector> PatrolPoints;
};
