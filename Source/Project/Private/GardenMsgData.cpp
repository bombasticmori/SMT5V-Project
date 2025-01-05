#include "GardenMsgData.h"

FGardenMsgData::FGardenMsgData() {
    this->m_MsgType = E_GARDEN_MSG_USE_TYPE::MSG_NONE;
    this->m_DevilTalkVoice = EDevilVoiceType::EDevilVoiceType_None;
    this->m_CharaMotion = E_CHARA_MOTION_ID::NONE;
}

