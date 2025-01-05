#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "E_ALIGNMENT.h"
#include "E_GAME_START_MODE.h"
#include "E_SaveExistsResult.h"
#include "E_SaveListType.h"
#include "SaveLoadHeaderData.h"
#include "BPL_SaveLoad.generated.h"

UCLASS(Blueprintable)
class PROJECT_API UBPL_SaveLoad : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBPL_SaveLoad();

    UFUNCTION(BlueprintCallable)
    static bool WaitSaveAsync();
    
    UFUNCTION(BlueprintCallable)
    static bool WaitLoadAsync();
    
    UFUNCTION(BlueprintCallable)
    static bool WaitLoadAllSaveDataHeaderAsync();
    
    UFUNCTION(BlueprintCallable)
    static bool WaitDeleteAsync();
    
    UFUNCTION(BlueprintCallable)
    static bool WaitCheckAsync();
    
    UFUNCTION(BlueprintCallable)
    static void SaveSystemAsync();
    
    UFUNCTION(BlueprintCallable)
    static void SaveLoadAsyncTaskDelete();
    
    UFUNCTION(BlueprintCallable)
    static void SaveAsync(const int32 ListIndex);
    
    UFUNCTION(BlueprintCallable)
    static bool Save(const int32 ListIndex);
    
    UFUNCTION(BlueprintCallable)
    static void LoadSystemAsync();
    
    UFUNCTION(BlueprintCallable)
    static void LoadAsync(const int32 ListIndex);
    
    UFUNCTION(BlueprintCallable)
    static void LoadAllSaveDataHeaderAsync(const E_SaveListType SaveListType);
    
    UFUNCTION(BlueprintCallable)
    static bool LoadAllSaveDataHeader(const E_SaveListType SaveListType);
    
    UFUNCTION(BlueprintCallable)
    static bool Load(const int32 ListIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsCompletePrepareGettingSaveName();
    
    UFUNCTION(BlueprintCallable)
    static bool isAnySlotSaveData();
    
    UFUNCTION(BlueprintCallable)
    static bool GetSaveResult();
    
    UFUNCTION(BlueprintCallable)
    static TArray<FSaveLoadHeaderData> GetSaveLoadHeaderDataArray();
    
    UFUNCTION(BlueprintCallable)
    static int32 GetSaveFileIndex(const FString& Filename);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetMinDateTimeAutoSaveIndex();
    
    UFUNCTION(BlueprintCallable)
    static int32 GetMaxDateTimeSlotIndex();
    
    UFUNCTION(BlueprintCallable)
    static bool GetLoadResult();
    
    UFUNCTION(BlueprintCallable)
    static bool GetLoadAllSaveDataHeaderResult();
    
    UFUNCTION(BlueprintCallable)
    static bool GetDeleteResult();
    
    UFUNCTION(BlueprintCallable)
    static E_SaveExistsResult GetCheckResult();
    
    UFUNCTION(BlueprintCallable)
    static void DeleteLoadAllSaveDataHeaderTask();
    
    UFUNCTION(BlueprintCallable)
    static void DeleteAsync(const int32 ListIndex);
    
    UFUNCTION(BlueprintCallable)
    static bool Delete(const int32 ListIndex);
    
    UFUNCTION(BlueprintCallable)
    static void debugSetGameStartMode(E_GAME_START_MODE startMode);
    
    UFUNCTION(BlueprintCallable)
    static void debugSetClearRound(const uint8 Count);
    
    UFUNCTION(BlueprintCallable)
    static void debugSetClearAlignment(E_ALIGNMENT Alignment, bool flag);
    
    UFUNCTION(BlueprintCallable)
    static E_SaveExistsResult debugSaveExist(const FString& SaveName);
    
    UFUNCTION(BlueprintCallable)
    static void debugResaveAll();
    
    UFUNCTION(BlueprintCallable)
    static bool debugLoadSlot(const FString& SaveName);
    
    UFUNCTION(BlueprintCallable)
    static void CheckSystemAsync();
    
    UFUNCTION(BlueprintCallable)
    static void CheckAsync(const int32 ListIndex);
    
    UFUNCTION(BlueprintCallable)
    static E_SaveExistsResult Check(const int32 ListIndex);
    
    UFUNCTION(BlueprintCallable)
    static void BindSaveGameInfo();
    
};

