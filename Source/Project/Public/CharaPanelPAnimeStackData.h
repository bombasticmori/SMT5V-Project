#pragma once
#include "CoreMinimal.h"
#include "CharaPanelPAnimeStackData.generated.h"

USTRUCT(BlueprintType)
struct FCharaPanelPAnimeStackData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_StartTime;
    
    PROJECT_API FCharaPanelPAnimeStackData();
};

