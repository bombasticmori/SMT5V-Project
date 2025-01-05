#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "BtlGardenPointData.h"
#include "E_GARDEN_TALK_TYPE.h"
#include "E_GARDEN_TROPHY_COUNTER_TYPE.h"
#include "E_MINIMAP_POI_ICON.h"
#include "GardenDevilData.h"
#include "TalkRequestItemRankTable.h"
#include "TalkRequestItemTable.h"
#include "GardenTalkPointManager.generated.h"

class UGardenTalkPointManager;

UCLASS(Blueprintable)
class PROJECT_API UGardenTalkPointManager : public UObject {
    GENERATED_BODY()
public:
    UGardenTalkPointManager();

    UFUNCTION(BlueprintCallable)
    bool ShouldDisplayGardenPlayerTalkIcon(E_MINIMAP_POI_ICON& DisplayIconType);
    
    UFUNCTION(BlueprintCallable)
    bool SetGardenTalkInfoFlag_Done(int32 NkmIndex);
    
    UFUNCTION(BlueprintCallable)
    bool ResetGardenTalkFlag(int32 NkmIndex, E_GARDEN_TALK_TYPE FlagType);
    
    UFUNCTION(BlueprintCallable)
    int32 GetGardenTrophyCounter(E_GARDEN_TROPHY_COUNTER_TYPE GardenTrophyCounter);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UGardenTalkPointManager* GetGardenTalkPointManager(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    bool FindMissionIDWithDevilID(int32 DevilID, int32& MissionId);
    
    UFUNCTION(BlueprintCallable)
    bool EnableQuestFlag_ByNkmIndex(int32 NkmIndex);
    
    UFUNCTION(BlueprintCallable)
    bool Debug_ToggleTrustTalkFlag_ByNkmIndex(int32 NkmIndex, bool Enable);
    
    UFUNCTION(BlueprintCallable)
    bool Debug_ToggleQuestTalkFlag_ByNkmIndex(int32 NkmIndex, bool Enable);
    
    UFUNCTION(BlueprintCallable)
    bool Debug_TogglePowerUpTalkFlag_ByNkmIndex(int32 NkmIndex, bool Enable);
    
    UFUNCTION(BlueprintCallable)
    bool Debug_ToggleItemTalkFlag_ByNkmIndex(int32 NkmIndex, bool Enable);
    
    UFUNCTION(BlueprintCallable)
    bool Debug_SetPartyGardenSettings(int32 InPartyTalkPoint);
    
    UFUNCTION(BlueprintCallable)
    bool Debug_SetDevilGardenSettings_ByNkmIndex(int32 NkmIndex, FGardenDevilData InGardenDevilData);
    
    UFUNCTION(BlueprintCallable)
    bool Debug_OutputPartyGardenSettings(int32& OutPartyTalkPoint);
    
    UFUNCTION(BlueprintCallable)
    bool Debug_OutputDevilGardenSettings_ByNkmIndex(int32 NkmIndex, FGardenDevilData& OutGardenDevilData, int32& OutPartyTalkPoint);
    
    UFUNCTION(BlueprintCallable)
    bool Debug_GetGardenItemList(TArray<FTalkRequestItemTable>& OutGardenItemTable, TArray<FTalkRequestItemRankTable>& OutGardenItemRankTable);
    
    UFUNCTION(BlueprintCallable)
    void ClearTempPointBattle();
    
    UFUNCTION(BlueprintCallable)
    void CheckPowerUpMessageStep(int32 NkmIndex, uint8& MessageStep);
    
    UFUNCTION(BlueprintCallable)
    bool CheckGardenTalkInfoFlag_All(TArray<int32>& outFlaggedNkmIndexList);
    
    UFUNCTION(BlueprintCallable)
    bool CheckGardenTalkFlag_ByNkmIndex(int32 NkmIndex, E_MINIMAP_POI_ICON& DisplayIconType);
    
    UFUNCTION(BlueprintCallable)
    bool CheckGardenTalkFlag_Any(E_MINIMAP_POI_ICON& DisplayIconType);
    
    UFUNCTION(BlueprintCallable)
    bool CheckGardenTalkFlag_All(TMap<int32, E_MINIMAP_POI_ICON>& outFlaggedNkmIndexAndIconMap);
    
    UFUNCTION(BlueprintCallable)
    bool CheckGardenPlayerTalkFlags(TArray<int32>& outFlaggedPlayerTalkInfoFlagList);
    
    UFUNCTION(BlueprintCallable)
    void CheckAddPointNewMapGardenPoints(int32 MapReachFlag);
    
    UFUNCTION(BlueprintCallable)
    void AddTempPointBattle(const FBtlGardenPointData& pBtlGardenPointData);
    
    UFUNCTION(BlueprintCallable)
    void AddPointTributeGardenPoints(int32 DevilID, bool IsRare);
    
    UFUNCTION(BlueprintCallable)
    void AddPointStatueGardenPoints();
    
    UFUNCTION(BlueprintCallable)
    void AddPointResultBattle();
    
    UFUNCTION(BlueprintCallable)
    void AddPointQuestGardenPoints();
    
    UFUNCTION(BlueprintCallable)
    void AddPointNewWaypointGardenPoints(int32 ExpectedDevilLevel);
    
    UFUNCTION(BlueprintCallable)
    void AddPointMimanGardenPoints();
    
    UFUNCTION(BlueprintCallable)
    void AddPointMagatsukaDestroyGardenPoints();
    
    UFUNCTION(BlueprintCallable)
    int32 AddGardenTrophyCounter(E_GARDEN_TROPHY_COUNTER_TYPE GardenTrophyCounter);
    
};

