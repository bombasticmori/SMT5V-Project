#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "BPL_CharaNameData.generated.h"

UCLASS(Blueprintable)
class UBPL_CharaNameData : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBPL_CharaNameData();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText GetCharaName(int32 ID);
    
};

