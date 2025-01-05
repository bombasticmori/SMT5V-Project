#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "E_GARDEN_FC_DEVIL_COL_TYPE.h"
#include "E_GARDEN_MSG_USE_TYPE.h"
#include "E_GARDEN_SPAWN_SIZE.h"
#include "E_GARDEN_SYS_TEXT.h"
#include "E_MINIMAP_POI_ICON.h"
#include "E_RYUKETSU_GARDEN_TYPE.h"
#include "E_TALK_TONE_TYPE.h"
#include "GardenDevilInfo.h"
#include "GardenDevilSpawnInfo.h"
#include "GardenPhaseData.h"
#include "GardenQuestInfo.h"
#include "GardenRespawnChatInfo.h"
#include "GardenSpeechTypeMsgData.h"
#include "GardenTutorialSpotSettings.h"
#include "GardenTypeData.h"
#include "GardenUniqueDevilMsgData.h"
#include "Templates/SubclassOf.h"
#include "GardenManager.generated.h"

class AGardenDevil;
class AGardenManager;
class ULevelStreaming;
class UObject;

UCLASS(Abstract, Blueprintable)
class PROJECT_API AGardenManager : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FGardenDevilSpawnInfo> m_DevilSpawnLocations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, E_GARDEN_FC_DEVIL_COL_TYPE> m_GardenFCCollisionAdjustMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_NeedRespawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FGardenRespawnChatInfo> m_RespawnChatMessages;
    
public:
    AGardenManager(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SpawnTutorialGardenDevils(const float MinimumDistance, const float DesiredDistance, FGardenTutorialSpotSettings SmallGardenTutorialSpotSettings, FGardenTutorialSpotSettings BigGardenTutorialSpotSettings, TArray<E_GARDEN_SPAWN_SIZE>& UsedCameraSpots);
    
    UFUNCTION(BlueprintCallable)
    void SpawnGardenDevils(const float MinimumDistance, const float DesiredDistance);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    AGardenDevil* SpawnGardenDevil(FGardenDevilSpawnInfo GardenDevilSpawnInfo, int32 DevilID);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SpawnDevilsDelayed();
    
public:
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetGardenManager(const UObject* WorldContextObject, AGardenManager* NewGardenManager);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    void SetGardenDevilIcon(const UObject* WorldContextObject, int32 NkmIndex, E_TALK_TONE_TYPE SpeechType, E_GARDEN_MSG_USE_TYPE ChatMsgType, int32 ChatMsgIndex);
    
    UFUNCTION(BlueprintCallable)
    void SetGardenChatMessageFlag(E_TALK_TONE_TYPE SpeechType, E_GARDEN_MSG_USE_TYPE ChatMsgType, int32 DevilID, int32 ChatMsgIndex);
    
protected:
    UFUNCTION(BlueprintCallable)
    void ResetRespawnFlags();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InitializeManager(FName FreeCameraDisableLevel);
    
    UFUNCTION(BlueprintCallable)
    void Initialize();
    
protected:
    UFUNCTION(BlueprintCallable)
    FGardenUniqueDevilMsgData GetUniqueDevilMsgData(int32 DevilID);
    
    UFUNCTION(BlueprintCallable)
    FGardenSpeechTypeMsgData GetSpeechTypeMsgData(E_TALK_TONE_TYPE SpeechType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPlayerTalkRepeatableTalkNum();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPlayerTalkPowerUpTalkNum();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPlayerTalkPlayOnceTalkNum();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPhaseTableNum();
    
    UFUNCTION(BlueprintCallable)
    FGardenPhaseData GetPhaseData(uint8 PhaseValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGardenTypeData GetGardenTypeData(E_RYUKETSU_GARDEN_TYPE GardenType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetGardenSystemMessageLabel(E_GARDEN_SYS_TEXT SystemID);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static AGardenManager* GetGardenManager(const UObject* WorldContextObject);
    
protected:
    UFUNCTION(BlueprintCallable)
    AActor* GetActorOfClassFromLevel(const ULevelStreaming* levelstr, TSubclassOf<AActor> ActorClass);
    
    UFUNCTION(BlueprintCallable)
    void GardenQuestRespawn();
    
    UFUNCTION(BlueprintCallable)
    void GardenQuestDespawn(int32 DevilID, TArray<AGardenDevil*> GardenDevilArray);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FGardenDevilInfo FindDevilType(int32 GardenDevilID);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DestroyManager();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckWaterDevil(int32 DevilID);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool CheckManagerInitializationDone();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CheckGardenReady();
    
protected:
    UFUNCTION(BlueprintCallable)
    bool CheckGardenQuest(int32 DevilID, FGardenQuestInfo& GardenQuestInfo);
    
public:
    UFUNCTION(BlueprintCallable)
    E_MINIMAP_POI_ICON CheckGardenDevilIcon(int32 NkmIndex);
    
};

