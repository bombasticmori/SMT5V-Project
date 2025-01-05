#include "DebugFuncBaseObj.h"

UDebugFuncBaseObj::UDebugFuncBaseObj() {
    this->m_IsFuncAlways = false;
    this->m_IsDebugMenuKeyLock = false;
    this->m_IsUpdateAlways = false;
}


void UDebugFuncBaseObj::SetIsFuncAlways(bool isAlways) {
}

void UDebugFuncBaseObj::SetIsDebugMenuKeyLock(bool isLock) {
}


bool UDebugFuncBaseObj::IsFuncAlways() {
    return false;
}

bool UDebugFuncBaseObj::IsDebugMenuKeyLock() {
    return false;
}






