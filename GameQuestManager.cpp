#include "GameQuestManager.h"

AGameQuestManager::AGameQuestManager()
{
    PrimaryActorTick.bCanEverTick = false;
}

void AGameQuestManager::RegisterBoss(FString Name, EElementalPower Power)
{
    FBossStatus NewBoss;
    NewBoss.Name = Name;
    NewBoss.Power = Power;
    NewBoss.bDefeated = false;
    Bosses.Add(NewBoss);
}

void AGameQuestManager::MarkBossDefeated(FString Name)
{
    for (auto& Boss : Bosses)
    {
        if (Boss.Name == Name)
        {
            Boss.bDefeated = true;
            break;
        }
    }
}

bool AGameQuestManager::IsBossDefeated(FString Name) const
{
    for (const auto& Boss : Bosses)
    {
        if (Boss.Name == Name)
        {
            return Boss.bDefeated;
        }
    }
    return false;
}