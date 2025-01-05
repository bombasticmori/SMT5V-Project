#pragma once
#include "CoreMinimal.h"
#include "E_BTL_EVT_COND.h"
#include "BattleEventCond.generated.h"

USTRUCT(BlueprintType)
struct FBattleEventCond {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    E_BTL_EVT_COND m_CondType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_Value;
    
    PROJECT_API FBattleEventCond();
};

