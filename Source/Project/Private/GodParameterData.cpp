#include "GodParameterData.h"

FGodParameterData::FGodParameterData() {
    this->m_Id = 0;
    this->m_SortId = 0;
    this->m_PremiseGodSkill = 0;
    this->m_Type = E_GODPARAMETER_TYPE::E_GODPARAMETER_TYPE_NONE;
    this->m_RequiredLevel = 0;
    this->m_PrimiseEventFlag = 0;
    this->m_RequiredPoint = 0;
    this->m_EnableSkillOFF = false;
    this->m_SkillId = 0;
    this->m_UserData = 0;
}

