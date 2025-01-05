#include "PauseUserWidget.h"

UPauseUserWidget::UPauseUserWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->bTickEvenWhenPaused = false;
}

void UPauseUserWidget::SetTickableWhenPaused(bool bTickableWhenPaused) {
}

bool UPauseUserWidget::GetTickableWhenPaused() {
    return false;
}


