#include "UIListCursor.h"

UUIListCursor::UUIListCursor() {
    this->m_IsLimitLock = false;
}

bool UUIListCursor::MoveCursor(int32 Add, int32 set, bool isLimitStop) {
    return false;
}

bool UUIListCursor::IsLimitLock() {
    return false;
}

void UUIListCursor::Init(int32 Index, int32 TopIndex, int32 ViewMax, int32 itemNum) {
}

int32 UUIListCursor::GetNowIndex() {
    return 0;
}

FUIListCursorData UUIListCursor::GetCursorData() {
    return FUIListCursorData{};
}

void UUIListCursor::AddItemNum(int32 Add) {
}


