#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ElementalTypes.h"
#include "GameQuestManager.generated.h"

USTRUCT(BlueprintType)
struct FBossStatus
{
    GENERATED_BODY()

    UPROPERTY()
    FString Name;

    UPROPERTY()
    bool bDefeated;

    UPROPERTY()
    EElementalPower Power;
};

UCLASS()
class ELEMENTALASCENT_API AGameQuestManager : public AActor
{
    GENERATED_BODY()

public:
    AGameQuestManager();

    UPROPERTY()
    TArray<FBossStatus> Bosses;

    void RegisterBoss(FString Name, EElementalPower Power);
    void MarkBossDefeated(FString Name);
    bool IsBossDefeated(FString Name) const;
};