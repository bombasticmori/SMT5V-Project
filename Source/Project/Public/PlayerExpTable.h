#pragma once
#include "CoreMinimal.h"
#include "PlayerExpTable.generated.h"

USTRUCT(BlueprintType)
struct FPlayerExpTable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> m_Data;
    
    PROJECT_API FPlayerExpTable();
};

