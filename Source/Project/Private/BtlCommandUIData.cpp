#include "BtlCommandUIData.h"

FBtlCommandUIData::FBtlCommandUIData() {
    this->m_CommId = E_BTL_UI_COMMAND::E_BTL_UI_COMM_NONE;
    this->m_IsUse = false;
    this->m_IsActionOnly = false;
    this->m_ActMappingType = E_ACTION_MAPPING_ACTION;
    this->m_InputType = E_INPUT_TYPE_HOLD;
}

