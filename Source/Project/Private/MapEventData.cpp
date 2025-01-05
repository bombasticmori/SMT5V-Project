#include "MapEventData.h"

FMapEventData::FMapEventData() {
    this->m_MapEventID = 0;
    this->m_EndFlagValue = 0;
    this->m_AfterFlagValue = 0;
    this->m_MapID = 0;
    this->m_AreaId = 0;
    this->m_Type = 0;
    this->m_OldNewRoute = E_OldNewRoute::E_CommonRoute;
    this->m_HitManaged = 0;
    this->m_IconManaged = 0;
    this->m_ManualBattleEnd = 0;
    this->m_ManualEventEnd = 0;
    this->m_SimpleEvent = 0;
    this->m_BeforOtherMap = 0;
    this->m_BeforOtherArea = 0;
    this->m_BeforOtherPoint = 0;
    this->m_IsAfterBattle = 0;
    this->m_AfterBattleID = 0;
    this->m_StartFlagValue_Evt1 = 0;
    this->m_EndFlagValue_Evt1 = 0;
    this->m_IsAfterOtherMap = 0;
    this->m_IsAfterOtherArea = 0;
    this->m_IsAfterOtherPoint = 0;
    this->m_AfterEventID = 0;
    this->m_StartFlagValue_Evt2 = 0;
    this->m_EndFlagValue_Evt2 = 0;
    this->m_IsAfterOtherMap_2 = 0;
    this->m_IsAfterOtherArea_2 = 0;
    this->m_IsAfterOtherPoint_2 = 0;
    this->m_AfterEventID_2 = 0;
}

