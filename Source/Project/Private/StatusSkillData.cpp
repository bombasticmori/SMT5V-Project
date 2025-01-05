#include "StatusSkillData.h"

FStatusSkillData::FStatusSkillData() {
    this->m_LearnType = E_LEARN_SKILL_TYPE::E_LEARN_SKILL_DEFAULT;
    this->m_SkillId = 0;
    this->m_SkillCount = 0;
    this->m_BulidSkillCount = 0;
    this->m_IsAuto = false;
}

