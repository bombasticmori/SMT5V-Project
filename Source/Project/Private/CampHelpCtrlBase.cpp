#include "CampHelpCtrlBase.h"

ACampHelpCtrlBase::ACampHelpCtrlBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

bool ACampHelpCtrlBase::SynchronizedNewIconAnimation() {
    return false;
}

bool ACampHelpCtrlBase::StopListAnimation() {
    return false;
}

bool ACampHelpCtrlBase::StartListAnimation(bool InCursorAnimation, bool InCursorLoop, bool InDarkMaskOnFlag) {
    return false;
}

bool ACampHelpCtrlBase::StartFadeOutListAnimation() {
    return false;
}

bool ACampHelpCtrlBase::SetMovingCursor() {
    return false;
}

bool ACampHelpCtrlBase::SetHelpTypeMovingCursor() {
    return false;
}

int32 ACampHelpCtrlBase::SetHelpTypeCursor(int32 InIndex) {
    return 0;
}

bool ACampHelpCtrlBase::SetHelpType(int32 InHelpType) {
    return false;
}

bool ACampHelpCtrlBase::SetHelpPanel(int32 InType) {
    return false;
}

bool ACampHelpCtrlBase::SetHelpNewIcon(int32 InCategory, int32 InIndex, bool inFlag) {
    return false;
}

bool ACampHelpCtrlBase::ResetMovingCursor() {
    return false;
}

bool ACampHelpCtrlBase::ResetHelpTypeMovingCursor() {
    return false;
}

bool ACampHelpCtrlBase::ResetHelpNewIcon() {
    return false;
}

int32 ACampHelpCtrlBase::MoveHelpType(int32 InMoveIndex) {
    return 0;
}

bool ACampHelpCtrlBase::IsListAnimation() {
    return false;
}

bool ACampHelpCtrlBase::IsItPossibleDisclose(int32 InconditionId, int32 InMessageTextId) {
    return false;
}

bool ACampHelpCtrlBase::IsExistDLCFlag_Implementation(E_CAMPHELPLIST_CONDITIONTYPE InType) {
    return false;
}

bool ACampHelpCtrlBase::InitializeHelpListCursor() {
    return false;
}

int32 ACampHelpCtrlBase::HelpMoveCursorOffset(int32 InMoveCursor, int32 InScrollStartOffset, bool InScrollLock) {
    return 0;
}

int32 ACampHelpCtrlBase::HelpMoveCursor(int32 InMoveCursor, int32 InScrollStartOffset) {
    return 0;
}

int32 ACampHelpCtrlBase::GetHelpType() {
    return 0;
}

int32 ACampHelpCtrlBase::GetHelpNumber() {
    return 0;
}

bool ACampHelpCtrlBase::GetHelpNewIcon(int32 InCategory, int32 InIndex) {
    return false;
}

int32 ACampHelpCtrlBase::GetHelpMessageId(int32 InCategory) {
    return 0;
}

int32 ACampHelpCtrlBase::GetHelpListMax() {
    return 0;
}

int32 ACampHelpCtrlBase::GetHelpIdFromIndex(int32 InCategory, int32 InIndex) {
    return 0;
}

int32 ACampHelpCtrlBase::GetHelpId(int32 InCategory) {
    return 0;
}

int32 ACampHelpCtrlBase::GetHelpDisplayNumber() {
    return 0;
}

int32 ACampHelpCtrlBase::GetDisplayCursorIndex(int32 InCategory) {
    return 0;
}

int32 ACampHelpCtrlBase::GetCursorListIndex() {
    return 0;
}

int32 ACampHelpCtrlBase::GetCursorIndex(int32 InCategory) {
    return 0;
}

int32 ACampHelpCtrlBase::GetCursorDispIndex() {
    return 0;
}

int32 ACampHelpCtrlBase::GetCategoryId() {
    return 0;
}

bool ACampHelpCtrlBase::DeleteList() {
    return false;
}

bool ACampHelpCtrlBase::CreateHelpList() {
    return false;
}

void ACampHelpCtrlBase::ChangeHelpPanelList(int32 InType) {
}

int32 ACampHelpCtrlBase::CalcScrollBarClicked(float InRate) {
    return 0;
}














