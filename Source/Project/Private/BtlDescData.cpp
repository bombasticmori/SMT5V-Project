#include "BtlDescData.h"

FBtlDescData::FBtlDescData() {
    this->m_EvtID = 0;
    this->m_SymbolEncountType = E_BTL_SYMBOL_ENCOUNT::E_BTL_SYMBOL_ENCOUNT_NORMAL;
    this->m_BGMNo = 0;
    this->m_EncID = 0;
    this->m_MagatsukaSpawn = false;
    this->m_MagatsukaBoss = false;
    this->m_HitMapAttack = false;
    this->m_Magatsuhi = false;
    this->m_BossRushChallengeMode = false;
}

