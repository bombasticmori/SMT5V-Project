#include "MinimapPOIEntry.h"

FMinimapPOIEntry::FMinimapPOIEntry() {
    this->m_IsExist = false;
    this->m_IsMasked = false;
    this->m_ControlledByActor = false;
    this->m_Show3D = false;
    this->m_Visibility = E_MINIMAP_VISIBILITY::INVISIBLE;
    this->m_RenderAngle = 0.00f;
    this->m_IconToRender = E_MINIMAP_POI_ICON::E_MINIMAP_POI_ICON_NONE;
    this->m_IsHiddenByUI = false;
    this->m_IsHiddenByRyuketsu = false;
}

