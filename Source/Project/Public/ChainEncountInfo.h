#pragma once
#include "CoreMinimal.h"
#include "ChainEncountEnemyInfo.h"
#include "ChainEncountInfo.generated.h"

USTRUCT(BlueprintType)
struct FChainEncountInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_Enable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_BaseRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_SymbolNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FChainEncountEnemyInfo> m_EnemyList;
    
    PROJECT_API FChainEncountInfo();
};

