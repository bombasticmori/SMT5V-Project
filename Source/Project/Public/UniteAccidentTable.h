#pragma once
#include "CoreMinimal.h"
#include "UniteAccidentTable.generated.h"

USTRUCT(BlueprintType)
struct FUniteAccidentTable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AddLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 rate;
    
    PROJECT_API FUniteAccidentTable();
};

