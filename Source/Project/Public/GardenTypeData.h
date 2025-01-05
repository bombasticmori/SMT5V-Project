#pragma once
#include "CoreMinimal.h"
#include "E_RYUKETSU_GARDEN_TYPE.h"
#include "GardenTypeData.generated.h"

USTRUCT(BlueprintType)
struct FGardenTypeData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    E_RYUKETSU_GARDEN_TYPE m_GardenType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_MinDistanceBtwnSpawner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_DesiredDistanceBtwnSpawner;
    
    PROJECT_API FGardenTypeData();
};

