#include "SortWindowBase.h"

ASortWindowBase::ASortWindowBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void ASortWindowBase::ResetSortItemList() {
}

void ASortWindowBase::LoadSortItemList(E_SORT_WINDOW_SORT_TYPE InSortScene) {
}

TArray<FText> ASortWindowBase::GetSortItemList_InRange(int32 StartIdx, int32 EndIdx) {
    return TArray<FText>();
}

TArray<FText> ASortWindowBase::GetSortItemList_All() {
    return TArray<FText>();
}

int32 ASortWindowBase::GetHelpMsgIdx(int32 InCursorIdx) {
    return 0;
}


