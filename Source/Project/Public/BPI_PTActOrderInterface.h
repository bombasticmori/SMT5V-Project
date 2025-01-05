#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "BPI_PTActOrderInterface.generated.h"

UINTERFACE(BlueprintType, MinimalAPI, meta=(CannotImplementInterfaceInBlueprint))
class UBPI_PTActOrderInterface : public UInterface {
    GENERATED_BODY()
};

class IBPI_PTActOrderInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    virtual void BI_UpdateOrder() PURE_VIRTUAL(BI_UpdateOrder,);
    
    UFUNCTION(BlueprintCallable)
    virtual void BI_SetNextOrder() PURE_VIRTUAL(BI_SetNextOrder,);
    
    UFUNCTION(BlueprintCallable)
    virtual TArray<int32> BI_GetOrderList() PURE_VIRTUAL(BI_GetOrderList, return TArray<int32>(););
    
    UFUNCTION(BlueprintCallable)
    virtual void BI_AddOrderArray(TArray<int32> partyIndexArray) PURE_VIRTUAL(BI_AddOrderArray,);
    
    UFUNCTION(BlueprintCallable)
    virtual void BI_AddOrder(int32 partyIndex) PURE_VIRTUAL(BI_AddOrder,);
    
};

