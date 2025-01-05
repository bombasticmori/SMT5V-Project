#include "MissionSaveOneData.h"

FMissionSaveOneData::FMissionSaveOneData() {
    this->IsEntry = false;
    this->IsComplete = false;
    this->IsCompleteInfo = false;
    this->IsNewEnd = false;
    this->IsLogUpdated = false;
    this->TimeAttackState = E_TIME_ATTACK_MISSION_STATE::E_NONE;
    this->MoonAgePassed = 0;
    this->MoonAgeReported = 0;
}

