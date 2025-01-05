#pragma once
#include "CoreMinimal.h"
#include "PanelGaugeAnimeBaseData.generated.h"

USTRUCT(BlueprintType)
struct FPanelGaugeAnimeBaseData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_Time;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_Alpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_IsStartAnime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_AddCount;
    
    PROJECT_API FPanelGaugeAnimeBaseData();
};

