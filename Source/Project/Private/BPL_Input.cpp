#include "BPL_Input.h"

UBPL_Input::UBPL_Input() {
}

FString UBPL_Input::GetKeyName_KeyboardLanguage(FKey Key) {
    return TEXT("");
}

E_KeyboardLanguage UBPL_Input::GetKeyboardLanguage() {
    return E_KeyboardLanguage::E_Other;
}

FKey UBPL_Input::ConvertButton_ForGamepad(FKey prevKey) {
    return FKey{};
}

bool UBPL_Input::CheckConnect_PsGamepad(bool isLog, FString& outLog) {
    return false;
}


