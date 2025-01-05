#include "BattleEventData.h"

FBattleEventData::FBattleEventData() {
    this->m_EventBattleID = 0;
    this->m_TableID = 0;
    this->m_EvtType = E_BTL_EVT_TYPE::E_BTL_EVT_TYPE_NONE;
    this->m_EndType = E_BTL_EVT_RESULT::E_BTL_EVT_RESULT_NONE;
    this->m_HookPoint = E_BTL_EVT_POINT::BATTLE_START;
    this->m_CallSubLevelID = 0;
    this->m_NextEventBattleID = 0;
}

