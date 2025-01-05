#include "SkillOverwriteInfo.h"

FSkillOverwriteInfo::FSkillOverwriteInfo() {
    this->m_OverwriteCondition = E_OVERWRITE_CONDITION::E_OVERWRITE_CONDITION_NONE;
    this->m_OverwriteSubCondition = 0;
    this->m_OverwriteFormula = E_OVERWRITE_FORMULA::E_OVERWRITE_FORMULA_NONE;
    this->m_OverwriteValue = 0;
}

