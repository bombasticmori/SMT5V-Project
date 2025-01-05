#include "BtlEncData.h"

FBtlEncData::FBtlEncData() {
    this->m_IsForceSurpriseAtk = false;
    this->m_IsForcePreemptiveAtk = false;
    this->m_IsNotEscape = false;
    this->m_IsNoDeadEffect = false;
    this->m_IsNoDestroyModel = false;
    this->m_IsSubMission = false;
    this->m_EnemyHPRate = 0;
    this->m_EndEnemyHPRate = 0;
    this->m_IsRoomBoss = false;
    this->m_EnemyNotAutoUplifting = false;
    this->m_IsSkipResult = false;
    this->m_EncID = 0;
    this->m_EvtEncID = 0;
    this->m_BGMNo = 0;
    this->m_EncType = E_BTL_ENCOUNT_TYPE::E_BTL_ENCOUNT_TYPE_DEFAULT;
    this->m_CheckEndLeaderDead = 0;
    this->m_IsBossRush = false;
}

