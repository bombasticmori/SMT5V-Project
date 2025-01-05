#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "E_GROUP_ID.h"
#include "E_MISSION_INFO_TEXT.h"
#include "E_MISSION_MAJOR_TYPE.h"
#include "E_MISSION_STATE.h"
#include "E_MISSION_TYPE.h"
#include "E_TIME_ATTACK_MISSION_STATE.h"
#include "MissionData.h"
#include "MissionTargetIcon.h"
#include "MissionTimeAttackInfo.h"
#include "MissionUpdateInfo.h"
#include "ScriptMessage.h"
#include "BPL_MissionData.generated.h"

UCLASS(Blueprintable)
class UBPL_MissionData : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBPL_MissionData();

    UFUNCTION(BlueprintCallable)
    static void UpdateCompleteFlags(int32 MissionId);
    
    UFUNCTION(BlueprintCallable)
    static void TimeAttackReachedGoal(int32 MissionId);
    
    UFUNCTION(BlueprintCallable)
    static bool TimeAttackMissionUpdateMoonAge(int32 Add);
    
    UFUNCTION(BlueprintCallable)
    static void StartTimeAttackMission_CPP(int32 MissionId);
    
    UFUNCTION(BlueprintCallable)
    static void ShowMissionTargetIconAll(int32 MissionId);
    
    UFUNCTION(BlueprintCallable)
    static void ShowMissionTargetIcon(int32 MissionId, int32 iconIndex);
    
    UFUNCTION(BlueprintCallable)
    static void SetMissionGeneralCount(int32 MissionId, int32 countIndex, int32 Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetMissionCompleteInfo(int32 MissionId);
    
    UFUNCTION(BlueprintCallable)
    static void SetIsLogUpdated(int32 MissionId, bool NewIsLogUpdated);
    
    UFUNCTION(BlueprintCallable)
    static void RemoveRadarFromTargetIconAll(int32 MissionId);
    
    UFUNCTION(BlueprintCallable)
    static void RegisterRadarToTargetIconAll(int32 MissionId);
    
    UFUNCTION(BlueprintCallable)
    static void OnMovedToOtherMapInTimeAttack(int32 MissionId);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FMissionUpdateInfo> MakeUpdateInfoList();
    
    UFUNCTION(BlueprintCallable)
    static TArray<FMissionTimeAttackInfo> MakeTimeAttackInfoList();
    
    UFUNCTION(BlueprintCallable)
    static TArray<int32> MakeReportableList();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsRyuketsuWarpLockedByMission();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsLogUpdated(int32 MissionId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsInTimeAttack(int32 MissionId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsInOtherTimeAttack(int32 myMissionId, int32& outOtherMissionId);
    
    UFUNCTION(BlueprintCallable)
    static void InitMissionData();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static E_TIME_ATTACK_MISSION_STATE GetTimeAttackState(int32 MissionId);
    
    UFUNCTION(BlueprintCallable)
    static TArray<int32> GetTimeAttackEnemyList();
    
    UFUNCTION(BlueprintCallable)
    static TArray<E_GROUP_ID> GetTimeAttackEnemyGroupList();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetMissionVisibleTargetIconNum(int32 MissionId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText GetMissionTypeText(E_MISSION_TYPE Type);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<FMissionTargetIcon> GetMissionTargetIconAll(int32 MissionId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FMissionTargetIcon GetMissionTargetIcon(int32 MissionId, int32 iconIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static E_MISSION_STATE GetMissionState(int32 MissionId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FScriptMessage GetMissionRewardMsg(int32 MissionId, int32& outTag1, int32& outTag2);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FScriptMessage GetMissionNameMsg(int32 MissionId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText GetMissionName(int32 MissionId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetMissionNakamaDevilId(int32 MissionId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText GetMissionMajorTypeText(E_MISSION_MAJOR_TYPE Type);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FScriptMessage GetMissionInfoTagMessage(int32 MissionId, E_MISSION_INFO_TEXT infoText);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetMissionIdMax();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetMissionHuntCount(int32 MissionId, int32 DevilID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FScriptMessage GetMissionHelpMessage(int32 MissionId, FText& outPlaceText1, FText& outPlaceText2, FText& outPlaceText3);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetMissionGeneralCount(int32 MissionId, int32 countIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText GetMissionExplainText(int32 MissionId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FScriptMessage GetMissionExplainMsg(int32 MissionId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetMissionDataMax();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FMissionData GetMissionData(int32 ID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FScriptMessage GetMissionClientNameMsg(int32 MissionId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText GetMissionClientName(int32 MissionId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetIconLocationForReport(int32 MissionId, int32& OutMapId, int32& OutAreaId, FVector& OutLocation, float& outZoom);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetCreationModeExp(int32 MissionId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetCenterOfVisibleTargetIcons(int32 MissionId, bool isMessageWindow, int32& OutNum, int32& OutMapId, int32& OutAreaId, FVector& OutLocation, float& outZoom);
    
    UFUNCTION(BlueprintCallable)
    static void FinishTimeAttackMission_CPP(int32 MissionId);
    
    UFUNCTION(BlueprintCallable)
    static void EntryMission(int32 MissionId);
    
    UFUNCTION(BlueprintCallable)
    static void CompleteMission(int32 MissionId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CheckViewMissionCompleteInfo(int32 MissionId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CheckTimeAttackReportable(int32 MissionId, bool& outSuccess);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CheckMissionNewIcon(int32 MissionId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CheckMissionEntryCond(int32 MissionId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CheckMissionEntry(int32 MissionId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CheckMissionCompleteCond(int32 MissionId, bool checkEntryComplete);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CheckMissionComplete(int32 MissionId);
    
    UFUNCTION(BlueprintCallable)
    static void ChangeMissionNewIcon(int32 MissionId, bool isView);
    
    UFUNCTION(BlueprintCallable)
    static void AddMissionHuntCount(int32 DevilID, int32 Add);
    
    UFUNCTION(BlueprintCallable)
    static void AddMissionGeneralCount(int32 MissionId, int32 countIndex, int32 Add);
    
};

