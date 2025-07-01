#include "BossMob.h"
#include "Kismet/GameplayStatics.h"
#include "PlayerHero.h"

ABossMob::ABossMob()
{
    PrimaryActorTick.bCanEverTick = true;
    MaxHealth = 300.0f;
    CurrentHealth = MaxHealth;
    bIsDefeated = false;
}

void ABossMob::BeginPlay()
{
    Super::BeginPlay();
    TargetPlayer = Cast<APlayerHero>(UGameplayStatics::GetPlayerCharacter(GetWorld(), 0));
}

void ABossMob::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
    if (TargetPlayer && !bIsDefeated)
    {
        float Distance = FVector::Dist(GetActorLocation(), TargetPlayer->GetActorLocation());
        if (Distance < 800.0f)
            TriggerBossIntro();
    }
}

void ABossMob::ReceiveHit(float Damage)
{
    if (bIsDefeated) return;

    CurrentHealth -= Damage;
    if (CurrentHealth <= 0)
    {
        bIsDefeated = true;
        if (TargetPlayer)
        {
            TargetPlayer->GainXP(300);
            TargetPlayer->ElementalPowers->UnlockPower(RewardPower);
        }
    }
}

void ABossMob::TriggerBossIntro() {}
void ABossMob::CastElementalAbility() {}