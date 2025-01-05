#include "SkillActionDesc.h"

FSkillActionDesc::FSkillActionDesc() {
    this->m_ActorIndex = 0;
    this->m_SkillId = 0;
    this->m_ItemID = 0;
    this->m_Type = E_SKILL_TYPE::E_SKILL_TYPE_PHYSICAL_ATK;
    this->m_ExtraAction = E_BTL_EXTRA_ACTION::E_BTL_EXTACT_NONE;
    this->m_CounterOccured = false;
    this->m_AddMagGauge = 0;
    this->m_AddReichi = 0;
    this->m_ActorBst = 0;
}

