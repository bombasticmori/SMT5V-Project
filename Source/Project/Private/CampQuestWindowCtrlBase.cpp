#include "CampQuestWindowCtrlBase.h"

ACampQuestWindowCtrlBase::ACampQuestWindowCtrlBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_CampQuestInputType = E_CAMP_QUEST_INPUT_TYPE::NONE;
    this->m_CampQuestInputKey = E_CAMP_QUEST_USE_KEY::NONE;
}

void ACampQuestWindowCtrlBase::UpdateInputInfo() {
}

void ACampQuestWindowCtrlBase::SetUpdateIconState(E_MISSION_MAJOR_TYPE InQuestCategory, int32 InListIdx, bool IsVisibleIcon) {
}

void ACampQuestWindowCtrlBase::SetNewIconState(E_MISSION_MAJOR_TYPE InQuestCategory, int32 InListIdx, bool IsVisibleIcon) {
}

void ACampQuestWindowCtrlBase::LoadQuestList() {
}

bool ACampQuestWindowCtrlBase::IsExistNewQuest() {
    return false;
}

TArray<FCampQuestListData> ACampQuestWindowCtrlBase::GetDataList_InRange(E_MISSION_MAJOR_TYPE InQuestCategory, int32 StartIdx, int32 EndIdx) {
    return TArray<FCampQuestListData>();
}

TArray<FCampQuestListData> ACampQuestWindowCtrlBase::GetDataList(E_MISSION_MAJOR_TYPE InQuestCategory) {
    return TArray<FCampQuestListData>();
}


