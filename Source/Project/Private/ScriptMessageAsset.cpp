#include "ScriptMessageAsset.h"

UScriptMessageAsset::UScriptMessageAsset() {
}

void UScriptMessageAsset::SetCharaNameByLabel(int32 CharaNameIndex, const FName& MessageLabel) {
}

void UScriptMessageAsset::SetCharaNameByID(int32 CharaNameIndex, int32 MessageID) {
}

FText UScriptMessageAsset::GetTextByLabel(const FName& MessageLabel) const {
    return FText::GetEmpty();
}

int32 UScriptMessageAsset::GetMessageIdByLabel(const FName& InMessageLabel) {
    return 0;
}


