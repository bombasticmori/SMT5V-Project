#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "BPL_DevilUIGraphicsData.generated.h"

UCLASS(Blueprintable)
class UBPL_DevilUIGraphicsData : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBPL_DevilUIGraphicsData();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetDevilUIFaceId(int32 InDevilId);
    
};

