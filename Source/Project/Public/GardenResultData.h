#pragma once
#include "CoreMinimal.h"
#include "GardenParamUpEventData.h"
#include "GardenTekiseiUpEventData.h"
#include "UIStatusDataUpParam.h"
#include "GardenResultData.generated.h"

USTRUCT(BlueprintType)
struct FGardenResultData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_NkmIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGardenTekiseiUpEventData> m_TekiseiUpData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGardenParamUpEventData> m_ParamUpData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_GetNewSkill;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUIStatusDataUpParam m_StatusTotalUpData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_AddSkillRank;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_HeroBonusPoint;
    
    PROJECT_API FGardenResultData();
};

