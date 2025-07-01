#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "HerbActor.generated.h"

UCLASS()
class ELEMENTALASCENT_API AHerbActor : public AActor
{
    GENERATED_BODY()

public:
    AHerbActor();

protected:
    virtual void BeginPlay() override;

public:
    virtual void NotifyActorBeginOverlap(AActor* OtherActor) override;
};