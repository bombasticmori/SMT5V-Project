#pragma once
#include "CoreMinimal.h"
#include "UniteBibleEntryData.generated.h"

USTRUCT(BlueprintType)
struct FUniteBibleEntryData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DevilID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NkmIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Level;
    
    PROJECT_API FUniteBibleEntryData();
};

