#include "ButtonS5.h"

UButtonS5::UButtonS5() {
    this->IsFocusable = false;
    this->bExclusiveDragMode = false;
}

void UButtonS5::SetButtonS5DebugColor(bool bEnableDebugColor) {
}

bool UButtonS5::IsMouseDragging() const {
    return false;
}

bool UButtonS5::GetButtonS5ExclusiveDragging() {
    return false;
}


