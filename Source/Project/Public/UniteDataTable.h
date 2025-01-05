#pragma once
#include "CoreMinimal.h"
#include "UniteDataTable.generated.h"

USTRUCT(BlueprintType)
struct PROJECT_API FUniteDataTable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 unitePlus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 accidentMissDevil;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 accidentUpperLv;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 accidentLowerLv;
    
    FUniteDataTable();
};

