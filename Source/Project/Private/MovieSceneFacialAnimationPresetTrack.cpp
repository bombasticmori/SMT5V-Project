#include "MovieSceneFacialAnimationPresetTrack.h"
#include "Evaluation/MovieSceneEvalTemplate.h" // Add this include to resolve FMovieSceneEvalTemplatePtr

UMovieSceneFacialAnimationPresetTrack::UMovieSceneFacialAnimationPresetTrack() {
}

FMovieSceneEvalTemplatePtr UMovieSceneFacialAnimationPresetTrack::CreateTemplateForSection(const UMovieSceneSection& InSection) const
{
    return FMovieSceneEvalTemplatePtr();
}
