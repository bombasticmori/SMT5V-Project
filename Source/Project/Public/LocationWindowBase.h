#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "E_LOCATION_WINDOW_TYPE.h"
#include "LocationWindowBase.generated.h"

UCLASS(Blueprintable)
class PROJECT_API ALocationWindowBase : public AActor {
    GENERATED_BODY()
public:
    ALocationWindowBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void setType(E_LOCATION_WINDOW_TYPE InType);
    
    UFUNCTION(BlueprintCallable)
    void setTokyoLargeMapPlaceName(const FText& InText);
    
    UFUNCTION(BlueprintCallable)
    void setFacilityName(const FText& InText);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    E_LOCATION_WINDOW_TYPE GetType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetTokyoLargeMapPlaceName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetFacilityName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    FText GetCurrentName() const;
    
};

