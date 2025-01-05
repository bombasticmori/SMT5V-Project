#include "GardenTalk.h"

AGardenTalk::AGardenTalk(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_SpotType = 0;
    this->m_DevilID = 0;
    this->m_UsedChatIndex = 0;
}

bool AGardenTalk::Respawn_SetChatMessage(TArray<FGardenSPTData>& UsedGardenMessages, uint8& CurrentGardenArea, TArray<uint8>& ValidPhases) {
    return false;
}

bool AGardenTalk::PickSkillTekisei(int32 NkmIndex, E_SKILL_TEKISEI_CATEGORY& ChosenSkillTekiseiType, FText& SkillTekiseiName, int32& Amount, int32& OldSkillTekiseiValue, int32& NewSkillTekiseiValue) {
    return false;
}

bool AGardenTalk::PickPowerUpReward(int32 NkmIndex) {
    return false;
}

bool AGardenTalk::PickPowerUpMessage(FGardenMsgData& ChosenPowerMessage, int32& ChosenPowerMessageIndex) {
    return false;
}

void AGardenTalk::PickParameter(int32 NkmIndex, bool IsPowerUpMessage, E_ABILITY_TYPE& ChosenParameterType, FText& ParameterName, int32& Amount, int32& OldParameterValue, int32& NewParameterValue) {
}

bool AGardenTalk::PickItemReward(int32 DevilLevel, int32& ChosenItemID, int32& ChosenItemNum) {
    return false;
}

bool AGardenTalk::PickItemMessage(FGardenMsgData& ChosenItemMessage, int32& ChosenItemMessageIndex) {
    return false;
}

bool AGardenTalk::PickChatMessage(TArray<FGardenSPTData>& UsedGardenMessages, uint8& CurrentGardenArea, TArray<uint8>& ValidPhases) {
    return false;
}

void AGardenTalk::Initialize(UObject* WorldContextObject) {
}

bool AGardenTalk::Debug_PickItemReward(int32 DevilLevel, int32 RepeatCount) {
    return false;
}

bool AGardenTalk::BuildMessageData(int32 DevilID, FGardenUniqueDevilMsgData& UNQData, FGardenSpeechTypeMsgData& SPTData) {
    return false;
}

void AGardenTalk::BuildGardenResultData(int32 NkmIndex, bool IsPowerUpMessage, FGardenResultData& GardenResultData) {
}


