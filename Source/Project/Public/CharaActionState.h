#pragma once
#include "CoreMinimal.h"
#include "CharaActionState.generated.h"

USTRUCT(BlueprintType)
struct FCharaActionState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint8> m_State;
    
    PROJECT_API FCharaActionState();
};

