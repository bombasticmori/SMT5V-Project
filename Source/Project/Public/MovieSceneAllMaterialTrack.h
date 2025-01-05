#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneTrackTemplateProducer -FallbackName=MovieSceneTrackTemplateProducer
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieSceneTracks -ObjectName=MovieSceneMaterialTrack -FallbackName=MovieSceneMaterialTrack
#include "Tracks/MovieSceneMaterialTrack.h"
#include "MovieSceneAllMaterialTrack.generated.h"

UCLASS(Blueprintable)
class PROJECT_API UMovieSceneAllMaterialTrack : public UMovieSceneMaterialTrack, public IMovieSceneTrackTemplateProducer {
    GENERATED_BODY()
public:
    UMovieSceneAllMaterialTrack(const FObjectInitializer& ObjectInitializer);

    // Fix for true pure virtual functions not being implemented
    virtual FMovieSceneEvalTemplatePtr CreateTemplateForSection(const UMovieSceneSection& InSection) const override;
};
