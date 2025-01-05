#include "TalkReactionTable.h"

FTalkReactionTable::FTalkReactionTable() {
    this->m_Rate = 0;
    this->m_Voice = EDevilTalkVoice::None;
    this->m_Motion = E_CHARA_MOTION_ID::NONE;
    this->m_MsgSys = 0;
    this->m_MsgDvl = 0;
    this->m_MsgSys2 = 0;
    this->m_MsgDvl2 = 0;
    this->m_IsSysFirst = false;
    this->m_IsSysFirst2 = false;
    this->m_IsFailSafeInvalid = false;
    this->m_Result = E_TALK_QUE_REAC::QUE_REAC_INVALID;
    this->m_AddResult = E_TALK_QUE_ADD_RESULT::QUE_ADD_RESULT_NONE;
    this->m_NextFlg = 0;
    this->m_NextFlg2 = 0;
}

