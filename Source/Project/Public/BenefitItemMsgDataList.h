#pragma once
#include "CoreMinimal.h"
#include "BenefitItemData.h"
#include "BenefitItemMsgDataList.generated.h"

USTRUCT(BlueprintType)
struct FBenefitItemMsgDataList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBenefitItemData> m_Data;
    
    PROJECT_API FBenefitItemMsgDataList();
};

