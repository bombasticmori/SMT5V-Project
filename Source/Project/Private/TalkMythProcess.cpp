#include "TalkMythProcess.h"

FTalkMythProcess::FTalkMythProcess() {
    this->m_Process = EMythProcessType::None;
    this->m_Talker = EMythTalkerType::System;
    this->m_Voice = EDevilTalkVoice::None;
    this->m_Motion = E_CHARA_MOTION_ID::NONE;
    this->m_ProcessValue = 0;
    this->m_Camera = 0;
}

