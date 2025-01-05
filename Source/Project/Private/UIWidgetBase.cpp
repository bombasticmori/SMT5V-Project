#include "UIWidgetBase.h"

UUIWidgetBase::UUIWidgetBase() : UUserWidget(FObjectInitializer::Get()) {
    this->isTickCallOn = true;
}

void UUIWidgetBase::TickCallTaskAllClear() {
}

void UUIWidgetBase::DelTickCallTask(E_WIDGET_TICK_TASK_TYPE taskType) {
}

void UUIWidgetBase::ChangeTickCall(bool isOn) {
}

void UUIWidgetBase::AddTickCallTask(E_WIDGET_TICK_TASK_TYPE taskType) {
}


