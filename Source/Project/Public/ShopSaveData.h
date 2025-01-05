#pragma once
#include "CoreMinimal.h"
#include "ShopSaveData.generated.h"

USTRUCT(BlueprintType)
struct PROJECT_API FShopSaveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint8> m_MimanRewardFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint8> m_NewItemFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint8> m_CommonFlag;
    
    FShopSaveData();
};

