#pragma once
#include "CoreMinimal.h"
#include "BtlKillData.generated.h"

USTRUCT(BlueprintType)
struct FBtlKillData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_EnemyID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_KillCnt;
    
    PROJECT_API FBtlKillData();
};

