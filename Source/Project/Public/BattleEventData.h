#pragma once
#include "CoreMinimal.h"
#include "BattleEventCond.h"
#include "E_BTL_EVT_POINT.h"
#include "E_BTL_EVT_RESULT.h"
#include "E_BTL_EVT_TYPE.h"
#include "BattleEventData.generated.h"

USTRUCT(BlueprintType)
struct FBattleEventData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText m_CallSubLevelName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_EventBattleID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_TableID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    E_BTL_EVT_TYPE m_EvtType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    E_BTL_EVT_RESULT m_EndType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    E_BTL_EVT_POINT m_HookPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_CallSubLevelID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_NextEventBattleID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBattleEventCond> m_Condition;
    
    PROJECT_API FBattleEventData();
};

