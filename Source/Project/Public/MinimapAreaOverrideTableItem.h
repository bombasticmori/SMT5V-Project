#pragma once
#include "CoreMinimal.h"
#include "E_MINIMAP_AREA_TABLE_OVERRIDE_TARGET.h"
#include "MinimapAreaOverrideTableItem.generated.h"

USTRUCT(BlueprintType)
struct FMinimapAreaOverrideTableItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_StartFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_EndFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_MapID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_AreaId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    E_MINIMAP_AREA_TABLE_OVERRIDE_TARGET m_OverrideTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_OverrideValue;
    
    PROJECT_API FMinimapAreaOverrideTableItem();
};

