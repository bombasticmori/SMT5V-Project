#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
#include "MinimapCoasterLineRenderEntry.generated.h"

USTRUCT(BlueprintType)
struct FMinimapCoasterLineRenderEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D Point_0;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D Point_1;
    
    PROJECT_API FMinimapCoasterLineRenderEntry();
};

