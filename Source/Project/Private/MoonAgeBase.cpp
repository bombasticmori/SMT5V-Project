#include "MoonAgeBase.h"

AMoonAgeBase::AMoonAgeBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

float AMoonAgeBase::GetMoonAgeUpdateCount(bool IsTokyo) {
    return 0.0f;
}

bool AMoonAgeBase::checkUpdateMoonAge(const float checkValue) {
    return false;
}

void AMoonAgeBase::addMoonAgeCount() {
}


