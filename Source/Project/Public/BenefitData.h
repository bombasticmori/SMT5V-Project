#pragma once
#include "CoreMinimal.h"
#include "BenefitDevilData.h"
#include "BenefitItemData.h"
#include "BenefitData.generated.h"

USTRUCT(BlueprintType)
struct FBenefitData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_IsExist;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_ClearAlignment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBenefitDevilData> m_DevilData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBenefitItemData> m_ItemData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBenefitDevilData> m_DisableDevilData;
    
    PROJECT_API FBenefitData();
};

