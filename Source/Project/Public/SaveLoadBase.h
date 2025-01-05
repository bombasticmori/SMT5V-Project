#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "E_OldNewRoute.h"
#include "E_SHISEIJO.h"
#include "SaveLoadHeaderData.h"
#include "SaveLoadBase.generated.h"

UCLASS(Blueprintable)
class PROJECT_API ASaveLoadBase : public AActor {
    GENERATED_BODY()
public:
    ASaveLoadBase(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    bool UpdateLuciferDefeatedForSystemData();
    
    UFUNCTION(BlueprintCallable)
    void UnlockShiseijoBible();
    
    UFUNCTION(BlueprintCallable)
    void StartHeaderLoadNonAsync();
    
    UFUNCTION(BlueprintCallable)
    void StartHeaderLoad();
    
    UFUNCTION(BlueprintCallable)
    void StartDataSave(int32 Index, bool isInheritSave);
    
    UFUNCTION(BlueprintCallable)
    void StartDataLoad(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    void ResetLuciferDefeatedForSystemData();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool NeedShiseijoBibleMsg(const E_SHISEIJO& shiseijo);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsValidHeaderSlotIndex(int32 Index);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsUnlockedShiseijoBible(const E_SHISEIJO& shiseijo);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsTokyoKeyFreeSave();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSavedSlot(int32 Index);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsNotLimitedByTrialVersion(int32 Index);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInstalledAreaSave(int32 Index);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInheritSlot(int32 Index);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEnoughDlcContents(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    void IsEndHeaderLoad(bool& complete, bool& Success);
    
    UFUNCTION(BlueprintCallable)
    void IsEndDataSave(bool& complete, bool& Success);
    
    UFUNCTION(BlueprintCallable)
    void IsEndDataLoad(bool& complete, bool& Success);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEnableCreationMode();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCompatibleLanguageData(int32 Index);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSlotIndexForActivityStart(E_OldNewRoute route);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetLocationMessageID();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetLatestTimeStampSlotIndex();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetLastSelectSlotIndex();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetHeaderSlotLength();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSaveLoadHeaderData GetHeaderData(int32 Index);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FString GetDefaultGivenName();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FString GetDefaultFamilyName();
    
    UFUNCTION(BlueprintCallable)
    void EntryBibleByShiseijo(const E_SHISEIJO& shiseijo);
    
};

