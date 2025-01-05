#include "MinimapRadarEntry.h"

FMinimapRadarEntry::FMinimapRadarEntry() {
    this->m_MapID = 0;
    this->m_AreaId = 0;
    this->m_TargetSaveUniqueId = 0;
    this->m_Visibility = E_MINIMAP_VISIBILITY::INVISIBLE;
}

