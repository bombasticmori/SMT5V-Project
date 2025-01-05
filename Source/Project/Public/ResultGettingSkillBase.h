#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "E_SKILL_ICON.h"
#include "E_SKILL_TEKISEI_CATEGORY.h"
#include "StatusSkillTekisei.h"
#include "ResultGettingSkillBase.generated.h"

UCLASS(Blueprintable)
class PROJECT_API AResultGettingSkillBase : public AActor {
    GENERATED_BODY()
public:
    AResultGettingSkillBase(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FStatusSkillTekisei> Sort_SkillTekisei(TArray<FStatusSkillTekisei> SkillTekisei);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    E_SKILL_ICON GetSkillIconType(E_SKILL_TEKISEI_CATEGORY category);
    
};

