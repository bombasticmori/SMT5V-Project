#include "MapData.h"

FMapData::FMapData() {
    this->m_Type = 0;
    this->m_MapID = 0;
    this->m_AreaId = 0;
    this->m_AutoMapID = 0;
    this->m_LastRyuketsuTableIndex = 0;
    this->m_AccessingRyuketsuSave = false;
    this->m_CurrentNaviDevilEnum = E_NAVI_DEVIL::E_NAVI_DEVIL_NONE;
    this->m_NaviDevilGimmickCheckCounter = 0;
    this->m_RelicUniqueSkillNum = 0;
    this->m_RelicUniqueSkillCalcCounter = 0.00f;
    this->m_OneRelicUniqueSkillRate = 0.00f;
    this->m_RelicGetCounter = 0;
    this->m_RelicSaveIDStart_CurrentMap = 0;
    this->m_RelicSaveIDEnd_CurrentMap = 0;
    this->m_AogamiDebrisGetCounter = 0;
    this->m_IsCustomMap = false;
    this->m_NearbySymbolCounter = 0.00f;
    this->m_NearbySymbolAfterBattle = false;
    this->m_RyuketsuMinimapIconHideFlag = false;
    this->m_TimeAttackMapId = 0;
    this->m_GardenTributeCounter = 0;
    this->m_GardenTrustCounter = 0;
    this->m_TopCameraHeight = 0.00f;
}

