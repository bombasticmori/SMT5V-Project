#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "E_ABILITY_TYPE.h"
#include "NkmData.h"
#include "UniteLvUpTestObj.generated.h"

UCLASS(Blueprintable)
class UUniteLvUpTestObj : public UObject {
    GENERATED_BODY()
public:
    UUniteLvUpTestObj();

    UFUNCTION(BlueprintCallable)
    void SetParamMax(E_ABILITY_TYPE abiType);
    
    UFUNCTION(BlueprintCallable)
    void ResultLvUp(int32 Exp);
    
    UFUNCTION(BlueprintCallable)
    void ResetRndNum();
    
    UFUNCTION(BlueprintCallable)
    FNkmData GetNkmData();
    
    UFUNCTION(BlueprintCallable)
    void CreateResultDevilData(int32 DevilID, int32 Exp);
    
};

