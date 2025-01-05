#pragma once
#include "CoreMinimal.h"
#include "E_SKILL_TEKISEI_CATEGORY.h"
#include "GardenTekiseiUpEventData.generated.h"

USTRUCT(BlueprintType)
struct FGardenTekiseiUpEventData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    E_SKILL_TEKISEI_CATEGORY m_Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_AddValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_OldValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_NewValue;
    
    PROJECT_API FGardenTekiseiUpEventData();
};

