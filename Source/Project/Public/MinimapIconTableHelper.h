#pragma once
#include "CoreMinimal.h"
#include "E_MINIMAP_POI_ICON.h"
#include "E_MINIMAP_POI_TYPE.h"
#include "MinimapIconTableHelper.generated.h"

USTRUCT(BlueprintType)
struct FMinimapIconTableHelper {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    E_MINIMAP_POI_TYPE POIType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    E_MINIMAP_POI_ICON MinimapIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DataId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool CalcDataId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool InvisibleTillSave;
    
    PROJECT_API FMinimapIconTableHelper();
};

