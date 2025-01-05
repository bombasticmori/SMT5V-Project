#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneEvalTemplate -FallbackName=MovieSceneEvalTemplate
#include "Evaluation/MovieSceneEvalTemplate.h"
#include "MovieSceneAtomSectionTemplateData.h"
#include "MovieSceneAtomSectionTemplate.generated.h"

USTRUCT(BlueprintType)
struct FMovieSceneAtomSectionTemplate : public FMovieSceneEvalTemplate {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneAtomSectionTemplateData AtomData;
    
    CRIWARERUNTIME_API FMovieSceneAtomSectionTemplate();
};

