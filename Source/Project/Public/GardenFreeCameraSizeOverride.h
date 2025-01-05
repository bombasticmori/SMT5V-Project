#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "GardenFreeCameraSizeOverride.generated.h"

USTRUCT(BlueprintType)
struct FGardenFreeCameraSizeOverride : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_DevilID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_Rate;
    
    PROJECT_API FGardenFreeCameraSizeOverride();
};

