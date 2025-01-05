#include "UIFadePause.h"

UUIFadePause::UUIFadePause() : UUserWidget(FObjectInitializer::Get()) {
    this->bIsPaused = false;
}

void UUIFadePause::SetIsPaused(bool sw) {
}

bool UUIFadePause::GetIsPaused() {
    return false;
}


