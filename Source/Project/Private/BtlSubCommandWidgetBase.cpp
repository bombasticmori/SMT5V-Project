#include "BtlSubCommandWidgetBase.h"

UBtlSubCommandWidgetBase::UBtlSubCommandWidgetBase() {
}

bool UBtlSubCommandWidgetBase::Setting_Implementation(FBtlParty PartyData, bool isUseCharaChange, bool isCounter, bool isList) {
    return false;
}






TArray<FBtlSubCommandUIData> UBtlSubCommandWidgetBase::GetCommandUIDataArray() {
    return TArray<FBtlSubCommandUIData>();
}

void UBtlSubCommandWidgetBase::CreateCommandData(bool isList, bool isPlayer, bool isCounter, bool isChangeCharaUse) {
}

void UBtlSubCommandWidgetBase::AddCommandUIData(FBtlSubCommandUIData Data) {
}


