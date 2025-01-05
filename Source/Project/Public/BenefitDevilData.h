#pragma once
#include "CoreMinimal.h"
#include "BenefitDevilData.generated.h"

USTRUCT(BlueprintType)
struct FBenefitDevilData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_Id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_Level;
    
    PROJECT_API FBenefitDevilData();
};

