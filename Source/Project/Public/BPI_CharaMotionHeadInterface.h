#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "BPI_CharaMotionHeadInterface.generated.h"

UINTERFACE(Blueprintable)
class UBPI_CharaMotionHeadInterface : public UInterface {
    GENERATED_BODY()
};

class IBPI_CharaMotionHeadInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void MotionHeadNotifyEvent();
    
};

