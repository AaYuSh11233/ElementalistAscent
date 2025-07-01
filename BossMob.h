#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "ElementalTypes.h"
#include "BossMob.generated.h"

UCLASS()
class ELEMENTALASCENT_API ABossMob : public ACharacter
{
    GENERATED_BODY()

public:
    ABossMob();

    virtual void Tick(float DeltaTime) override;
    virtual void BeginPlay() override;
    void ReceiveHit(float Damage);
    void TriggerBossIntro();
    void CastElementalAbility();

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FString BossName;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    int32 RequiredLevel;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float MaxHealth;

    UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
    float CurrentHealth;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    EElementalPower RewardPower;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    class APlayerHero* TargetPlayer;

    bool bIsDefeated;
};