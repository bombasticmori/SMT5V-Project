#pragma once
#include "CoreMinimal.h"
#include "BattleData.h"
#include "BibleSaveData.h"
#include "DataBase.h"
#include "EActivityTaskID.h"
#include "EActivityType.h"
#include "E_MOON_AGE.h"
#include "E_OldNewRoute.h"
#include "EventSave.h"
#include "FacilitySaveData.h"
#include "ItemSaveData.h"
#include "MapData.h"
#include "MissionSaveData.h"
#include "PartyData.h"
#include "PieceSaveData.h"
#include "PropertySaveData.h"
#include "SkillMasterData.h"
#include "SystemData.h"
#include "TalkSaveData.h"
#include "TutorialSaveData.h"
#include "UISystemData.h"
#include "UniteSaveData.h"
#include "GameData.generated.h"

USTRUCT(BlueprintType)
struct FGameData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPartyData m_Party;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FItemSaveData m_Item;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSkillMasterData m_SkillMasterData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPropertySaveData m_PropertySaveData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_TotalPlayTimeSec;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMapData m_Map;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBattleData m_BattleData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUniteSaveData m_UniteSaveData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBibleSaveData m_BibleSaveData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFacilitySaveData m_FacilitySaveData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMissionSaveData m_MissionSaveData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSystemData m_SystemData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataBase m_DataBase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    E_MOON_AGE m_MoonAge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_MoonAgeCounter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTutorialSaveData m_TutorialData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPieceSaveData m_PieceSaveData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTalkSaveData m_TalkSaveData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEventSave m_EventSaveData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUISystemData m_UISystemData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    E_OldNewRoute m_OldNewRoute;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EActivityTaskID m_ProgressActivityID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EActivityType m_ActivityCardType;
    
    PROJECT_API FGameData();
};

