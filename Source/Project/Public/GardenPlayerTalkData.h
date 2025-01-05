#pragma once
#include "CoreMinimal.h"
#include "E_OldNewRoute.h"
#include "E_RYUKETSU_GARDEN_TYPE.h"
#include "GardenPlayerTalkFlagData.h"
#include "GardenPlayerTalkData.generated.h"

USTRUCT(BlueprintType)
struct FGardenPlayerTalkData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_ReadFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGardenPlayerTalkFlagData m_StartFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGardenPlayerTalkFlagData m_EndFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    E_OldNewRoute m_RouteType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    E_RYUKETSU_GARDEN_TYPE m_GardenType;
    
    PROJECT_API FGardenPlayerTalkData();
};

