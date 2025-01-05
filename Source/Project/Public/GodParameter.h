#pragma once
#include "CoreMinimal.h"
#include "GodParameter.generated.h"

USTRUCT(BlueprintType)
struct FGodParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_Pad;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_GodParameterPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint8> m_Skill;
    
    PROJECT_API FGodParameter();
};

