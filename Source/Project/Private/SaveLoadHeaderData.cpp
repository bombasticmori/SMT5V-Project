#include "SaveLoadHeaderData.h"

FSaveLoadHeaderData::FSaveLoadHeaderData() {
    this->m_State = 0;
    this->m_SlotIndex = 0;
    this->m_Version = 0;
    this->m_SaveType = 0;
    this->m_DebugRandValue = 0;
    this->m_Difficulty = 0;
    this->m_TotalPlayTimeSec = 0;
    this->m_LastRyuketsuTableIndex = 0;
    this->m_ClearRound = 0;
    this->m_ClearAlignment = 0;
    this->m_LoacationMessageId = 0;
    this->m_CanInherit = false;
    this->m_LanguageType = 0;
    this->m_PlayNewOldRoute = 0;
    this->m_EnablePlayGoLoad = false;
    this->m_IsTrialSave = false;
}

