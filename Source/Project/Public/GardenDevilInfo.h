#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "E_GARDEN_SPAWN_ANIMATION.h"
#include "E_GARDEN_SPAWN_AREA.h"
#include "E_GARDEN_SPAWN_SIZE.h"
#include "GardenDevilInfo.generated.h"

USTRUCT(BlueprintType)
struct PROJECT_API FGardenDevilInfo : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DevilID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DevilScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    E_GARDEN_SPAWN_SIZE Size;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    E_GARDEN_SPAWN_ANIMATION Animation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    E_GARDEN_SPAWN_AREA Area;
    
    FGardenDevilInfo();
};

