#include "MissionData.h"

FMissionData::FMissionData() {
    this->MissionId = 0;
    this->SortID = 0;
    this->IsHideReward = false;
    this->IsHideCond = false;
    this->IsTimeAttack = false;
    this->IsCondUnlimited = false;
    this->MajorType = E_MISSION_MAJOR_TYPE::E_MISSION_MAJOR_MAIN;
    this->Type = E_MISSION_TYPE::E_MISSION_TYPE_NONE;
    this->RepeatType = E_MISSION_REPEAT_TYPE::E_NONE;
    this->RewardMoney = 0;
    this->RewardExp = 0;
    this->AllCompleteOnFlag = 0;
    this->EntryOnFlag = 0;
    this->ReportMapId = 0;
    this->ReportAreaId = 0;
    this->ExpectedLevel = 0;
}

