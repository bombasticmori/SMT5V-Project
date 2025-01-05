#include "OptionBase.h"

AOptionBase::AOptionBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void AOptionBase::UnsetSlotKeySelect(int32 category, int32 Index) {
}

void AOptionBase::SetSlotKeySelect(FKey Key, int32 category, int32 Index) {
}

void AOptionBase::SetItemIndex(int32 category, int32 SlotIndex, int32 newItemIndex) {
}

void AOptionBase::SetDefaultValue(const UObject* WorldContextObject, const int32 in_Category) {
}

void AOptionBase::ResetKeySelectList(const UObject* WorldContextObject) {
}

E_OPTION_ADDITIONAL_RESPONCE AOptionBase::RefrectSettingsDuringOptionControl(const UObject* WorldContextObject, const int32 category, const int32 SlotIndex) {
    return E_OPTION_ADDITIONAL_RESPONCE::E_OPTION_ADDITIONAL_RESPONCE_NONE;
}

bool AOptionBase::RefrectDisplayBrightness_Implementation(int32 Volume) {
    return false;
}

void AOptionBase::RecordNowWindowsSettings(const bool NewInitialize) {
}

void AOptionBase::RecordCategoryKeySelect(int32 category) {
}

bool AOptionBase::IsSelectableSlot(int32 category, int32 SlotIndex) {
    return false;
}

bool AOptionBase::IsMouseOnlyKeySlot(int32 category, int32 Index) {
    return false;
}

bool AOptionBase::IsMainKeySlot(int32 category, int32 Index) {
    return false;
}

bool AOptionBase::IsKeySelectCancel(FKey Key) {
    return false;
}

bool AOptionBase::IsExistUnsetMainKeySelect(int32 category) {
    return false;
}

bool AOptionBase::IsExistDLC_Implementation(E_OPTION_DLC_TYPE dlcType) {
    return false;
}

bool AOptionBase::IsEnableKey(FKey Key, int32 category, int32 Index) {
    return false;
}

bool AOptionBase::IsChangedTimedItemIndex() {
    return false;
}

bool AOptionBase::IsChangedSettingsbyExternalControl() {
    return false;
}

bool AOptionBase::IsChangedKeyboardLayout() {
    return false;
}

bool AOptionBase::IsChangedItemIndex() {
    return false;
}

bool AOptionBase::IsAlreadyUsingKey(FKey Key, int32 category, int32 Index) {
    return false;
}

void AOptionBase::Initialize(const UObject* WorldContextObject, const uint8 UseType) {
}

E_OPTION_SLOT_TYPE AOptionBase::GetSlotType(int32 category, int32 SlotIndex) {
    return E_OPTION_SLOT_TYPE::E_OPTION_SLOT_TYPE_PANEL;
}

void AOptionBase::GetSlotSubText(TScriptInterface<IMessageTagInterface> dst, const int32 category, const int32 SlotIndex, const UScriptMessageAsset* pMsgAsset, const UScriptMessageAsset* pDifficultyMsgAsset) {
}

FText AOptionBase::GetSlotMainText(const int32 category, const int32 SlotIndex, const UScriptMessageAsset* pMsgAsset) {
    return FText::GetEmpty();
}

int32 AOptionBase::GetSlotListLength(int32 category) {
    return 0;
}

E_BTN_HELP_MAPPING_KEY_TYPE AOptionBase::GetSlotBtnIcon(const int32 category, const int32 SlotIndex) {
    return E_BTN_HELP_MAPPING_KEY_TYPE::None;
}

int32 AOptionBase::GetSelectionNum(int32 category, int32 SlotIndex) {
    return 0;
}

E_OPTION_CONTENT_LANGUAGE_TYPE AOptionBase::GetSelectedVoiceType() {
    return E_OPTION_CONTENT_LANGUAGE_TYPE::E_OPTION_CONTENT_LANGUAGE_TYPE_JP;
}

void AOptionBase::GetKeySelectSlotSubText(TScriptInterface<IMessageTagInterface> dst, int32& colorType, FKey& KeyType, const int32 category, const int32 SlotIndex, const UScriptMessageAsset* pMsgAsset) {
}

int32 AOptionBase::GetItemIndex(int32 category, int32 SlotIndex) {
    return 0;
}

int32 AOptionBase::GetHelpMessageId(int32 category, int32 SlotIndex) {
    return 0;
}

bool AOptionBase::GetEtcSaveNeeds() {
    return false;
}

int32 AOptionBase::GetDetailTitleID(int32 category, int32 SlotIndex) {
    return 0;
}

int32 AOptionBase::GetDetailMainTextID(int32 category, int32 SlotIndex) {
    return 0;
}

int32 AOptionBase::GetCategoryMax() {
    return 0;
}

void AOptionBase::DiscardKeySelect(int32 category) {
}

void AOptionBase::ApplyTimedItemSettings(bool Reset) {
}

void AOptionBase::ApplyChangedValue(const UObject* WorldContextObject) {
}


