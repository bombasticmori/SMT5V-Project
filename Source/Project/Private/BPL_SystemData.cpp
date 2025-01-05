#include "BPL_SystemData.h"

UBPL_SystemData::UBPL_SystemData() {
}

void UBPL_SystemData::SetVoiceVolume(const float Volume) {
}

void UBPL_SystemData::SetVoiceLanguage(const UObject* WorldContextObject, const uint8 Language) {
}

void UBPL_SystemData::setStrictTricks(const uint8 Type) {
}

void UBPL_SystemData::SetSkillShorteningType(const E_OPTION_BATTLE_PRODUCTION_TYPE Type) {
}

void UBPL_SystemData::SetSkillDisplayPanelType(const E_OPTION_COMMON_SELECT_TYPE Type) {
}

void UBPL_SystemData::SetSEVolume(const float Volume) {
}

void UBPL_SystemData::setMoveDisplayPanel(const E_OPTION_COMMON_SELECT_TYPE Type) {
}

void UBPL_SystemData::setMoveDisplayOther(const E_OPTION_COMMON_SELECT_TYPE Type) {
}

void UBPL_SystemData::setMoveDisplayMinimap(const E_OPTION_COMMON_SELECT_TYPE Type) {
}

void UBPL_SystemData::SetMotionBlurShowFlagInGame(const UObject* WorldContextObject, const bool NewFlag) {
}

void UBPL_SystemData::setMessageSpeedType(const E_OPTION_MESSAGE_SPEED_TYPE tyep) {
}

void UBPL_SystemData::SetMasterVolume(const float Volume) {
}

void UBPL_SystemData::setMakkaTricks(const uint8 Type) {
}

void UBPL_SystemData::SetLuciferDefeated(const bool flag) {
}

void UBPL_SystemData::setLastSelectSlotIndex(const uint8 Index) {
}

void UBPL_SystemData::SetFontSizeOffset(const float Size) {
}

void UBPL_SystemData::setExperienceTricks(const uint8 Type) {
}

void UBPL_SystemData::SetEnvVolume(const float Volume) {
}

void UBPL_SystemData::SetDifficulty(const E_GAME_DIFFICULTY diff) {
}

void UBPL_SystemData::SetControllerVibration(const uint8 is_vib) {
}

void UBPL_SystemData::SetCametaInputLR(const uint8 Type) {
}

void UBPL_SystemData::SetCameraSpeed(const float speed) {
}

void UBPL_SystemData::SetCameraReverseUD(const uint8 reverse) {
}

void UBPL_SystemData::SetCameraReverseLR(const uint8 reverse) {
}

void UBPL_SystemData::SetCameraCtrlSpeed(const uint8 Type) {
}

void UBPL_SystemData::SetCameraAutoCentering(const uint8 is_auto) {
}

void UBPL_SystemData::SetBGMVolume(const float Volume) {
}

void UBPL_SystemData::SetBattleTempo(int32 Value) {
}

void UBPL_SystemData::SetBattleCursorPositionType(const E_OPTION_COMMON_SELECT_TYPE Type) {
}

void UBPL_SystemData::SetAutoBattleType(const E_OPTION_COMMON_SELECT_TYPE Type) {
}

void UBPL_SystemData::SetAntiAliasingShowFlagInGame(const UObject* WorldContextObject, const bool NewFlag) {
}

void UBPL_SystemData::SetAmbientOcclusionShowFlagInGame(const UObject* WorldContextObject, const bool NewFlag) {
}

void UBPL_SystemData::RefrectWindowsOptionSettingsInMainGame(const UObject* WorldContextObject, const bool Boot) {
}

void UBPL_SystemData::RefrectOptionSettingsInMainGame(const UObject* WorldContextObject) {
}

void UBPL_SystemData::RecordDLCAnnounced() {
}

void UBPL_SystemData::OverrideOptionSettingByEnableDLC(const UObject* WorldContextObject, const FName& dlcTag, bool& changed) {
}

void UBPL_SystemData::OverrideOptionSettingByDisableDLC(const UObject* WorldContextObject, const FName& dlcTag, bool& changed) {
}

bool UBPL_SystemData::IsAnnoucedDLC(int32 Index) {
    return false;
}

E_OPTION_COMMON_SELECT_TYPE UBPL_SystemData::GetWeakAutoBattle() {
    return E_OPTION_COMMON_SELECT_TYPE::E_OPTION_COMMON_SELECT_TYPE_DO;
}

E_OPTION_COMMON_SELECT_TYPE UBPL_SystemData::GetVSyncType() {
    return E_OPTION_COMMON_SELECT_TYPE::E_OPTION_COMMON_SELECT_TYPE_DO;
}

float UBPL_SystemData::GetVoiceVolume() {
    return 0.0f;
}

uint8 UBPL_SystemData::GetVoiceLanguage() {
    return 0;
}

uint8 UBPL_SystemData::GetStrictTricks() {
    return 0;
}

uint8 UBPL_SystemData::GetStickSensitivity() {
    return 0;
}

E_OPTION_COMMON_SELECT_TYPE UBPL_SystemData::GetSkippingSkillDirection() {
    return E_OPTION_COMMON_SELECT_TYPE::E_OPTION_COMMON_SELECT_TYPE_DO;
}

E_OPTION_CONTENT_SPEED_TYPE UBPL_SystemData::GetSkillSpeedNormal() {
    return E_OPTION_CONTENT_SPEED_TYPE::E_OPTION_CONTENT_SPEED_TYPE_X1;
}

E_OPTION_CONTENT_SPEED_TYPE UBPL_SystemData::GetSkillSpeedDecide() {
    return E_OPTION_CONTENT_SPEED_TYPE::E_OPTION_CONTENT_SPEED_TYPE_X1;
}

E_OPTION_CONTENT_SPEED_TYPE UBPL_SystemData::GetSkillSpeedAuto() {
    return E_OPTION_CONTENT_SPEED_TYPE::E_OPTION_CONTENT_SPEED_TYPE_X1;
}

E_OPTION_BATTLE_PRODUCTION_TYPE UBPL_SystemData::GetSkillShorteningType() {
    return E_OPTION_BATTLE_PRODUCTION_TYPE::E_OPTION_BATTLE_PRODUCTION_TYPE_A_BUTTON;
}

E_OPTION_COMMON_SELECT_TYPE UBPL_SystemData::GetSkillDisplayPanelType() {
    return E_OPTION_COMMON_SELECT_TYPE::E_OPTION_COMMON_SELECT_TYPE_DO;
}

float UBPL_SystemData::GetSEVolume() {
    return 0.0f;
}

E_OPTION_CONTENT_SCREEN_MODE UBPL_SystemData::GetScreenMode() {
    return E_OPTION_CONTENT_SCREEN_MODE::E_OPTION_CONTENT_SCREEN_MODE_FULL_SCREEN;
}

E_OPTION_COMMON_SELECT_TYPE UBPL_SystemData::GetRotateMiniMapType() {
    return E_OPTION_COMMON_SELECT_TYPE::E_OPTION_COMMON_SELECT_TYPE_DO;
}

FIntPoint UBPL_SystemData::GetResolution(const E_OPTION_CONTENT_SCREEN_MODE screenType) {
    return FIntPoint{};
}

E_OPTION_COMMON_SELECT_TYPE UBPL_SystemData::GetNearbyObjectVisibility() {
    return E_OPTION_COMMON_SELECT_TYPE::E_OPTION_COMMON_SELECT_TYPE_DO;
}

E_OPTION_CONTENT_CONTROL_TYPE UBPL_SystemData::GetMoviewSkipType() {
    return E_OPTION_CONTENT_CONTROL_TYPE::E_OPTION_CONTENT_CONTROL_TYPE_A;
}

E_OPTION_COMMON_SELECT_TYPE UBPL_SystemData::GetMovieSubtitleType() {
    return E_OPTION_COMMON_SELECT_TYPE::E_OPTION_COMMON_SELECT_TYPE_DO;
}

E_OPTION_COMMON_SELECT_TYPE UBPL_SystemData::GetMoveMagatsuhiGauge() {
    return E_OPTION_COMMON_SELECT_TYPE::E_OPTION_COMMON_SELECT_TYPE_DO;
}

E_OPTION_COMMON_SELECT_TYPE UBPL_SystemData::GetMoveDisplayPanel() {
    return E_OPTION_COMMON_SELECT_TYPE::E_OPTION_COMMON_SELECT_TYPE_DO;
}

E_OPTION_COMMON_SELECT_TYPE UBPL_SystemData::GetMoveDisplayOther() {
    return E_OPTION_COMMON_SELECT_TYPE::E_OPTION_COMMON_SELECT_TYPE_DO;
}

E_OPTION_COMMON_SELECT_TYPE UBPL_SystemData::GetMoveDisplayMinimap() {
    return E_OPTION_COMMON_SELECT_TYPE::E_OPTION_COMMON_SELECT_TYPE_DO;
}

uint8 UBPL_SystemData::GetMouseSensitivity() {
    return 0;
}

E_OPTION_COMMON_SELECT_TYPE UBPL_SystemData::GetMotionBlurType() {
    return E_OPTION_COMMON_SELECT_TYPE::E_OPTION_COMMON_SELECT_TYPE_DO;
}

E_OPTION_MESSAGE_SPEED_TYPE UBPL_SystemData::GetMessageSpeedType() {
    return E_OPTION_MESSAGE_SPEED_TYPE::E_OPTION_SPEED_TYPE_STANDARD;
}

E_OPTION_COMMON_SELECT_TYPE UBPL_SystemData::GetMessageAutoMaintain() {
    return E_OPTION_COMMON_SELECT_TYPE::E_OPTION_COMMON_SELECT_TYPE_DO;
}

float UBPL_SystemData::GetMasterVolume() {
    return 0.0f;
}

uint8 UBPL_SystemData::GetMakkaTricks() {
    return 0;
}

bool UBPL_SystemData::GetLuciferDefeated() {
    return false;
}

E_OPTION_COMMON_SELECT_TYPE UBPL_SystemData::GetLoadGamePause() {
    return E_OPTION_COMMON_SELECT_TYPE::E_OPTION_COMMON_SELECT_TYPE_DO;
}

uint8 UBPL_SystemData::GetLastSelectSlotIndex() {
    return 0;
}

FString UBPL_SystemData::GetL10NName() {
    return TEXT("");
}

E_OPTION_CONTENT_FRAME_RATE_TYPE UBPL_SystemData::GetFrameRateType() {
    return E_OPTION_CONTENT_FRAME_RATE_TYPE::E_OPTION_CONTENT_FRAME_RATE_TYPE_UNLIMITED;
}

E_OPTION_CONTENT_FOV_TYPE UBPL_SystemData::GetFOVType() {
    return E_OPTION_CONTENT_FOV_TYPE::E_OPTION_CONTENT_FOV_TYPE_NARROW;
}

float UBPL_SystemData::GetFontSizeOffset() {
    return 0.0f;
}

E_OPTION_CONTENT_STICK_PUSH_TYPE UBPL_SystemData::GetFieldPushRStickType() {
    return E_OPTION_CONTENT_STICK_PUSH_TYPE::E_OPTION_CONTENT_STICK_PUSH_TYPE_NONE;
}

E_OPTION_CONTENT_STICK_PUSH_TYPE UBPL_SystemData::GetFieldPushLStickType() {
    return E_OPTION_CONTENT_STICK_PUSH_TYPE::E_OPTION_CONTENT_STICK_PUSH_TYPE_NONE;
}

uint8 UBPL_SystemData::GetExperienceTricks() {
    return 0;
}

E_OPTION_COMMON_SELECT_TYPE UBPL_SystemData::GetEstomaConfirm() {
    return E_OPTION_COMMON_SELECT_TYPE::E_OPTION_COMMON_SELECT_TYPE_DO;
}

float UBPL_SystemData::GetEnvVolume() {
    return 0.0f;
}

uint8 UBPL_SystemData::GetDisplaySelection() {
    return 0;
}

uint8 UBPL_SystemData::GetDisplayBrightness() {
    return 0;
}

E_GAME_DIFFICULTY UBPL_SystemData::GetDifficulty() {
    return E_GAME_DIFFICULTY::E_GAME_EASY;
}

E_OPTION_CONTENT_CONTROL_TYPE UBPL_SystemData::GetDecideControlType() {
    return E_OPTION_CONTENT_CONTROL_TYPE::E_OPTION_CONTENT_CONTROL_TYPE_A;
}

uint8 UBPL_SystemData::GetControllerVibration() {
    return 0;
}

uint8 UBPL_SystemData::GetCametaInputLR() {
    return 0;
}

float UBPL_SystemData::GetCameraSpeed() {
    return 0.0f;
}

uint8 UBPL_SystemData::GetCameraReverseUD() {
    return 0;
}

uint8 UBPL_SystemData::GetCameraReverseLR() {
    return 0;
}

uint8 UBPL_SystemData::GetCameraCtrlSpeed() {
    return 0;
}

uint8 UBPL_SystemData::GetCameraAutoCentering() {
    return 0;
}

E_OPTION_CONTENT_BUTTON_ICON_TYPE UBPL_SystemData::GetButtonIconType() {
    return E_OPTION_CONTENT_BUTTON_ICON_TYPE::E_OPTION_CONTENT_BUTTON_ICON_TYPE_DEFAULT;
}

uint8 UBPL_SystemData::GetBrightness() {
    return 0;
}

float UBPL_SystemData::GetBGMVolume() {
    return 0.0f;
}

int32 UBPL_SystemData::GetBattleTempo() {
    return 0;
}

E_OPTION_CONTENT_ITEM_PRIORITIZE_TYPE UBPL_SystemData::GetBattleItemSortType() {
    return E_OPTION_CONTENT_ITEM_PRIORITIZE_TYPE::E_OPTION_CONTENT_ITEM_PRIORITIZE_TYPE_HEAL;
}

E_OPTION_COMMON_SELECT_TYPE UBPL_SystemData::GetBattleCursorPositionType() {
    return E_OPTION_COMMON_SELECT_TYPE::E_OPTION_COMMON_SELECT_TYPE_DO;
}

E_OPTION_COMMON_SELECT_TYPE UBPL_SystemData::GetAutoBattleType() {
    return E_OPTION_COMMON_SELECT_TYPE::E_OPTION_COMMON_SELECT_TYPE_DO;
}

E_OPTION_CONTENT_BATTLE_ACTION_TYPE UBPL_SystemData::GetAutoBattleActionType() {
    return E_OPTION_CONTENT_BATTLE_ACTION_TYPE::E_OPTION_CONTENT_BATTLE_ACTION_TYPE_ATTACK;
}

E_OPTION_COMMON_SELECT_TYPE UBPL_SystemData::GetAntialiasingType() {
    return E_OPTION_COMMON_SELECT_TYPE::E_OPTION_COMMON_SELECT_TYPE_DO;
}

E_OPTION_COMMON_SELECT_TYPE UBPL_SystemData::GetAmbientOcclusionType() {
    return E_OPTION_COMMON_SELECT_TYPE::E_OPTION_COMMON_SELECT_TYPE_DO;
}

void UBPL_SystemData::DebugOverrideMouseInputScale(float Settings) {
}

void UBPL_SystemData::ClearDLCAnnoucedFlag() {
}

void UBPL_SystemData::ApplySystemDefaultValue(const UObject* WorldContextObject) {
}


