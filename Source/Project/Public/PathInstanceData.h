#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponentInstanceData -FallbackName=SceneComponentInstanceData
#include "PathCurves.h"
#include "PathInstanceData.generated.h"

USTRUCT(BlueprintType)
struct FPathInstanceData : public FSceneComponentInstanceData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPathCurves SplineCurves;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPathCurves SplineCurvesPreUCS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSplineHasBeenEdited;
    
    PROJECT_API FPathInstanceData();
};

