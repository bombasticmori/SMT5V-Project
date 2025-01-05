#include "BtlMainCommandWidgetBase.h"

UBtlMainCommandWidgetBase::UBtlMainCommandWidgetBase() {
}

bool UBtlMainCommandWidgetBase::Setting_Implementation(FBtlParty PartyData) {
    return false;
}



bool UBtlMainCommandWidgetBase::IsUseItemCommand() {
    return false;
}

TArray<FBtlMainCommandUIData> UBtlMainCommandWidgetBase::GetCommandUIDataArray() {
    return TArray<FBtlMainCommandUIData>();
}

void UBtlMainCommandWidgetBase::AddCommandUIData(FBtlMainCommandUIData Data) {
}


