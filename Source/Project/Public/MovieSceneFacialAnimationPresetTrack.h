#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneNameableTrack -FallbackName=MovieSceneNameableTrack
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneTrackTemplateProducer -FallbackName=MovieSceneTrackTemplateProducer
#include "Tracks/MovieSceneActorReferenceTrack.h"
#include "MovieSceneFacialAnimationPresetTrack.generated.h"

class UMovieSceneSection;

UCLASS(Blueprintable)
class PROJECT_API UMovieSceneFacialAnimationPresetTrack : public UMovieSceneNameableTrack, public IMovieSceneTrackTemplateProducer {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UMovieSceneSection*> Sections;
    
public:
    UMovieSceneFacialAnimationPresetTrack();

    virtual FMovieSceneEvalTemplatePtr CreateTemplateForSection(const UMovieSceneSection& InSection) const override;


    // Fix for true pure virtual functions not being implemented
};

