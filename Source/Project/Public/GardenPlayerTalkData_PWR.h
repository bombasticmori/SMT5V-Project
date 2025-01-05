#pragma once
#include "CoreMinimal.h"
#include "GardenPlayerTalkData.h"
#include "GardenPlayerTalkData_PWR.generated.h"

USTRUCT(BlueprintType)
struct FGardenPlayerTalkData_PWR {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_InfoFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGardenPlayerTalkData m_GardenPlayerTalkData;
    
    PROJECT_API FGardenPlayerTalkData_PWR();
};

