#include "UniqueSymbolData.h"

FUniqueSymbolData::FUniqueSymbolData() {
    this->m_UniqueSymbolID = 0;
    this->m_EncountID = 0;
    this->m_EventEncountID = 0;
    this->m_SymbolId = 0;
    this->m_RebornRate = 0;
    this->m_LockAfterBattle = false;
    this->m_UniqueIcon = false;
    this->m_IsPrioGaze = false;
    this->m_PrioGazeDistance = 0;
    this->m_StartFlag = 0;
    this->m_EndFlag = 0;
    this->m_ChainEncountRate = 0;
    this->m_ChainEncount_NotEntry = false;
    this->m_NoChainEncount = false;
}

