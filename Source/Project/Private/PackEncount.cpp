#include "PackEncount.h"

FPackEncount::FPackEncount() {
    this->m_MapID = 0;
    this->m_Index = 0;
    this->m_SymbolId = 0;
    this->m_ChainEncountRate = 0;
    this->m_ChainEncount_NotEntry = false;
    this->m_NoChainEncount = false;
    this->m_AllSymbolKill = false;
    this->m_StartFlag = 0;
    this->m_EndFlag = 0;
    this->m_MitamaIndex_Makka = 0;
    this->m_MitamaIndex_Hero = 0;
    this->m_MitamaIndex_Nkm = 0;
    this->m_MitamaIndex_Miitsu = 0;
    this->m_MitamaRate = 0;
    this->m_MitamaRate_NotDLC = 0;
    this->m_MitamaRate_Makka = 0;
    this->m_MitamaRate_Hero = 0;
    this->m_MitamaRate_Nkm = 0;
    this->m_MitamaRate_Miitsu = 0;
    this->m_MagatsuhiRate = 0;
}

