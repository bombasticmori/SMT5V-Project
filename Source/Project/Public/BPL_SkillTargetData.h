#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "BPL_SkillTargetData.generated.h"

UCLASS(Blueprintable)
class UBPL_SkillTargetData : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBPL_SkillTargetData();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText GetSkillTargetName(int32 argindex);
    
};

