#pragma once
#include "CoreMinimal.h"
#include "PartnerActData.generated.h"

USTRUCT(BlueprintType)
struct FPartnerActData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_ActCategory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_Timing;
    
    PROJECT_API FPartnerActData();
};

