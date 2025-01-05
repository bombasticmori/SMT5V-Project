#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "E_BAD_STATUS.h"
#include "BPI_PTBadStatusInterface.generated.h"

UINTERFACE(BlueprintType, MinimalAPI, meta=(CannotImplementInterfaceInBlueprint))
class UBPI_PTBadStatusInterface : public UInterface {
    GENERATED_BODY()
};

class IBPI_PTBadStatusInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    virtual int32 BI_GetBadStatusDamage(int32 partyIndex, E_BAD_STATUS status) PURE_VIRTUAL(BI_GetBadStatusDamage, return 0;);
    
    UFUNCTION(BlueprintCallable)
    virtual int32 BI_GetBadStatus(int32 partyIndex) PURE_VIRTUAL(BI_GetBadStatus, return 0;);
    
    UFUNCTION(BlueprintCallable)
    virtual void BI_ClearBstCountAll() PURE_VIRTUAL(BI_ClearBstCountAll,);
    
    UFUNCTION(BlueprintCallable)
    virtual bool BI_CheckBadStatusAny(int32 partyIndex) PURE_VIRTUAL(BI_CheckBadStatusAny, return false;);
    
    UFUNCTION(BlueprintCallable)
    virtual bool BI_CheckBadStatus(int32 partyIndex, E_BAD_STATUS status) PURE_VIRTUAL(BI_CheckBadStatus, return false;);
    
    UFUNCTION(BlueprintCallable)
    virtual void BI_AddBadStatusRecCounter(int32 partyIndex, int32 status) PURE_VIRTUAL(BI_AddBadStatusRecCounter,);
    
};

