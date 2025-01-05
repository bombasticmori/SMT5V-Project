#include "SkillActionTargetInfo.h"

FSkillActionTargetInfo::FSkillActionTargetInfo() {
    this->m_TargetIndex = 0;
    this->m_FromIndex = 0;
    this->m_CriticalLevel = 0;
    this->m_Bst = 0;
    this->m_RecBst = 0;
    this->m_Aid = E_BTL_SKILL_ACTION_AID::E_BTL_SKILL_ACTION_AID_NONE;
    this->m_DeadEffect = E_BTL_DEAD_EFFECT::E_BTL_DEAD_EFFECT_NORMAL;
    this->m_IsDead = false;
    this->m_IsCounter = false;
    this->m_IsNahobinoBreak = false;
    this->m_IsResist = false;
    this->m_IsGuard = false;
    this->m_IsCombo = false;
    this->m_IsWeak = false;
    this->m_IsTetraja = false;
    this->m_IsIgnoreTargetEffect = false;
    this->m_Kuishibari = E_KUISHIBARI_LEVEL::E_KUISHIBARI_LEVEL_NONE;
    this->m_KuishibariSpendPartyIndex = 0;
}

