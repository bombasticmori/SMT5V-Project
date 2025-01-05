#include "CampQuestCtrlBase.h"

ACampQuestCtrlBase::ACampQuestCtrlBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_padButtonIndex = 0;
    this->m_padCrsorIndex = 0;
    this->m_currentSelectMissionMajorType = E_MISSION_MAJOR_TYPE::E_MISSION_MAJOR_MAIN;
    this->m_selectIndex = 0;
    this->m_oldIndex = 0;
}

void ACampQuestCtrlBase::padCheck() {
}

void ACampQuestCtrlBase::loadMission() {
}


