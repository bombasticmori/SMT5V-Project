#pragma once
#include "CoreMinimal.h"
#include "BtlAnalyzeData.generated.h"

USTRUCT(BlueprintType)
struct FBtlAnalyzeData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_IsOpenAnalyze;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<bool> m_IsOpenDefenceAishou;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<bool> m_IsOpenSkillTekisei;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<bool> m_IsOpenSkill;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<bool> m_IsOpenMagatsuhiSkill;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_IsOpenUniqueSkill;
    
    PROJECT_API FBtlAnalyzeData();
};

