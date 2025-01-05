#include "ProjectSubLevelStatus.h"

FProjectSubLevelStatus::FProjectSubLevelStatus() {
    this->StreamingStatus = PROJECT_LEVEL_Invalid;
    this->LODIndex = 0;
    this->bPlayerInside = false;
    this->bShouldBeVisible = false;
    this->bLightScenario = false;
    this->bLightVolumeAdded = false;
    this->bVolumetricLightmapDataExist = false;
    this->bVolumetricLightmapAdded = false;
}

