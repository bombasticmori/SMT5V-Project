#include "ResultTopDataObj.h"

UResultTopDataObj::UResultTopDataObj() {
    this->m_AnimTime = 0;
    this->m_MoneyRatex10 = 10;
    this->m_ExpRatex10 = 10;
    this->m_Money = 0;
}

void UResultTopDataObj::UpdateExpBarState(const int32& Index, const float& pastTime, bool& IsEnd, bool& lvUp, int32& barRate, int32& Lv) {
}

int32 UResultTopDataObj::PageScrollLastIndex() {
    return 0;
}

float UResultTopDataObj::PageScrollBarRate(int32 Index) {
    return 0.0f;
}

int32 UResultTopDataObj::GetInterval_Zero2Max() {
    return 0;
}

int32 UResultTopDataObj::GetInterval_Top2ExpMove() {
    return 0;
}

int32 UResultTopDataObj::GetInterval_LvUp() {
    return 0;
}

bool UResultTopDataObj::ExistLvUpChara() const {
    return false;
}

bool UResultTopDataObj::EnablePageChange() {
    return false;
}

void UResultTopDataObj::CheckLvUpHelpTiming(const int32& Index, const float& pastDeltaSeconds, bool& AllEnd, bool& EnablePop, int32& DevilID) {
}


