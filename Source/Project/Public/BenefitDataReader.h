#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "BenefitDataReadCompleteDispatherDelegate.h"
#include "BenefitDataReader.generated.h"

class UDlcTableData;

UCLASS(Blueprintable)
class PROJECT_API UBenefitDataReader : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBenefitDataReadCompleteDispather ReadComplete;
    
    UBenefitDataReader();

    UFUNCTION(BlueprintCallable)
    void BenefitDataRead(UDlcTableData* pDlcTableData);
    
};

