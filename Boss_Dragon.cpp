#include "Boss_Dragon.h"

ABoss_Dragon::ABoss_Dragon()
{
    BossName = "Dragon";
    RequiredLevel = 5;
    MaxHealth = 500.0f;
    RewardPower = EElementalPower::Wind;
}