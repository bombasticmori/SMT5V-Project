#include "CharData.h"

FCharData::FCharData() {
    this->m_GlobalFlag = 0;
    this->m_HP = 0;
    this->m_MP = 0;
    this->m_Exp = 0;
    this->m_BadStatus = 0;
    this->m_Level = 0;
    this->m_ParamPoint = 0;
    this->m_PlayerType = E_PLAYER_TYPE::E_PLAYER_BOY;
    this->m_SkillSlotNum = 0;
    this->m_AutoSkillSlotNum = 0;
    this->m_UniqueSkill = 0;
}

