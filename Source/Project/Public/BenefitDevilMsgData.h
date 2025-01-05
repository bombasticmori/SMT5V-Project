#pragma once
#include "CoreMinimal.h"
#include "BenefitDevilMsgData.generated.h"

USTRUCT(BlueprintType)
struct FBenefitDevilMsgData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_Id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_Level;
    
    PROJECT_API FBenefitDevilMsgData();
};

