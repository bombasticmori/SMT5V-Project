#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "MapEventHitManageInterface.generated.h"

UINTERFACE(Blueprintable)
class UMapEventHitManageInterface : public UInterface {
    GENERATED_BODY()
};

class IMapEventHitManageInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsHitEnabled();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    int32 GetMapEventId();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool EnableIcon(bool isEnable);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool EnableHit(bool isEnable);
    
};

