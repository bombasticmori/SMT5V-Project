#include "BPL_Record.h"

UBPL_Record::UBPL_Record() {
}

void UBPL_Record::SetRecordCounter(E_RECORD_ID ID, int32 Value) {
}

URecordDataTable* UBPL_Record::MakeUpRecordDataTable(UMMIAsset* pAsset, UScriptMessageAsset* pRecordName) {
    return NULL;
}

FText UBPL_Record::GetRecordValueText(E_RECORD_ID ID) {
    return FText::GetEmpty();
}

FText UBPL_Record::GetRecordUnitName(E_RECORD_ID ID) {
    return FText::GetEmpty();
}

FText UBPL_Record::GetRecordName(E_RECORD_ID ID) {
    return FText::GetEmpty();
}

int32 UBPL_Record::GetRecordDataMax() {
    return 0;
}

FRecordData UBPL_Record::GetRecordData(E_RECORD_ID ID) {
    return FRecordData{};
}

int32 UBPL_Record::GetRecordCounter(E_RECORD_ID ID) {
    return 0;
}

void UBPL_Record::DestroyRecordDataTable(URecordDataTable* pTable) {
}

void UBPL_Record::ChangeRecordMaxCounter(E_RECORD_ID ID, int32 Value) {
}

void UBPL_Record::AddRecordCounter(E_RECORD_ID ID, int32 Add) {
}


