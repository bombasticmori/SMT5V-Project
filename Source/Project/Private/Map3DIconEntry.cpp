#include "Map3DIconEntry.h"

FMap3DIconEntry::FMap3DIconEntry() {
    this->m_IsExist = false;
    this->m_MyIndex = 0;
    this->m_ImageScale = 0.00f;
    this->m_Dist2 = 0.00f;
    this->m_RotateZ = 0.00f;
    this->m_IconToRender = E_MINIMAP_POI_ICON::E_MINIMAP_POI_ICON_NONE;
}

