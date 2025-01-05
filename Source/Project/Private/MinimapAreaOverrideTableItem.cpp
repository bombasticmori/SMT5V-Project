#include "MinimapAreaOverrideTableItem.h"

FMinimapAreaOverrideTableItem::FMinimapAreaOverrideTableItem() {
    this->m_StartFlag = 0;
    this->m_EndFlag = 0;
    this->m_MapID = 0;
    this->m_AreaId = 0;
    this->m_OverrideTarget = E_MINIMAP_AREA_TABLE_OVERRIDE_TARGET::NONE;
    this->m_OverrideValue = 0;
}

