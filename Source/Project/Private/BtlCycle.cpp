#include "BtlCycle.h"

FBtlCycle::FBtlCycle() {
    this->m_Flag = 0;
    this->m_Wait = 0;
    this->m_WaitDefault = 0;
    this->m_Count = 0;
    this->m_CycleType = E_BTL_CYCLE_TYPE::E_BTL_CYCLE_AID;
}

