#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "AnimalActor.generated.h"

UCLASS()
class ELEMENTALASCENT_API AAnimalActor : public ACharacter
{
    GENERATED_BODY()

public:
    AAnimalActor();

    void ReceiveHit(float Damage);
    float MaxHealth;
    float CurrentHealth;
};