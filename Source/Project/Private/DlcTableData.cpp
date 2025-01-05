#include "DlcTableData.h"

UDlcTableData::UDlcTableData() {
    this->bMountCheck = false;
}

void UDlcTableData::UpdateDLCFlag() {
}

void UDlcTableData::SetDLCFlag(FName NameTag, bool isOn) {
}

void UDlcTableData::MountCheck() {
}

bool UDlcTableData::IsCheckDLCFlag(FName NameTag) {
    return false;
}

int32 UDlcTableData::GetDLCSaveId(FName NameTag) {
    return 0;
}

TArray<FName> UDlcTableData::GetDlcNameTagList() {
    return TArray<FName>();
}

void UDlcTableData::ClearAllDlcSystemSaveFlag(bool InClearMountFlag, bool InClearSystemFlag) {
}


