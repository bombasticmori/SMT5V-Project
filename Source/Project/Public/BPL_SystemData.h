#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=IntPoint -FallbackName=IntPoint
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "E_GAME_DIFFICULTY.h"
#include "E_OPTION_BATTLE_PRODUCTION_TYPE.h"
#include "E_OPTION_COMMON_SELECT_TYPE.h"
#include "E_OPTION_CONTENT_BATTLE_ACTION_TYPE.h"
#include "E_OPTION_CONTENT_BUTTON_ICON_TYPE.h"
#include "E_OPTION_CONTENT_CONTROL_TYPE.h"
#include "E_OPTION_CONTENT_FOV_TYPE.h"
#include "E_OPTION_CONTENT_FRAME_RATE_TYPE.h"
#include "E_OPTION_CONTENT_ITEM_PRIORITIZE_TYPE.h"
#include "E_OPTION_CONTENT_SCREEN_MODE.h"
#include "E_OPTION_CONTENT_SPEED_TYPE.h"
#include "E_OPTION_CONTENT_STICK_PUSH_TYPE.h"
#include "E_OPTION_MESSAGE_SPEED_TYPE.h"
#include "BPL_SystemData.generated.h"

class UObject;

UCLASS(Blueprintable)
class PROJECT_API UBPL_SystemData : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBPL_SystemData();

    UFUNCTION(BlueprintCallable)
    static void SetVoiceVolume(const float Volume);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetVoiceLanguage(const UObject* WorldContextObject, const uint8 Language);
    
    UFUNCTION(BlueprintCallable)
    static void setStrictTricks(const uint8 Type);
    
    UFUNCTION(BlueprintCallable)
    static void SetSkillShorteningType(const E_OPTION_BATTLE_PRODUCTION_TYPE Type);
    
    UFUNCTION(BlueprintCallable)
    static void SetSkillDisplayPanelType(const E_OPTION_COMMON_SELECT_TYPE Type);
    
    UFUNCTION(BlueprintCallable)
    static void SetSEVolume(const float Volume);
    
    UFUNCTION(BlueprintCallable)
    static void setMoveDisplayPanel(const E_OPTION_COMMON_SELECT_TYPE Type);
    
    UFUNCTION(BlueprintCallable)
    static void setMoveDisplayOther(const E_OPTION_COMMON_SELECT_TYPE Type);
    
    UFUNCTION(BlueprintCallable)
    static void setMoveDisplayMinimap(const E_OPTION_COMMON_SELECT_TYPE Type);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetMotionBlurShowFlagInGame(const UObject* WorldContextObject, const bool NewFlag);
    
    UFUNCTION(BlueprintCallable)
    static void setMessageSpeedType(const E_OPTION_MESSAGE_SPEED_TYPE tyep);
    
    UFUNCTION(BlueprintCallable)
    static void SetMasterVolume(const float Volume);
    
    UFUNCTION(BlueprintCallable)
    static void setMakkaTricks(const uint8 Type);
    
    UFUNCTION(BlueprintCallable)
    static void SetLuciferDefeated(const bool flag);
    
    UFUNCTION(BlueprintCallable)
    static void setLastSelectSlotIndex(const uint8 Index);
    
    UFUNCTION(BlueprintCallable)
    static void SetFontSizeOffset(const float Size);
    
    UFUNCTION(BlueprintCallable)
    static void setExperienceTricks(const uint8 Type);
    
    UFUNCTION(BlueprintCallable)
    static void SetEnvVolume(const float Volume);
    
    UFUNCTION(BlueprintCallable)
    static void SetDifficulty(const E_GAME_DIFFICULTY diff);
    
    UFUNCTION(BlueprintCallable)
    static void SetControllerVibration(const uint8 is_vib);
    
    UFUNCTION(BlueprintCallable)
    static void SetCametaInputLR(const uint8 Type);
    
    UFUNCTION(BlueprintCallable)
    static void SetCameraSpeed(const float speed);
    
    UFUNCTION(BlueprintCallable)
    static void SetCameraReverseUD(const uint8 reverse);
    
    UFUNCTION(BlueprintCallable)
    static void SetCameraReverseLR(const uint8 reverse);
    
    UFUNCTION(BlueprintCallable)
    static void SetCameraCtrlSpeed(const uint8 Type);
    
    UFUNCTION(BlueprintCallable)
    static void SetCameraAutoCentering(const uint8 is_auto);
    
    UFUNCTION(BlueprintCallable)
    static void SetBGMVolume(const float Volume);
    
    UFUNCTION(BlueprintCallable)
    static void SetBattleTempo(int32 Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetBattleCursorPositionType(const E_OPTION_COMMON_SELECT_TYPE Type);
    
    UFUNCTION(BlueprintCallable)
    static void SetAutoBattleType(const E_OPTION_COMMON_SELECT_TYPE Type);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetAntiAliasingShowFlagInGame(const UObject* WorldContextObject, const bool NewFlag);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetAmbientOcclusionShowFlagInGame(const UObject* WorldContextObject, const bool NewFlag);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void RefrectWindowsOptionSettingsInMainGame(const UObject* WorldContextObject, const bool Boot);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void RefrectOptionSettingsInMainGame(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void RecordDLCAnnounced();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void OverrideOptionSettingByEnableDLC(const UObject* WorldContextObject, const FName& dlcTag, bool& changed);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void OverrideOptionSettingByDisableDLC(const UObject* WorldContextObject, const FName& dlcTag, bool& changed);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsAnnoucedDLC(int32 Index);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static E_OPTION_COMMON_SELECT_TYPE GetWeakAutoBattle();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static E_OPTION_COMMON_SELECT_TYPE GetVSyncType();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetVoiceVolume();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static uint8 GetVoiceLanguage();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static uint8 GetStrictTricks();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static uint8 GetStickSensitivity();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static E_OPTION_COMMON_SELECT_TYPE GetSkippingSkillDirection();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static E_OPTION_CONTENT_SPEED_TYPE GetSkillSpeedNormal();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static E_OPTION_CONTENT_SPEED_TYPE GetSkillSpeedDecide();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static E_OPTION_CONTENT_SPEED_TYPE GetSkillSpeedAuto();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static E_OPTION_BATTLE_PRODUCTION_TYPE GetSkillShorteningType();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static E_OPTION_COMMON_SELECT_TYPE GetSkillDisplayPanelType();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetSEVolume();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static E_OPTION_CONTENT_SCREEN_MODE GetScreenMode();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static E_OPTION_COMMON_SELECT_TYPE GetRotateMiniMapType();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FIntPoint GetResolution(const E_OPTION_CONTENT_SCREEN_MODE screenType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static E_OPTION_COMMON_SELECT_TYPE GetNearbyObjectVisibility();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static E_OPTION_CONTENT_CONTROL_TYPE GetMoviewSkipType();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static E_OPTION_COMMON_SELECT_TYPE GetMovieSubtitleType();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static E_OPTION_COMMON_SELECT_TYPE GetMoveMagatsuhiGauge();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static E_OPTION_COMMON_SELECT_TYPE GetMoveDisplayPanel();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static E_OPTION_COMMON_SELECT_TYPE GetMoveDisplayOther();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static E_OPTION_COMMON_SELECT_TYPE GetMoveDisplayMinimap();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static uint8 GetMouseSensitivity();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static E_OPTION_COMMON_SELECT_TYPE GetMotionBlurType();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static E_OPTION_MESSAGE_SPEED_TYPE GetMessageSpeedType();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static E_OPTION_COMMON_SELECT_TYPE GetMessageAutoMaintain();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetMasterVolume();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static uint8 GetMakkaTricks();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetLuciferDefeated();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static E_OPTION_COMMON_SELECT_TYPE GetLoadGamePause();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static uint8 GetLastSelectSlotIndex();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetL10NName();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static E_OPTION_CONTENT_FRAME_RATE_TYPE GetFrameRateType();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static E_OPTION_CONTENT_FOV_TYPE GetFOVType();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetFontSizeOffset();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static E_OPTION_CONTENT_STICK_PUSH_TYPE GetFieldPushRStickType();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static E_OPTION_CONTENT_STICK_PUSH_TYPE GetFieldPushLStickType();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static uint8 GetExperienceTricks();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static E_OPTION_COMMON_SELECT_TYPE GetEstomaConfirm();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetEnvVolume();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static uint8 GetDisplaySelection();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static uint8 GetDisplayBrightness();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static E_GAME_DIFFICULTY GetDifficulty();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static E_OPTION_CONTENT_CONTROL_TYPE GetDecideControlType();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static uint8 GetControllerVibration();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static uint8 GetCametaInputLR();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetCameraSpeed();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static uint8 GetCameraReverseUD();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static uint8 GetCameraReverseLR();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static uint8 GetCameraCtrlSpeed();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static uint8 GetCameraAutoCentering();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static E_OPTION_CONTENT_BUTTON_ICON_TYPE GetButtonIconType();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static uint8 GetBrightness();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetBGMVolume();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetBattleTempo();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static E_OPTION_CONTENT_ITEM_PRIORITIZE_TYPE GetBattleItemSortType();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static E_OPTION_COMMON_SELECT_TYPE GetBattleCursorPositionType();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static E_OPTION_COMMON_SELECT_TYPE GetAutoBattleType();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static E_OPTION_CONTENT_BATTLE_ACTION_TYPE GetAutoBattleActionType();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static E_OPTION_COMMON_SELECT_TYPE GetAntialiasingType();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static E_OPTION_COMMON_SELECT_TYPE GetAmbientOcclusionType();
    
    UFUNCTION(BlueprintCallable)
    static void DebugOverrideMouseInputScale(float Settings);
    
    UFUNCTION(BlueprintCallable)
    static void ClearDLCAnnoucedFlag();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ApplySystemDefaultValue(const UObject* WorldContextObject);
    
};

