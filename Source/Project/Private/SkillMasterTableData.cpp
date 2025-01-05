#include "SkillMasterTableData.h"

FSkillMasterTableData::FSkillMasterTableData() {
    this->m_Id = 0;
    this->m_Cond = E_SKILL_MASTER_COND::E_SKILL_MASTER_COND_NONE;
    this->m_Tgt = E_SKILL_MASTER_TARGET::E_SKILL_MASTER_TARGET_ACTOR;
    this->m_Eft = E_SKILL_MASTER_EFT::E_SKILL_MASTER_EFT_CRI_ADD;
    this->m_Value = 0;
    this->m_HitEffect = 0;
}

