#include "BtlActionStack.h"

FBtlActionStack::FBtlActionStack() {
    this->m_ActionType = E_BTL_ACT_TYPE::E_BTL_ACT_TYPE_NORMAL;
    this->m_From = 0;
    this->m_To = 0;
    this->m_Data = 0;
    this->m_AutoDestroy = false;
}

