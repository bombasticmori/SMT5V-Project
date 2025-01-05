#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "DG_RoomRotatableInterface.generated.h"

class ADG_RoomRotator;

UINTERFACE(Blueprintable)
class UDG_RoomRotatableInterface : public UInterface {
    GENERATED_BODY()
};

class IDG_RoomRotatableInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool SetRoomRotator(ADG_RoomRotator* RoomRotator);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRotateStarted();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRotateFinished(bool isSkipped);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    ADG_RoomRotator* GetRoomRotator();
    
};

