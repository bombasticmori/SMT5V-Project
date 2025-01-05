#pragma once
#include "CoreMinimal.h"
#include "E_MINIMAP_POI_TYPE.h"
#include "MissionTargetIcon.generated.h"

USTRUCT(BlueprintType)
struct FMissionTargetIcon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    E_MINIMAP_POI_TYPE POIType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 mapId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AreaId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DataId;
    
    PROJECT_API FMissionTargetIcon();
};

