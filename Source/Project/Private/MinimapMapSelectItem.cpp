#include "MinimapMapSelectItem.h"

FMinimapMapSelectItem::FMinimapMapSelectItem() {
    this->m_ItemType = E_MAP_SELECT_ITEM_TYPE::None;
    this->m_MapID = 0;
    this->m_AreaId = 0;
    this->m_ParentIndex = 0;
    this->m_ReachFlag = 0;
    this->m_OffFlag = 0;
    this->m_SortOrder = 0;
}

