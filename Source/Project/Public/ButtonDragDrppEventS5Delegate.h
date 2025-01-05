#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
#include "ButtonDragDrppEventS5Delegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FButtonDragDrppEventS5, const FVector2D&, StartPos, const FVector2D&, StartUV, const FVector2D&, CurrentPos, const FVector2D&, CurrentUV);

