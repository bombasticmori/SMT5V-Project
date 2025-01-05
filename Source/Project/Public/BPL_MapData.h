#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "E_MAGATSUKA_STATE.h"
#include "E_NAVI_DEVIL.h"
#include "MapData.h"
#include "MapInfoData.h"
#include "MinimapLandmark.h"
#include "BPL_MapData.generated.h"

class AActor;
class UObject;
class UProjectGameInstanceBase;

UCLASS(Blueprintable)
class PROJECT_API UBPL_MapData : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBPL_MapData();

    UFUNCTION(BlueprintCallable)
    static void UpdateRelicTimer(float deltaSec, bool bMapPause);
    
    UFUNCTION(BlueprintCallable)
    static void UpdateAogamiDebrisTimer(float deltaSec, bool bMapPause);
    
    UFUNCTION(BlueprintCallable)
    static void UnregisterMapSymbolSpawner(AActor* pActor);
    
    UFUNCTION(BlueprintCallable)
    static void UnregisterMapSymbolActors(AActor* pActor);
    
    UFUNCTION(BlueprintCallable)
    static void SetWaitingMapInfo(const TArray<FMapInfoData>& Info);
    
    UFUNCTION(BlueprintCallable)
    static void SetTopCameraHeight(float Height);
    
    UFUNCTION(BlueprintCallable)
    static void SetTimeAttackEncountAreaRandomSeed(int32 SaveId, int32 Seed);
    
    UFUNCTION(BlueprintCallable)
    static void SetTimeAttackEncountAreaKillFlag(int32 SaveId, int32 Index, bool kill);
    
    UFUNCTION(BlueprintCallable)
    static void SetTakaraFlag(int32 ID, bool flag);
    
    UFUNCTION(BlueprintCallable)
    static void SetTakaraBreakFlag(int32 ID, bool flag);
    
    UFUNCTION(BlueprintCallable)
    static void SetShinseiFlagAll(bool flag);
    
    UFUNCTION(BlueprintCallable)
    static void SetShinseiFlag(int32 ID, bool flag);
    
    UFUNCTION(BlueprintCallable)
    static void SetRyuketsuSaveAccess(bool access, FTransform warpPos);
    
    UFUNCTION(BlueprintCallable)
    static void SetRyuketsuOpenAll(bool Open);
    
    UFUNCTION(BlueprintCallable)
    static void SetRyuketsuOpen(int32 ID, bool Open);
    
    UFUNCTION(BlueprintCallable)
    static void SetRyuketsuMinimapIconHideFlag(bool IsHide);
    
    UFUNCTION(BlueprintCallable)
    static void SetRelicTimerAllZero();
    
    UFUNCTION(BlueprintCallable)
    static void SetRelicTimer(int32 ID, float Timer);
    
    UFUNCTION(BlueprintCallable)
    static void SetRelicTableIndex(int32 SaveId, int32 mapId, int32 Index);
    
    UFUNCTION(BlueprintCallable)
    static void SetRelicOnceFlagAll(bool flag);
    
    UFUNCTION(BlueprintCallable)
    static void SetRelicOnceFlag(int32 ID, bool flag);
    
    UFUNCTION(BlueprintCallable)
    static void SetRelicGetIconUpdate(int32 SaveId, bool flag);
    
    UFUNCTION(BlueprintCallable)
    static void SetRelicGetIcon(int32 SaveId, bool flag);
    
    UFUNCTION(BlueprintCallable)
    static void SetRelicFlagAll(bool flag);
    
    UFUNCTION(BlueprintCallable)
    static void SetRelicFlag(int32 ID, bool flag);
    
    UFUNCTION(BlueprintCallable)
    static void SetPlayerPosForSave(FTransform PlayerPos);
    
    UFUNCTION(BlueprintCallable)
    static void SetNearbySymbolCounter(UProjectGameInstanceBase* pGameInst, float counter);
    
    UFUNCTION(BlueprintCallable)
    static void SetNearbySymbolAfterBattle(UProjectGameInstanceBase* pGameInst, bool flag);
    
    UFUNCTION(BlueprintCallable)
    static void SetNaviDevilGimmickUniqueSaveID(int32 SaveId, bool flag);
    
    UFUNCTION(BlueprintCallable)
    static void SetNaviDevilGimmickExistAll(bool exist);
    
    UFUNCTION(BlueprintCallable)
    static void SetNaviDevilGimmickExist(int32 ID, bool exist);
    
    UFUNCTION(BlueprintCallable)
    static void SetMinimapMaskOpenFlagAll(bool flag);
    
    UFUNCTION(BlueprintCallable)
    static bool SetMinimapMaskOpenFlag(int32 minimapMaskID, bool flag);
    
    UFUNCTION(BlueprintCallable)
    static void SetMinimapLandmark(int32 mapId, int32 AreaId, float LocationX, float LocationY);
    
    UFUNCTION(BlueprintCallable)
    static void SetMimanPositionFlag(int32 category, bool Open);
    
    UFUNCTION(BlueprintCallable)
    static void SetMimanFlagAll(bool flag);
    
    UFUNCTION(BlueprintCallable)
    static void SetMimanFlag(int32 ID, bool flag);
    
    UFUNCTION(BlueprintCallable)
    static void SetMapSymbolDeadFlagAll(bool sw);
    
    UFUNCTION(BlueprintCallable)
    static void SetMapSymbolDeadFlag(int32 ID, bool sw);
    
    UFUNCTION(BlueprintCallable)
    static void SetMapID(int32 map_id);
    
    UFUNCTION(BlueprintCallable)
    static void SetMagatsukaState(int32 ID, E_MAGATSUKA_STATE State);
    
    UFUNCTION(BlueprintCallable)
    static void SetLastRyuketsuTableIndex(int32 tableIndex);
    
    UFUNCTION(BlueprintCallable)
    static void SetCurrentNaviDevil(E_NAVI_DEVIL naviDevil);
    
    UFUNCTION(BlueprintCallable)
    static void SetCurrentLevelCustom(bool Enable);
    
    UFUNCTION(BlueprintCallable)
    static void SetCoasterOpenFlagAll(bool flag);
    
    UFUNCTION(BlueprintCallable)
    static void SetCoasterOpenFlag(int32 ID, bool startGimmick, bool flag);
    
    UFUNCTION(BlueprintCallable)
    static void SetBridgeNextMapID(int32 map_id);
    
    UFUNCTION(BlueprintCallable)
    static void SetBridgeNextAreaID(int32 area_id);
    
    UFUNCTION(BlueprintCallable)
    static void SetAreaID(int32 area_id);
    
    UFUNCTION(BlueprintCallable)
    static void SetAogamiDebrisTimerAllZero();
    
    UFUNCTION(BlueprintCallable)
    static void SetAogamiDebrisTimer(int32 tableIndex, float Timer);
    
    UFUNCTION(BlueprintCallable)
    static void SetAogamiDebrisGetIconUpdate(int32 tableIndex, bool flag);
    
    UFUNCTION(BlueprintCallable)
    static void SetAogamiDebrisGetIcon(int32 tableIndex, bool flag);
    
    UFUNCTION(BlueprintCallable)
    static void SetAogamiDebrisFlagAll(bool flag);
    
    UFUNCTION(BlueprintCallable)
    static void SetAogamiDebrisFlag(int32 tableIndex, bool flag);
    
    UFUNCTION(BlueprintCallable)
    static void SetAllMapData(FMapData Data);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SaveMapData_CPP(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void Ryuketsu_AutoOpenAndClose(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void ResetRotatorCount();
    
    UFUNCTION(BlueprintCallable)
    static void ResetRelicGetCounter();
    
    UFUNCTION(BlueprintCallable)
    static void ResetNaviDevilGimmickCheckCounter();
    
    UFUNCTION(BlueprintCallable)
    static void ResetMinimapLandmark();
    
    UFUNCTION(BlueprintCallable)
    static void ResetAogamiDebrisGetCounter();
    
    UFUNCTION(BlueprintCallable)
    static bool RemoveWaitingMapInfo(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    static void RegisterMapSymbolSpawner(AActor* pActor);
    
    UFUNCTION(BlueprintCallable)
    static void RegisterMapSymbolActors(AActor* pActor);
    
    UFUNCTION(BlueprintCallable)
    static void InitNaviDevilGimmickUniqueSaveID();
    
    UFUNCTION(BlueprintCallable)
    static void InitMapData();
    
    UFUNCTION(BlueprintCallable)
    static TArray<FMapInfoData> GetWaitingMapInfo();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetTopCameraHeight();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetTimeAttackEncountAreaRandomSeed(int32 SaveId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<bool> GetTimeAttackEncountAreaKillFlags(int32 SaveId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetTakaraFlagMax();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetTakaraFlag(int32 ID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetTakaraBreakFlag(int32 ID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetShinseiGetNum();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetRyuketsuMinimapIconHideFlag();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetRelicTimer(int32 ID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetRelicSaveMax();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetRelicGetCounter();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetOtherCoasterMinimapID(int32 minimapID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetNearbySymbolCounter(UProjectGameInstanceBase* pGameInst);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetNearbySymbolAfterBattle(UProjectGameInstanceBase* pGameInst);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetNaviDevilID_FromEnum(E_NAVI_DEVIL naviDevil);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetNaviDevilGimmickCheckCounter();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static E_NAVI_DEVIL GetNaviDevilEnum_FromDevilID(int32 DevilID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetMinimapMaskOpenFlag(int32 minimapMaskID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FMinimapLandmark GetMinimapLandmark();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetMimanFoundNum_FromMap(int32 mapId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetMimanFoundNum();
    
    UFUNCTION(BlueprintCallable)
    static TArray<AActor*> GetMapSymbolSpawners();
    
    UFUNCTION(BlueprintCallable)
    static int32 GetMapSymbolParamIndex(int32 DevilID);
    
    UFUNCTION(BlueprintCallable)
    static TArray<AActor*> GetMapSymbolActors();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetMapID();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FMapData GetMapData();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static E_MAGATSUKA_STATE GetMagatsukaState(int32 ID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetMagatsukaBrokenNum();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetLastRyuketsuTableIndex();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName GetDebugMenuPath_ChangeMimanNum();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetCurrentNaviDevilID();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static E_NAVI_DEVIL GetCurrentNaviDevil();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetCoasterSaveID_FromMinimapID(int32 minimapID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetCoasterMinimapID_FromSaveID(int32 SaveId, bool startGimmick);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetBridgeNextMapID();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetBridgeNextAreaID();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetAreaID();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetAogamiDebrisTimer(int32 tableIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetAogamiDebrisGetCounter();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<uint8> GetAllTakaraFlag(int32 ID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<uint8> GetAllTakaraBreakFlag(int32 ID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<E_MAGATSUKA_STATE> GetAllMagatsukaState();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CurrentLevelIsCustom();
    
    UFUNCTION(BlueprintCallable)
    static void ClearWaitingMapInfo();
    
    UFUNCTION(BlueprintCallable)
    static void ClearTimeAttackEncountAreaKillFlag();
    
    UFUNCTION(BlueprintCallable)
    static void ClearMapSymbolParamIndex();
    
    UFUNCTION(BlueprintCallable)
    static void ClearMapSymbolActors();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CheckShinseiFlag(int32 ID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CheckRyuketsuOpen(int32 ID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CheckRelicOnceFlag(int32 ID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CheckRelicGetIcon(int32 SaveId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CheckRelicFlag(int32 ID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CheckNaviDevilGimmickUniqueSaveID(int32 SaveId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CheckNaviDevilGimmickExist(int32 ID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<bool> CheckMimanPositionFlagAll();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CheckMimanPositionFlag(int32 category);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CheckMimanFlag(int32 ID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CheckMapSymbolDeadFlag(int32 ID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CheckCoasterOpenFlag_ByMinimapID(int32 minimapID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CheckCoasterOpenFlag(int32 ID, bool startGimmick);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CheckAogamiDebrisGetIcon(int32 tableIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CheckAogamiDebrisFlag(int32 tableIndex);
    
    UFUNCTION(BlueprintCallable)
    static void AddWaitingMapInfo(const FMapInfoData& Info);
    
    UFUNCTION(BlueprintCallable)
    static void AddRelicGetCounter();
    
    UFUNCTION(BlueprintCallable)
    static void AddNaviDevilGimmickCheckCounter();
    
    UFUNCTION(BlueprintCallable)
    static void AddMapSymbolParamIndex(int32 DevilID, int32 Index);
    
    UFUNCTION(BlueprintCallable)
    static void AddAogamiDebrisGetCounter();
    
};

