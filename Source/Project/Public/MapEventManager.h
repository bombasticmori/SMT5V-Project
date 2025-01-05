#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "MapEventManager.generated.h"

UCLASS(Blueprintable)
class PROJECT_API UMapEventManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UObject*> MapEventHits;
    
public:
    UMapEventManager();

    UFUNCTION(BlueprintCallable)
    void UnregisterMapEventHits();
    
    UFUNCTION(BlueprintCallable)
    void RegisterMapEventHits(TArray<UObject*> InMapEventHits);
    
};

