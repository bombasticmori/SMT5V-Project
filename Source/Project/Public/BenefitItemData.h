#pragma once
#include "CoreMinimal.h"
#include "BenefitItemData.generated.h"

USTRUCT(BlueprintType)
struct FBenefitItemData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_Id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_Num;
    
    PROJECT_API FBenefitItemData();
};

