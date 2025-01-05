#include "DebugMenuData.h"

UDebugMenuData::UDebugMenuData() {
    this->m_Pages.AddDefaulted(1);
    this->m_DebugFlag = 1;
    this->m_IsOpen = false;
    this->m_IsAddItemEndDelete = false;
    this->m_IsAddItemEndBtlDelete = false;
}


