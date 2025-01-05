#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "BPL_MimanRewardData.generated.h"

UCLASS(Blueprintable)
class UBPL_MimanRewardData : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBPL_MimanRewardData();

    UFUNCTION(BlueprintCallable)
    static FText GetMimanRewardItemSetName(int32 itemSetID);
    
};

