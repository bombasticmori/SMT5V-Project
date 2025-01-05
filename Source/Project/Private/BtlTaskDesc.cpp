#include "BtlTaskDesc.h"

FBtlTaskDesc::FBtlTaskDesc() {
    this->m_Type = E_BTL_TASK_COM::E_BTL_TASK_COM_NONE;
    this->m_Flag = 0;
    this->m_LimitTime = 0;
    this->m_ActorPartyIndex = 0;
    this->m_TargetPartyIndex = 0;
}

