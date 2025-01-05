#include "BtlCommandWidgetBase.h"

UBtlCommandWidgetBase::UBtlCommandWidgetBase() {
    this->const_HoldOnTime = 0.60f;
    this->m_IsHold = false;
    this->m_HoldTime = 0.00f;
    this->m_HoldActionType = E_ACTION_MAPPING_ACTION;
    this->m_HoldCommandType = E_BTL_UI_COMMAND::E_BTL_UI_COMM_NONE;
    this->m_pAnimCtrl = NULL;
}


bool UBtlCommandWidgetBase::StartAnimation_Implementation(E_BTL_COMM_ANIM_TYPE animType, bool isReverse, bool isCheckPlaySame) {
    return false;
}

bool UBtlCommandWidgetBase::PlayUIAnimation(float DeltaTime, bool& isPlayEnd) {
    return false;
}



bool UBtlCommandWidgetBase::IsPlayUIAnimation(E_BTL_COMM_ANIM_TYPE animType) {
    return false;
}

bool UBtlCommandWidgetBase::InputCheckOne(FBtlCommandUIData commandData, bool& isInput, E_BTL_UI_COMMAND& inputCommand) {
    return false;
}

bool UBtlCommandWidgetBase::Input(bool& isInput, E_BTL_UI_COMMAND& inputCommand) {
    return false;
}


void UBtlCommandWidgetBase::GetSetAnimDataTableTypes(E_BTL_COMM_ANIM_TYPE Type, TArray<E_BTL_COMM_ANIM_TABLE>& tblTypes, bool& isLoop) {
}

int32 UBtlCommandWidgetBase::GetPartyData_PartyIndex() {
    return 0;
}

int32 UBtlCommandWidgetBase::GetPartyData_NkmIndex() {
    return 0;
}

bool UBtlCommandWidgetBase::GetIsHold() {
    return false;
}

FUIAnimationTableData UBtlCommandWidgetBase::GetAnimTableData(E_BTL_COMM_ANIM_TABLE tableType) {
    return FUIAnimationTableData{};
}

FUIAnimationTaskData UBtlCommandWidgetBase::GetAnimationTask(E_BTL_COMM_ANIM_TYPE animType) {
    return FUIAnimationTaskData{};
}

void UBtlCommandWidgetBase::EndAnimation(E_BTL_COMM_ANIM_TYPE animType) {
}

void UBtlCommandWidgetBase::DeleteAnimCtrl() {
}

void UBtlCommandWidgetBase::CreateAnimCtrl() {
}

void UBtlCommandWidgetBase::ClearHold() {
}

void UBtlCommandWidgetBase::ClearAnimTable(FUIAnimationTableData animTableData) {
}

FVector2D UBtlCommandWidgetBase::CalcHoldBarSize(FVector2D barSize, float Time, float maxTime) {
    return FVector2D{};
}

void UBtlCommandWidgetBase::AddHoldTime(float addTime) {
}

void UBtlCommandWidgetBase::AddAnimTable(FUIAnimationTableData animTableData) {
}

void UBtlCommandWidgetBase::AddAnimationTask(E_BTL_COMM_ANIM_TYPE animType, bool isReverse) {
}


