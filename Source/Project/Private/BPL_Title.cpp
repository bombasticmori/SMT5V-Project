#include "BPL_Title.h"

UBPL_Title::UBPL_Title() {
}

bool UBPL_Title::UsePCTitle() {
    return false;
}

bool UBPL_Title::UseGamertag() {
    return false;
}

void UBPL_Title::SetRequestTitleMovie(bool useFirstMovie) {
}

bool UBPL_Title::IsRequestedTitleMovie() {
    return false;
}

bool UBPL_Title::IsActivityStart(const UObject* WorldContextObject) {
    return false;
}

void UBPL_Title::GetTitleTopSelection(const bool enableConvert, TArray<E_TITLE_TOP_SELECTION>& retSelection) {
}

FString UBPL_Title::GetGamertag(const FEnableCheckGamertagFontData& inFontData, const bool modern, const bool modernSuffix, const FString& repCharforGarbledChar) {
    return TEXT("");
}

E_OldNewRoute UBPL_Title::GetActivityTargetSaveDataType(const UObject* WorldContextObject) {
    return E_OldNewRoute::E_CommonRoute;
}

bool UBPL_Title::EnableCountUpNoInputTime() {
    return false;
}

bool UBPL_Title::CheckEnableConvertSaveData() {
    return false;
}

bool UBPL_Title::CheckDisplayCopyrightFromPlatform(const int32 order) {
    return false;
}


