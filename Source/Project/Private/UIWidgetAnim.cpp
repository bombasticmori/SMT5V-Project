#include "UIWidgetAnim.h"

UUIWidgetAnim::UUIWidgetAnim() {
    this->m_pAnimCtrl = NULL;
}

TArray<uint8> UUIWidgetAnim::GetSetAnimDataTable(uint8 animType) {
    return TArray<uint8>();
}

FUIAnimationTableData UUIWidgetAnim::GetAnimTableData(uint8 tableType) {
    return FUIAnimationTableData{};
}

void UUIWidgetAnim::DeleteAnimCtrl() {
}

FUIAnimationTaskData UUIWidgetAnim::CreateAnimTaskData(int32 taskIndex, TArray<uint8> animTableArray, bool isLoop, bool isRev) {
    return FUIAnimationTaskData{};
}

void UUIWidgetAnim::CreateAnimTable() {
}

void UUIWidgetAnim::CreateAnimCtrl() {
}

void UUIWidgetAnim::ClearAnimTable() {
}

void UUIWidgetAnim::CallStopAnimation(int32 taskIndex) {
}

FUIAnimationTaskData UUIWidgetAnim::CallPlayAnimation(float DeltaTime, FUIAnimationTaskData animTaskData, bool& ret) {
    return FUIAnimationTaskData{};
}

void UUIWidgetAnim::AddAnimTable(FUIAnimationTableData animTableData) {
}


