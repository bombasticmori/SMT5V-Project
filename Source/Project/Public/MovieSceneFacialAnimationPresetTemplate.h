#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneEvalTemplate -FallbackName=MovieSceneEvalTemplate
#include "Evaluation/MovieSceneEvalTemplate.h"
#include "MovieSceneFacialEventSectionData.h"
#include "MovieSceneFacialAnimationPresetTemplate.generated.h"

USTRUCT(BlueprintType)
struct FMovieSceneFacialAnimationPresetTemplate : public FMovieSceneEvalTemplate {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneFacialEventSectionData EventData;
    
    PROJECT_API FMovieSceneFacialAnimationPresetTemplate();
};

