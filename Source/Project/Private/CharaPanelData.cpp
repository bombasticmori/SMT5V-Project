#include "CharaPanelData.h"

FCharaPanelData::FCharaPanelData() {
    this->m_Level = 0;
    this->m_HP = 0;
    this->m_HPMax = 0;
    this->m_MP = 0;
    this->m_MPMax = 0;
    this->m_BadStatus = 0;
    this->m_ParamPoint = 0;
    this->m_DevilID = 0;
    this->m_NkmIndex = 0;
    this->m_IsPlayer = false;
    this->m_PlayerType = E_PLAYER_TYPE::E_PLAYER_BOY;
    this->m_IsParty = false;
    this->m_IsEmpty = false;
    this->m_IsSummon = false;
    this->m_IsStray = false;
    this->m_IsTarget = false;
    this->m_IsUse = false;
    this->m_IsNoSel = false;
    this->m_CureHp = 0;
    this->m_CureMp = 0;
    this->m_CostMp = 0;
}

