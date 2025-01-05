#pragma once
#include "CoreMinimal.h"
#include "E_PARTNER_ID.h"
#include "NkmData.h"
#include "PartnerData.generated.h"

USTRUCT(BlueprintType)
struct FPartnerData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNkmData m_BaseData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText m_Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    E_PARTNER_ID m_PartnerID;
    
    PROJECT_API FPartnerData();
};

