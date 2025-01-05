#include "SingleKeyboardAsyncFunction.h"

USingleKeyboardAsyncFunction::USingleKeyboardAsyncFunction() {
}

void USingleKeyboardAsyncFunction::SetPlayerName(const FText& Input, bool bFirstInput) {
}

bool USingleKeyboardAsyncFunction::PlatformIsSupportedVirtualKeyboard() {
    return false;
}

float USingleKeyboardAsyncFunction::GetVirtualKeyboardIntervalTime() {
    return 0.0f;
}

FString USingleKeyboardAsyncFunction::GetPlayerDataName(bool bFirstInput) {
    return TEXT("");
}

int32 USingleKeyboardAsyncFunction::GetNameEntryMaxLength() {
    return 0;
}

bool USingleKeyboardAsyncFunction::GetFamilyNameFirst() {
    return false;
}

FString USingleKeyboardAsyncFunction::CheckNameEntryText(const FString& InputStr, const FEnableCheckFontData& FontFamilyData) {
    return TEXT("");
}

FString USingleKeyboardAsyncFunction::CheckFontUnsupportedCharacter(const FString& InStr, const FEnableCheckFontData& FontFamilyData) {
    return TEXT("");
}

USingleKeyboardAsyncFunction* USingleKeyboardAsyncFunction::CallSingleKeyboard(UObject* WorldContextObject, FSingleKeyboardTextSet TextSet, FEnableCheckFontData FontFamilyData, bool IsFirst) {
    return NULL;
}


