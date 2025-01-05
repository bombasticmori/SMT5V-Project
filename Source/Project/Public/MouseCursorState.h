#pragma once
#include "CoreMinimal.h"
#include "MouseCursorState.generated.h"

USTRUCT(BlueprintType)
struct FMouseCursorState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SceneName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bForceShow;
    
    PROJECT_API FMouseCursorState();
};

