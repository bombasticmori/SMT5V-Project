#include "MovieSceneAllMaterialTrack.h"
#include "Evaluation/MovieSceneEvalTemplate.h"

UMovieSceneAllMaterialTrack::UMovieSceneAllMaterialTrack(const FObjectInitializer& ObjectInitializer)
    : Super(ObjectInitializer) {
}

FMovieSceneEvalTemplatePtr UMovieSceneAllMaterialTrack::CreateTemplateForSection(const UMovieSceneSection& InSection) const
{
    return FMovieSceneEvalTemplatePtr();
}
