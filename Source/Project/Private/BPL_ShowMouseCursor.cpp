#include "BPL_ShowMouseCursor.h"

UBPL_ShowMouseCursor::UBPL_ShowMouseCursor() {
}

void UBPL_ShowMouseCursor::UpdateShowMouseCursor() {
}

void UBPL_ShowMouseCursor::SetTopShowMouseCursor(const FString& SceneName, bool bShow) {
}

void UBPL_ShowMouseCursor::SetForceShowMouseCursor(const FString& SceneName, bool bForceShow) {
}

void UBPL_ShowMouseCursor::ResetMouseCursorBasePosition() {
}

void UBPL_ShowMouseCursor::PushShowMouseCursor(const FString& SceneName, bool bShow) {
}

FMouseCursorState UBPL_ShowMouseCursor::PopShowMouseCursor(const FString& SceneName) {
    return FMouseCursorState{};
}

FMouseCursorState UBPL_ShowMouseCursor::PeekShowMouseCursor() {
    return FMouseCursorState{};
}

void UBPL_ShowMouseCursor::LogShowMouseCursorStack() {
}

void UBPL_ShowMouseCursor::CallOpenDebugMenu_ShowMouseCursor() {
}

void UBPL_ShowMouseCursor::CallCloseDebugMenu_ShowMouseCursor() {
}


