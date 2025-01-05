#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GameInstance -FallbackName=GameInstance
#include "OnEventDispatherUpdateButtonIconDelegate.h"
#include "TalkBaseTable.h"
#include "Templates/SubclassOf.h"
#include "ProjectGameInstanceBase.generated.h"

class AActor;
class AEventBase;
class AGardenManager;
class AMapWarpPoint;
class UAchievementManager;
class UActivityManager;
class UDataTable;
class UDebugCameraManager;
class UDebugMenuData;
class UFont;
class UFrameRateManager;
class UGardenTalkPointManager;
class UMMIAsset;
class UMaterialInterface;
class UMinimapManager;
class UProjectDebugManager;
class UProjectGCManager;
class UProjectSoundManager;
class UProjectUIManager;
class UScriptMessageAsset;
class USoundAtomCue;

UCLASS(Blueprintable, NonTransient)
class PROJECT_API UProjectGameInstanceBase : public UGameInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnEventDispatherUpdateButtonIcon OnEventDispather_UpdateButtonIcon;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UProjectGCManager* GCManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UProjectGCManager> GCManagerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UProjectSoundManager* SoundManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGardenTalkPointManager* GardenTalkPointManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AGardenManager* GardenManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UProjectSoundManager> SoundManagerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UProjectUIManager* UIManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UProjectUIManager> UIManagerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAchievementManager* AchievementManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UActivityManager* ActivityManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMinimapManager* MinimapManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFrameRateManager* FrameRateManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* ActionMappingNameDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* AxisMappingNameDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* DefaultActionMappingDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* DefaultAxisMappingDataTable;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UDebugMenuData* m_pDebugMenuDataInst;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UProjectDebugManager* ProjectDebugManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UDebugCameraManager* DebugCameraManager;
    
    UProjectGameInstanceBase();

    UFUNCTION(BlueprintCallable)
    void SetGardenManager(AGardenManager* NewGardenManager);
    
    UFUNCTION(BlueprintCallable)
    void SetBoost(bool bEnabled);
    
    UFUNCTION(BlueprintCallable)
    void MakeUpUniqueSymbolDataTable(UMMIAsset* pAsset);
    
    UFUNCTION(BlueprintCallable)
    void MakeUpTutorialWindowTable(UMMIAsset* pAsset);
    
    UFUNCTION(BlueprintCallable)
    void MakeUpTalkBaseTable(UMMIAsset* pAsset);
    
    UFUNCTION(BlueprintCallable)
    void MakeUpTakaraDataTable(UMMIAsset* pAsset);
    
    UFUNCTION(BlueprintCallable)
    void MakeUpStaffRollTable(UMMIAsset* pAsset);
    
    UFUNCTION(BlueprintCallable)
    void MakeUpSortWindowTable(UMMIAsset* pAsset, UScriptMessageAsset* pText);
    
    UFUNCTION(BlueprintCallable)
    void MakeUpSkillTargetNameDataTable(UScriptMessageAsset* pName);
    
    UFUNCTION(BlueprintCallable)
    void MakeUpSkillDataTable(UMMIAsset* pAsset, UScriptMessageAsset* pSkillName, UScriptMessageAsset* pSkillHelp, UScriptMessageAsset* pSkillMasterHelp, UMMIAsset* pInfoMesAsset, UScriptMessageAsset* pInfoMes, UScriptMessageAsset* pMasterInfoMes);
    
    UFUNCTION(BlueprintCallable)
    void MakeUpShinseiDataTable(UMMIAsset* pAsset);
    
    UFUNCTION(BlueprintCallable)
    void MakeUpRyuketsuDataTable(UMMIAsset* pAsset);
    
    UFUNCTION(BlueprintCallable)
    void MakeUpRelicDataTable(UMMIAsset* pAsset);
    
    UFUNCTION(BlueprintCallable)
    void MakeUpPurposeTable(UMMIAsset* pAsset);
    
    UFUNCTION(BlueprintCallable)
    void MakeUpPlatformTermsTable(UScriptMessageAsset* pName);
    
    UFUNCTION(BlueprintCallable)
    void MakeUpPieceDataTable(UMMIAsset* pAsset);
    
    UFUNCTION(BlueprintCallable)
    void MakeUpOptionTable(UMMIAsset* pAsset);
    
    UFUNCTION(BlueprintCallable)
    void MakeUpNaviDevilDataTable(UMMIAsset* pAsset);
    
    UFUNCTION(BlueprintCallable)
    void MakeUpMissionDataTable(UMMIAsset* pAsset, UScriptMessageAsset* pName);
    
    UFUNCTION(BlueprintCallable)
    void MakeUpMimanRewardSetNameDataTable(UScriptMessageAsset* pName);
    
    UFUNCTION(BlueprintCallable)
    void MakeUpMimanDataTable(UMMIAsset* pAsset);
    
    UFUNCTION(BlueprintCallable)
    void MakeUpMapEventDataTable(UMMIAsset* pAsset);
    
    UFUNCTION(BlueprintCallable)
    void MakeUpMapAreaNameDataTable(UScriptMessageAsset* pName);
    
    UFUNCTION(BlueprintCallable)
    void MakeUpItemDataTable(UMMIAsset* pAsset, UScriptMessageAsset* pItemName, UScriptMessageAsset* pHelpMess);
    
    UFUNCTION(BlueprintCallable)
    void MakeUpGrowEventTable(UMMIAsset* pAsset);
    
    UFUNCTION(BlueprintCallable)
    void MakeUpGodParameterDataTable(UMMIAsset* pAsset, UScriptMessageAsset* pName, UScriptMessageAsset* pHelp);
    
    UFUNCTION(BlueprintCallable)
    void MakeUpGardenTable(UMMIAsset* pGardenMessageTable, UMMIAsset* pGardenSystemTable, UMMIAsset* pGardenItemTable, UMMIAsset* pGardenPlayerTalkTable, UScriptMessageAsset* pText, UDataTable* GardenQuestDevilTable);
    
    UFUNCTION(BlueprintCallable)
    void MakeUpFacilityShopTable(UMMIAsset* pAsset);
    
    UFUNCTION(BlueprintCallable)
    void MakeUpEventFlagDataTable(UMMIAsset* pAsset);
    
    UFUNCTION(BlueprintCallable)
    void MakeUpEventEncountDataTable(UMMIAsset* pAsset);
    
    UFUNCTION(BlueprintCallable)
    void MakeUpEncountDataTable(UMMIAsset* pAsset);
    
    UFUNCTION(BlueprintCallable)
    void MakeUpDevilUIGraphicsDataTable(UMMIAsset* pAsset, UDataTable* LocalizedNameSortIdTable);
    
    UFUNCTION(BlueprintCallable)
    void MakeUpDevilDataTable(UMMIAsset* pAsset, UScriptMessageAsset* pDevilName, UScriptMessageAsset* pRaceName);
    
    UFUNCTION(BlueprintCallable)
    void MakeUpDBaseDataTable(UMMIAsset* pAsset);
    
    UFUNCTION(BlueprintCallable)
    void MakeUpCoasterDataTable(UMMIAsset* pAsset);
    
    UFUNCTION(BlueprintCallable)
    void MakeUpCharGrowDataTable(UMMIAsset* pAsset, UMMIAsset* pPartnerAsset);
    
    UFUNCTION(BlueprintCallable)
    void MakeUpCharaNameDataTable(UScriptMessageAsset* pName);
    
    UFUNCTION(BlueprintCallable)
    void MakeUpCameraSettingsTable(UMMIAsset* pAsset);
    
    UFUNCTION(BlueprintCallable)
    void MakeUpButtonHelpTable(UMMIAsset* pAsset, UScriptMessageAsset* pText);
    
    UFUNCTION(BlueprintCallable)
    void MakeUpBossFlagTable(UMMIAsset* pAsset);
    
    UFUNCTION(BlueprintCallable)
    void MakeUpBattleEventTable(UMMIAsset* pAsset);
    
    UFUNCTION(BlueprintCallable)
    void MakeUpBattleDataTable(UMMIAsset* pAsset, UScriptMessageAsset* pCommonMes);
    
    UFUNCTION(BlueprintCallable)
    void MakeUpAttrNameDataTable(UScriptMessageAsset* pName);
    
    UFUNCTION(BlueprintCallable)
    void MakeUpAogamiDebrisDataTable(UMMIAsset* pAsset);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UProjectUIManager* GetUIManager();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    AMapWarpPoint* GetTextureBoostMapWarpPoint(const TArray<AMapWarpPoint*>& MapWarpPoints);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTalkBaseTable GetTalkBaseTable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UScriptMessageAsset* GetSystemMessage();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UProjectSoundManager* GetSoundManager();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UScriptMessageAsset* GetSonySaveMessage();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UProjectDebugManager* GetProjectDebugManager();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMinimapManager* GetMinimapManager();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UProjectGCManager* GetGCManager();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UGardenTalkPointManager* GetGardenTalkPointManager();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AGardenManager* GetGardenManager();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFrameRateManager* GetFrameRateManager();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    AEventBase* GetEventBase();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UScriptMessageAsset* GetDifficultyMessage();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void GetDeviceNotifyViewAssets(UMaterialInterface*& OutMaterial, UFont*& OutFont);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void GetDeviceNotifySoundAssets(USoundAtomCue*& Cue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UDataTable* GetDefaultAxisMappingDataTable();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UDataTable* GetDefaultActionMappingDataTable();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UDebugCameraManager* GetDebugCameraManager();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    AActor* GetBattleMain();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UDataTable* GetAxisMappingNameDataTable();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UActivityManager* GetActivityManager();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UDataTable* GetActionMappingNameDataTable();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAchievementManager* GetAchievementManager();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void GameFirstInitEvent();
    
    UFUNCTION(BlueprintCallable)
    void CreateGameData();
    
    UFUNCTION(BlueprintCallable)
    void CreateDebugMenuData(bool isOverWrite);
    
};

