#include "ElementalGameMode.h"
#include "ElementalHUD.h"

AElementalGameMode::AElementalGameMode()
{
    HUDClass = AElementalHUD::StaticClass();
}