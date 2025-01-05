#include "CampItemCtrlBase.h"

ACampItemCtrlBase::ACampItemCtrlBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

bool ACampItemCtrlBase::StopListAnimation() {
    return false;
}

bool ACampItemCtrlBase::StartListAnimation(bool InCursorAnimation, bool InCursorLoop, bool InDarkMaskOnFlag) {
    return false;
}

bool ACampItemCtrlBase::StartFadeOutListAnimation() {
    return false;
}

bool ACampItemCtrlBase::SetSortUseItem(int32 InSortType) {
    return false;
}

bool ACampItemCtrlBase::SetSortType(int32 InItemType, int32 InSortType) {
    return false;
}

bool ACampItemCtrlBase::SetSortRelicItem(int32 InSortType) {
    return false;
}

bool ACampItemCtrlBase::SetSortMovingCursor(int32 InItemType) {
    return false;
}

bool ACampItemCtrlBase::SetSortImportantItem(int32 InSortType) {
    return false;
}

bool ACampItemCtrlBase::SetSortAscending(int32 InItemType, bool InAscending) {
    return false;
}

bool ACampItemCtrlBase::SetSelectedDarkmaskOn() {
    return false;
}

bool ACampItemCtrlBase::SetSelectedDarkmaskOff(int32 InCanselType) {
    return false;
}

bool ACampItemCtrlBase::SetMovingCursor() {
    return false;
}

bool ACampItemCtrlBase::SetItemTypeMovingCursor() {
    return false;
}

int32 ACampItemCtrlBase::SetItemTypeCursor(int32 InMoveIndex) {
    return 0;
}

bool ACampItemCtrlBase::SetItemType(int32 InItemType) {
    return false;
}

bool ACampItemCtrlBase::SetItemPanelPositionBySelectItem(int32 InType) {
    return false;
}

bool ACampItemCtrlBase::SetItemPanel(int32 InType) {
    return false;
}

bool ACampItemCtrlBase::SetCanselType(E_CAMPITEMLIST_CANSELTYPE InType) {
    return false;
}

bool ACampItemCtrlBase::ResettingCursorListIndex() {
    return false;
}

bool ACampItemCtrlBase::ResetSortMovingCursor(int32 InItemType) {
    return false;
}

bool ACampItemCtrlBase::ResetMovingCursor() {
    return false;
}

bool ACampItemCtrlBase::ResetItemTypeMovingCursor() {
    return false;
}

int32 ACampItemCtrlBase::MoveSortType(int32 InItemType, int32 InMoveSortType) {
    return 0;
}

int32 ACampItemCtrlBase::MoveItemType(int32 InMoveIndex) {
    return 0;
}

int32 ACampItemCtrlBase::MoveCursorOffset(int32 InMoveCursor, int32 InScrollStartOffset, bool InScrollLock) {
    return 0;
}

int32 ACampItemCtrlBase::MoveCursor(int32 InMoveCursor, int32 InScrollStartOffset) {
    return 0;
}

bool ACampItemCtrlBase::IsListAnimation() {
    return false;
}

bool ACampItemCtrlBase::InitializeItemListCursor() {
    return false;
}

int32 ACampItemCtrlBase::GetSortType(int32 InItemType) {
    return 0;
}

int32 ACampItemCtrlBase::GetSortMovingCursorSpeed(int32 InType) {
    return 0;
}

bool ACampItemCtrlBase::GetSortAscending(int32 InItemType) {
    return false;
}

E_CAMPITEMLIST_CANSELTYPE ACampItemCtrlBase::GetReasonForCansel() {
    return E_CAMPITEMLIST_CANSELTYPE::NORMAL;
}

int32 ACampItemCtrlBase::GetItemType() {
    return 0;
}

int32 ACampItemCtrlBase::GetItemNumber() {
    return 0;
}

int32 ACampItemCtrlBase::GetItemDisplayNumber() {
    return 0;
}

int32 ACampItemCtrlBase::GetItemCursorOffset() {
    return 0;
}

int32 ACampItemCtrlBase::GetCursorListIndex() {
    return 0;
}

int32 ACampItemCtrlBase::GetCursorItemId() {
    return 0;
}

int32 ACampItemCtrlBase::GetCursorDispIndex() {
    return 0;
}

int32 ACampItemCtrlBase::GetCanBeUseItemNumber() {
    return 0;
}

bool ACampItemCtrlBase::DeleteItemList() {
    return false;
}

bool ACampItemCtrlBase::CreateItemList() {
    return false;
}

bool ACampItemCtrlBase::ChangeSortAscending(int32 InItemType) {
    return false;
}

int32 ACampItemCtrlBase::CanBeUseItem(int32 InItemId) {
    return 0;
}

int32 ACampItemCtrlBase::CanBeUsedSelectedItem() {
    return 0;
}

int32 ACampItemCtrlBase::CalcScrollBarClicked(float InRate) {
    return 0;
}

bool ACampItemCtrlBase::CalcCanBeUseItem(int32 InNumber) {
    return false;
}
















bool ACampItemCtrlBase::BackUpForSortItemData(int32 InType) {
    return false;
}


