#include "BtlCommand.h"

FBtlCommand::FBtlCommand() {
    this->m_Command = E_BTL_COMM_TYPE::E_BTL_COMM_NONE;
    this->m_Index = E_BTL_WEAPON_TYPE::E_BTL_WEAPON_NON;
    this->m_TargetArea = E_BTL_AREA_TYPE::E_BTL_AREA_ONE;
    this->m_TargetForm = 0;
    this->m_SkillId = 0;
    this->m_Turn = 0;
}

