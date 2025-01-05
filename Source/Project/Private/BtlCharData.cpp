#include "BtlCharData.h"

FBtlCharData::FBtlCharData() {
    this->m_CharType = E_BTL_CHAR_TYPE::E_BTL_CHAR_EMPTY;
    this->m_Flag = 0;
    this->m_Id = 0;
    this->m_StockIndex = 0;
    this->m_Status = 0;
    this->m_ReqStatus = 0;
    this->m_ReqDelStatus = 0;
    this->m_Level = 0;
    this->m_OrderAgi = 0;
    this->m_Attr = 0;
    this->m_DeathAddPerc = 0;
    this->m_UnionCnt = 0;
    this->m_AtkRate = 0;
    this->m_UniqueSkill = 0;
    this->m_Uplifting = false;
    this->m_Electrification = false;
    this->m_Down = false;
    this->m_MoonTemperData = E_TALK_MOON_TEMPER_DATA::NONE;
    this->m_MoonTemperStatus = E_TALK_MOON_TEMPER_STATUS::INVALID;
    this->m_PrevHP = 0;
    this->m_SwapSkillID = 0;
}

