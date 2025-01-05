#pragma once
#include "CoreMinimal.h"
#include "GrowGetMiitsuData.generated.h"

USTRUCT(BlueprintType)
struct FGrowGetMiitsuData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_threshold_Lv;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_growGetMiitsu;
    
    PROJECT_API FGrowGetMiitsuData();
};

