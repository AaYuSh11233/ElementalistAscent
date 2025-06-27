#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SwordComponent.generated.h"

UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class ELEMENTALASCENT_API USwordComponent : public UActorComponent
{
    GENERATED_BODY()

public:
    USwordComponent();

    void Swing();
};