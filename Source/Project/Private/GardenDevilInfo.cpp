#include "GardenDevilInfo.h"

FGardenDevilInfo::FGardenDevilInfo() {
    this->DevilID = 0;
    this->DevilScale = 0.00f;
    this->Size = E_GARDEN_SPAWN_SIZE::E_ALL;
    this->Animation = E_GARDEN_SPAWN_ANIMATION::E_STAND;
    this->Area = E_GARDEN_SPAWN_AREA::E_GROUND;
}

