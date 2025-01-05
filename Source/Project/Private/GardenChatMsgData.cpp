#include "GardenChatMsgData.h"

FGardenChatMsgData::FGardenChatMsgData() {
    this->m_MsgType = E_GARDEN_MSG_USE_TYPE::MSG_NONE;
    this->m_DevilTalkVoice = EDevilVoiceType::EDevilVoiceType_None;
    this->m_UseConditionType = E_GARDEN_CHAT_MSG_TYPE::E_GARDEN_CHAT_COND_NONE;
    this->m_UseCondition = 0;
}

