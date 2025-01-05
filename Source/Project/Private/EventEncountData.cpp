#include "EventEncountData.h"

FEventEncountData::FEventEncountData() {
    this->m_EncountID = 0;
    this->m_RenzokuEncountID = 0;
    this->m_EndEnemyHPRate = 0;
    this->m_EventType = E_EVT_ENCOUNT_TYPE::E_EVT_ENCOUNT_DEFAULT;
    this->m_BattleFieldID = 0;
    this->NoDeadEffect = 0;
    this->NoDestroyMdl = 0;
    this->m_EnemyHPRate = 0;
    this->m_SkipResult = 0;
    this->InvalidEscape = 0;
    this->m_EnemyNotAutoUplifting = 0;
    this->m_BgmID = 0;
    this->m_OverrideBgmID = 0;
    this->m_PreAttack = 0;
    this->m_Pat = 0;
    this->m_SymbolId = 0;
    this->m_CheckEndLeaderDead = 0;
    this->m_AfterEventID = 0;
    this->m_GardenPointType = 0;
    this->m_IsBossRush = 0;
    this->m_BossRushExpRate = 0;
    this->m_BossRushMakkaRate = 0;
}

