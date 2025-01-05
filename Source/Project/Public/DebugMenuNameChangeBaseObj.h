#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "DebugMenuNameChangeBaseObj.generated.h"

UCLASS(Blueprintable)
class PROJECT_API UDebugMenuNameChangeBaseObj : public UObject {
    GENERATED_BODY()
public:
    UDebugMenuNameChangeBaseObj();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveInitialize();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveDestroyed();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FText GetDispName(int32 Param);
    
};

