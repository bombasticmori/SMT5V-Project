#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "E_SORT_WINDOW_SORT_TYPE.h"
#include "BPL_USortWindowData.generated.h"

UCLASS(Blueprintable)
class PROJECT_API UBPL_USortWindowData : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBPL_USortWindowData();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<FText> getSortMessageList(E_SORT_WINDOW_SORT_TYPE Type);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<int32> getHelpIndexList(E_SORT_WINDOW_SORT_TYPE Type);
    
};

