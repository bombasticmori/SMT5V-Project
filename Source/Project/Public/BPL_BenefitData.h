#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "BenefitData.h"
#include "BenefitDevilMsgDataList.h"
#include "BenefitItemMsgDataList.h"
#include "E_BENEFIT_ROUTE.h"
#include "BPL_BenefitData.generated.h"

class UBenefitDataTable;

UCLASS(Blueprintable)
class PROJECT_API UBPL_BenefitData : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBPL_BenefitData();

    UFUNCTION(BlueprintCallable)
    static void ObtainBenefits(const FBenefitData& BenefitData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetBenefitItemData(UBenefitDataTable* pTableObj, const E_BENEFIT_ROUTE route, FBenefitItemMsgDataList& retData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void ExtractBenefitDevilMsgDataList(const FBenefitData& BenefitData, FBenefitDevilMsgDataList& devilDataList);
    
};

