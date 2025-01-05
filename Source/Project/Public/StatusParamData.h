#pragma once
#include "CoreMinimal.h"
#include "AbilData.h"
#include "StatusParamData.generated.h"

USTRUCT(BlueprintType)
struct FStatusParamData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAbilData m_Param;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAbilData m_BulidParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAbilData m_DiffParam;
    
    PROJECT_API FStatusParamData();
};

