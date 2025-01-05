#pragma once
#include "CoreMinimal.h"
#include "E_EVTBTL_WIN_COND.h"
#include "EvtBtlWinCond.generated.h"

USTRUCT(BlueprintType)
struct FEvtBtlWinCond {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    E_EVTBTL_WIN_COND m_Cond;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_Value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_Type;
    
    PROJECT_API FEvtBtlWinCond();
};

