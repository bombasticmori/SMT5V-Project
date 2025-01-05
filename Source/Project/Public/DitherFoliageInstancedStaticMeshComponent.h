#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Foliage -ObjectName=FoliageInstancedStaticMeshComponent -FallbackName=FoliageInstancedStaticMeshComponent
#include "FoliageInstancedStaticMeshComponent.h"
#include "DitherFoliageInstancedStaticMeshComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PROJECT_API UDitherFoliageInstancedStaticMeshComponent : public UFoliageInstancedStaticMeshComponent {
    GENERATED_BODY()
public:
    UDitherFoliageInstancedStaticMeshComponent(const FObjectInitializer& ObjectInitializer);

};

