#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "E_MOON_AGE.h"
#include "E_OldNewRoute.h"
#include "BPL_GameData.generated.h"

class UObject;

UCLASS(Blueprintable)
class UBPL_GameData : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBPL_GameData();

    UFUNCTION(BlueprintCallable)
    static bool UtsusemiSortSkillBufferSort(int32 InSortKind, int32 InSortType, int32 InPriority);
    
    UFUNCTION(BlueprintCallable)
    static void UpdateTotalGameTime(float DeltaTime);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void StoreActivityIDtoGameData(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static bool SetUtsusemiSortUnusedFlag(bool inFlag);
    
    UFUNCTION(BlueprintCallable)
    static bool SetUtsusemiSortSkillId(int32 InSkillId);
    
    UFUNCTION(BlueprintCallable)
    static int32 SetUtsusemiSortSkillBuffer(int32 InDevilId);
    
    UFUNCTION(BlueprintCallable)
    static bool SetUIListAnimationFadeType(int32 InType);
    
    UFUNCTION(BlueprintCallable)
    static bool SetReleaseAllBuyItemFlag(bool IsRelease);
    
    UFUNCTION(BlueprintCallable)
    static void SetOldNewRouteFromEventFlag();
    
    UFUNCTION(BlueprintCallable)
    static void SetOldNewRoute(E_OldNewRoute inOldNewRoute);
    
    UFUNCTION(BlueprintCallable)
    static bool SetNeedDlcCheckAndAnnounceFlag(bool IsNeed, bool IsForce);
    
    UFUNCTION(BlueprintCallable)
    static void SetMoonAge(E_MOON_AGE moonAge);
    
    UFUNCTION(BlueprintCallable)
    static bool SetIconHelpStatus(int32 InStatus);
    
    UFUNCTION(BlueprintCallable)
    static bool SetCampWheelValue(float InValue);
    
    UFUNCTION(BlueprintCallable)
    static bool SetCampUtsusemiSortType(int32 InSortKind);
    
    UFUNCTION(BlueprintCallable)
    static bool SetCampUtsusemiSortAscendingType(bool InAscendingType);
    
    UFUNCTION(BlueprintCallable)
    static bool SetCampMenuNewIconFlag(int32 InMenuIndex);
    
    UFUNCTION(BlueprintCallable)
    static bool SetCampHelpOpenedByIndex(int32 InIndex);
    
    UFUNCTION(BlueprintCallable)
    static bool SetCampHelpOpened(int32 InMessageId);
    
    UFUNCTION(BlueprintCallable)
    static bool SetCampHelpNewIconFlag(int32 InMessageId, bool inFlag);
    
    UFUNCTION(BlueprintCallable)
    static bool SetCampHelpClosedByIndex(int32 InIndex);
    
    UFUNCTION(BlueprintCallable)
    static bool SetCampHelpAllOpened();
    
    UFUNCTION(BlueprintCallable)
    static bool SetCampHelpAllOnFlag(bool inFlag);
    
    UFUNCTION(BlueprintCallable)
    static bool SetCampHelpAllClosed();
    
    UFUNCTION(BlueprintCallable)
    static bool SetBtnHelpInitIconMode(bool IsGamePad);
    
    UFUNCTION(BlueprintCallable)
    static bool SetBtnHelpIconModeTick(bool IsActiveTick);
    
    UFUNCTION(BlueprintCallable)
    static bool Set_Debug_DLC_ClearAnnounceFlag(bool InParam);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void RestoreActivityIDfromGameData(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static bool ResetUtsusemiSortSkillBuffer_AllAttr();
    
    UFUNCTION(BlueprintCallable)
    static bool ResetUtsusemiSortSkillBuffer(int32 InPriority);
    
    UFUNCTION(BlueprintCallable)
    static bool IsCampMenuNewIconOpened(int32 InMenuIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsCampHelpOpenedByIndex(int32 InIndex);
    
    UFUNCTION(BlueprintCallable)
    static bool IsCampHelpOpened(int32 InMessageId);
    
    UFUNCTION(BlueprintCallable)
    static bool IsCampHelpNewIconFlag(int32 InMessageId);
    
    UFUNCTION(BlueprintCallable)
    static bool IsBootingIconHelp();
    
    UFUNCTION(BlueprintCallable)
    static void InitRenewalNewGame();
    
    UFUNCTION(BlueprintCallable)
    static void InitReincarnationNewGame();
    
    UFUNCTION(BlueprintCallable)
    static void InitNewGame();
    
    UFUNCTION(BlueprintCallable)
    static bool InitializeUtsusemiSortSkillBuffer_AllAttr();
    
    UFUNCTION(BlueprintCallable)
    static bool InitializeUtsusemiSortSkillBuffer(int32 InPriority);
    
    UFUNCTION(BlueprintCallable)
    static void InitCreationNewGame();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetUtsusemiSortUnusedFlag();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetUtsusemiSortSkillId();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetUIListAnimationFadeType();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetTotalGameTime();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetReleaseAllBuyItemFlag();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static E_OldNewRoute GetOldNewRoute();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetNeedDlcCheckAndAnnounceFlag();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static E_MOON_AGE GetMoonAge();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetIconHelpStatus();
    
    UFUNCTION(BlueprintCallable)
    static float GetCampWheelValue();
    
    UFUNCTION(BlueprintCallable)
    static int32 GetCampUtsusemiSortType();
    
    UFUNCTION(BlueprintCallable)
    static bool GetCampUtsusemiSortAscendingType();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetCampHelpAllOnFlag();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetBtnHelpInitIconMode();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetBtnHelpIconModeTick();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool Get_Debug_DLC_ClearAnnounceFlag();
    
    UFUNCTION(BlueprintCallable)
    static void ClearTotalGameTime();
    
    UFUNCTION(BlueprintCallable)
    static void AddMoonAge(const int32 addValue);
    
};

