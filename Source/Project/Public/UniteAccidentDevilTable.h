#pragma once
#include "CoreMinimal.h"
#include "UniteAccidentDevilTable.generated.h"

USTRUCT(BlueprintType)
struct FUniteAccidentDevilTable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DevilID;
    
    PROJECT_API FUniteAccidentDevilTable();
};

