#include "TalkDevilSaveData.h"

FTalkDevilSaveData::FTalkDevilSaveData() {
    this->m_TalkWantWait = E_TALK_WANT_KIND::WANT_NONE;
    this->m_TalkLevelWait = false;
    this->m_TalkStockWait = false;
    this->m_TalkApologyWait = false;
    this->m_TalkWantWaitValue = 0;
    this->m_TalkQuizCount = 0;
}

