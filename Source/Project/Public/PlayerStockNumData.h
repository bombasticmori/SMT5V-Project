#pragma once
#include "CoreMinimal.h"
#include "PlayerStockNumData.generated.h"

USTRUCT(BlueprintType)
struct FPlayerStockNumData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_Level;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_StockNum;
    
    PROJECT_API FPlayerStockNumData();
};

