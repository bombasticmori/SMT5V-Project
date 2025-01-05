#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "TransportLocationSlotInfo.h"
#include "TransportListCtrlBase.generated.h"

UCLASS(Blueprintable)
class PROJECT_API ATransportListCtrlBase : public AActor {
    GENERATED_BODY()
public:
    ATransportListCtrlBase(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void ResetListInfo();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FTransportLocationSlotInfo> GetListInfo_InRange(int32 StartIdx, int32 EndIdx);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FTransportLocationSlotInfo> GetListInfo_All();
    
    UFUNCTION(BlueprintCallable)
    void AddListInfo(FText InLocationName, bool InActiveSlot);
    
};

