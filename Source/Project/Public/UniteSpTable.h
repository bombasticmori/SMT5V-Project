#pragma once
#include "CoreMinimal.h"
#include "UniteSpTable.generated.h"

USTRUCT(BlueprintType)
struct PROJECT_API FUniteSpTable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SortID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> NkmId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ResultId;
    
    FUniteSpTable();
};

