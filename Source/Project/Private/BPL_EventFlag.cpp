#include "BPL_EventFlag.h"

UBPL_EventFlag::UBPL_EventFlag() {
}

FName UBPL_EventFlag::ValueToName(int32 flagValue) {
    return NAME_None;
}

void UBPL_EventFlag::SetEventFlagValue(int32 flag, bool sw) {
}

void UBPL_EventFlag::SetEventFlag(FName Name, bool sw) {
}

int32 UBPL_EventFlag::NameToValue(const FName& flagName) {
    return 0;
}

void UBPL_EventFlag::ClearAllEventFlag() {
}

bool UBPL_EventFlag::CheckEventFlagValue(int32 flag) {
    return false;
}

bool UBPL_EventFlag::CheckEventFlag(FName Name) {
    return false;
}


