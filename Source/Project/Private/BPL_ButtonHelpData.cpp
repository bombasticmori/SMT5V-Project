#include "BPL_ButtonHelpData.h"

UBPL_ButtonHelpData::UBPL_ButtonHelpData() {
}

bool UBPL_ButtonHelpData::OnClickedBtnHelpFunc(E_BTN_HELP_MAPPING_KEY_TYPE InMappingType, int32 InIconIdx) {
    return false;
}

bool UBPL_ButtonHelpData::IsKeyboardIconDraw_ByRichTextTag(const FString& InTagName) {
    return false;
}

bool UBPL_ButtonHelpData::IsExternalFontKey(FKey InKey) {
    return false;
}

bool UBPL_ButtonHelpData::IsAxisMapping_ByMappingEnum(E_BTN_HELP_MAPPING_KEY_TYPE InMappingType) {
    return false;
}

FString UBPL_ButtonHelpData::GetPadBtnTexturePath_ByOptionSetting(E_OPTION_CONTENT_BUTTON_ICON_TYPE InIconType, E_BTN_ICON_SIZE InIconSize) {
    return TEXT("");
}

UObject* UBPL_ButtonHelpData::GetPadBtnTexture_ByOptionSetting(E_OPTION_CONTENT_BUTTON_ICON_TYPE InIconType, E_BTN_ICON_SIZE InIconSize) {
    return NULL;
}

E_BTN_HELP_MOUSE_ICON_TYPE UBPL_ButtonHelpData::GetMouseIconType_ByRichTextTag(const FString& InTagName) {
    return E_BTN_HELP_MOUSE_ICON_TYPE::RIGHT_MOUSE_BUTTON;
}

E_BTN_HELP_MOUSE_ICON_TYPE UBPL_ButtonHelpData::GetMouseIconType_ByFKey(FKey InKey) {
    return E_BTN_HELP_MOUSE_ICON_TYPE::RIGHT_MOUSE_BUTTON;
}

TArray<int32> UBPL_ButtonHelpData::GetKeyboardIconTexUV(E_BTN_ICON_SIZE InIconSize) {
    return TArray<int32>();
}

FSlateFontInfo UBPL_ButtonHelpData::GetKeyboardIconTextFont(int32 InIconSize) {
    return FSlateFontInfo{};
}

int32 UBPL_ButtonHelpData::GetKeyboardIconDispNum_ByRichTextTag(const FString& InTagName) {
    return 0;
}

TArray<FString> UBPL_ButtonHelpData::GetKeyboardHelpText_ByRichTextTag(const FString& InTagName) {
    return TArray<FString>();
}

TArray<FString> UBPL_ButtonHelpData::GetKeyboardHelpText_ByMappingEnum(E_BTN_HELP_MAPPING_KEY_TYPE InMappingType) {
    return TArray<FString>();
}

TArray<int32> UBPL_ButtonHelpData::GetKeyboardHelpSsPlayerFrame(const FString& InTagName, int32 InIconSize) {
    return TArray<int32>();
}

FLinearColor UBPL_ButtonHelpData::GetExternalFontTexUV_ByMappingEnum(FKey InKey) {
    return FLinearColor{};
}

FText UBPL_ButtonHelpData::GetButtonHelpMessage(E_BTN_HELP_MSG_TYPE InMsgtype) {
    return FText::GetEmpty();
}

FVector2D UBPL_ButtonHelpData::GetBtnIconWidgetSize_ByRichTextTag(const FString& InTagName, bool IsGamePad, int32 InIconSize) {
    return FVector2D{};
}

FVector2D UBPL_ButtonHelpData::GetBtnHelpTexUV_ByMappingEnum(E_BTN_HELP_MAPPING_KEY_TYPE InMappingType) {
    return FVector2D{};
}

int32 UBPL_ButtonHelpData::GetBtnHelpSortOrder_ByMappingEnum(E_BTN_HELP_DIR InDirection, E_BTN_HELP_MAPPING_KEY_TYPE InMappingType) {
    return 0;
}

int32 UBPL_ButtonHelpData::GetBtnHelpMaxNum(E_BTN_HELP_DIR InDirection) {
    return 0;
}

TArray<FKey> UBPL_ButtonHelpData::GetBtnHelpKeyList_ByMappingEnum(E_BTN_HELP_MAPPING_KEY_TYPE InMappingType, bool IsGamePad) {
    return TArray<FKey>();
}

E_BTN_HELP_MAPPING_KEY_TYPE UBPL_ButtonHelpData::GetActionMappingIconType_ByRichTextTag(const FString& InTagName) {
    return E_BTN_HELP_MAPPING_KEY_TYPE::None;
}


