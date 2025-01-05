#include "GameData.h"

FGameData::FGameData() {
    this->m_TotalPlayTimeSec = 0;
    this->m_MoonAge = E_MOON_AGE::E_MOON_AGE_SILENT;
    this->m_MoonAgeCounter = 0.00f;
    this->m_OldNewRoute = E_OldNewRoute::E_CommonRoute;
    this->m_ProgressActivityID = EActivityTaskID::Activity;
    this->m_ActivityCardType = EActivityType::Act_None;
}

