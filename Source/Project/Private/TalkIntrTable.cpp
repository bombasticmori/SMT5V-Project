#include "TalkIntrTable.h"

FTalkIntrTable::FTalkIntrTable() {
    this->m_MsgDvl = 0;
    this->m_MsgSys = 0;
    this->m_MsgChoice1 = 0;
    this->m_MsgChoice2 = 0;
    this->m_MsgChoice3 = 0;
    this->m_Place = 0;
    this->m_Part = E_TALK_QUESTION_PART::QUESTION_PART_NONE;
    this->m_IsSysFirst = false;
    this->m_Voice = EDevilTalkVoice::None;
    this->m_Motion = E_CHARA_MOTION_ID::NONE;
}

