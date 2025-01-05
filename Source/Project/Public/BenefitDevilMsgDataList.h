#pragma once
#include "CoreMinimal.h"
#include "BenefitDevilMsgData.h"
#include "BenefitDevilMsgDataList.generated.h"

USTRUCT(BlueprintType)
struct FBenefitDevilMsgDataList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBenefitDevilMsgData> m_Data;
    
    PROJECT_API FBenefitDevilMsgDataList();
};

