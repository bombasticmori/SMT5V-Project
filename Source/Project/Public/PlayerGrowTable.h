#pragma once
#include "CoreMinimal.h"
#include "PlayerGrowData.h"
#include "PlayerGrowTable.generated.h"

USTRUCT(BlueprintType)
struct FPlayerGrowTable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPlayerGrowData> m_Data;
    
    PROJECT_API FPlayerGrowTable();
};

