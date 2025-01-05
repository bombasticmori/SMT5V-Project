#include "CampCommandTable.h"

UCampCommandTable::UCampCommandTable() {
}

bool UCampCommandTable::MakeUp(UMMIAsset* pAsset, UScriptMessageAsset* pCommandName, UScriptMessageAsset* pCommandHelp) {
    return false;
}

FText UCampCommandTable::GetCampCommandName(E_CAMP_COMMAND_ID ID) {
    return FText::GetEmpty();
}

FText UCampCommandTable::GetCampCommandHelp(E_CAMP_COMMAND_ID ID) {
    return FText::GetEmpty();
}

TArray<FCampCommandData> UCampCommandTable::GetCampCommandDataAll() {
    return TArray<FCampCommandData>();
}

FCampCommandData UCampCommandTable::GetCampCommandData(E_CAMP_COMMAND_ID ID) {
    return FCampCommandData{};
}

void UCampCommandTable::Finalize() {
}


