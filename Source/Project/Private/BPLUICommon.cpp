#include "BPLUICommon.h"

UBPLUICommon::UBPLUICommon() {
}

bool UBPLUICommon::StopUseSkillListAnimation(FListAnimationBaseData& InData) {
    return false;
}

bool UBPLUICommon::StartUseSkillListAnimation(FListAnimationBaseData& InData, int32 InDisplayMax) {
    return false;
}

bool UBPLUICommon::SortMouseUnlockSortMouse(FSortMouseBaseData& InData) {
    return false;
}

bool UBPLUICommon::SortMouseSetParameterAddElement(FSortMouseBaseData& InData, int32 InIndex, int32 InDispIndex, int32 InOffsetIndex, int32 InElementIndex) {
    return false;
}

bool UBPLUICommon::SortMouseSetParameter(FSortMouseBaseData& InData, int32 InIndex, int32 InDispIndex, int32 InOffsetIndex) {
    return false;
}

bool UBPLUICommon::SortMouseLockSortMouse(FSortMouseBaseData& InData) {
    return false;
}

bool UBPLUICommon::SortMouseIsParameterAvailabel(FSortMouseBaseData& InData) {
    return false;
}

int32 UBPLUICommon::SortMouseGetParameter(FSortMouseBaseData& InData, int32 InType) {
    return 0;
}

bool UBPLUICommon::ResetParameterAvailabelFlag(FSortMouseBaseData& InData) {
    return false;
}

bool UBPLUICommon::IsNumberDisplay(int32 InNumber, int32 InIndex, int32 InEndIndex, bool InZeroSpace, bool InCheckSpace) {
    return false;
}

bool UBPLUICommon::IsInsideRectAngle(float InRectPosX, float InRectPosY, float InRectSizeX, float InRectSizeY, float InPosX, float InPosY) {
    return false;
}

int32 UBPLUICommon::GetPlayerId() {
    return 0;
}

bool UBPLUICommon::GetNumberParam(int32 InNumber, int32 InDigits, TArray<int32>& inArray) {
    return false;
}

bool UBPLUICommon::GetNumberItemParam(int32 InMax, int32 InDigits, int32 InItemNo, TArray<int32>& inArray) {
    return false;
}

int32 UBPLUICommon::GetMouseWheelParameter(float InParameter) {
    return 0;
}

bool UBPLUICommon::GetMouseOvered(UObject* WorldContextObject, UWidget* Widget) {
    return false;
}

int32 UBPLUICommon::GetCursorIndexAtBothEnds(int32 InType, int32 InIndex, int32 InCompareIndex) {
    return 0;
}

int32 UBPLUICommon::CalcUseSkillListAnimation(FListAnimationBaseData& InData, float InDeltaTime) {
    return 0;
}


