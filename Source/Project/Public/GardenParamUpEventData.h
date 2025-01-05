#pragma once
#include "CoreMinimal.h"
#include "E_ABILITYNAME_TYPE.h"
#include "GardenParamUpEventData.generated.h"

USTRUCT(BlueprintType)
struct FGardenParamUpEventData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    E_ABILITYNAME_TYPE m_Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_AddValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_OldValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_NewValue;
    
    PROJECT_API FGardenParamUpEventData();
};

