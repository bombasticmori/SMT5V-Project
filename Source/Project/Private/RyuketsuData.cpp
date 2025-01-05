#include "RyuketsuData.h"

FRyuketsuData::FRyuketsuData() {
    this->m_MapID = 0;
    this->m_AreaId = 0;
    this->m_Index = 0;
    this->m_WarpID = 0;
    this->m_SortId = 0;
    this->m_HideLabelL = false;
    this->m_OnFlag = 0;
    this->m_AutoOpenFlag = 0;
    this->m_AutoCloseFlag = 0;
    this->m_GardenLevelType = E_RYUKETSU_GARDEN_TYPE::E_NONE;
    this->m_ExpectedDevilLevel = 0;
}

