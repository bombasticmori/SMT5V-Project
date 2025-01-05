#pragma once
#include "CoreMinimal.h"
#include "ChainEncountEnemyInfo.generated.h"

USTRUCT(BlueprintType)
struct FChainEncountEnemyInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_EncountID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_InnerSymbol;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_Magatsuhi;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> m_EnemyIDList;
    
    PROJECT_API FChainEncountEnemyInfo();
};

