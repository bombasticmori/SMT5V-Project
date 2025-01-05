#pragma once
#include "CoreMinimal.h"
#include "E_UI_STATUS_SIMPLE_SOURCE.h"
#include "UIStatusCtrlDataObjBase.h"
#include "UIStatusCtrlDataObjSimple.generated.h"

UCLASS(Blueprintable)
class UUIStatusCtrlDataObjSimple : public UUIStatusCtrlDataObjBase {
    GENERATED_BODY()
public:
    UUIStatusCtrlDataObjSimple();

    UFUNCTION(BlueprintCallable)
    void PrepareStatusData(E_UI_STATUS_SIMPLE_SOURCE Type, int32 DataIndex);
    
};

