#pragma once
#include "CoreMinimal.h"
#include "UniteSkillData.h"
#include "UniteUtsusemiSetupData.generated.h"

USTRUCT(BlueprintType)
struct FUniteUtsusemiSetupData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ResultNkmIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SourceDevilId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FUniteSkillData> PossibleSkillList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> SelectedSkillList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDefenceAishouMode;
    
    PROJECT_API FUniteUtsusemiSetupData();
};

