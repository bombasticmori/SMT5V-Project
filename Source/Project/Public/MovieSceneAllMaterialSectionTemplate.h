#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneEvalTemplate -FallbackName=MovieSceneEvalTemplate
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieSceneTracks -ObjectName=ColorParameterNameAndCurves -FallbackName=ColorParameterNameAndCurves
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieSceneTracks -ObjectName=ScalarParameterNameAndCurve -FallbackName=ScalarParameterNameAndCurve
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieSceneTracks -ObjectName=VectorParameterNameAndCurves -FallbackName=VectorParameterNameAndCurves
#include "Evaluation/MovieSceneEvalTemplate.h"
#include "Sections/MovieSceneParameterSection.h"
#include "MovieSceneAllMaterialSectionTemplate.generated.h"

USTRUCT(BlueprintType)
struct FMovieSceneAllMaterialSectionTemplate : public FMovieSceneEvalTemplate {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FScalarParameterNameAndCurve> Scalars;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVectorParameterNameAndCurves> Vectors;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FColorParameterNameAndCurves> Colors;
    
public:
    PROJECT_API FMovieSceneAllMaterialSectionTemplate();
};

