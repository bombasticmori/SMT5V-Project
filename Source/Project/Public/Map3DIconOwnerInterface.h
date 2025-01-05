#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "Map3DIconOwnerInterface.generated.h"

UINTERFACE(Blueprintable)
class UMap3DIconOwnerInterface : public UInterface {
    GENERATED_BODY()
};

class IMap3DIconOwnerInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FVector Map3DIconGetWorldLocation() const;
    
};

