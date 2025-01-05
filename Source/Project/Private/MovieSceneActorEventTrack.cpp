#include "MovieSceneActorEventTrack.h"
#include "Evaluation/MovieSceneEvalTemplate.h"

FMovieSceneEvalTemplatePtr UMovieSceneActorEventTrack::CreateTemplateForSection(const UMovieSceneSection& InSection) const
{
    return FMovieSceneEvalTemplatePtr();
}

UMovieSceneActorEventTrack::UMovieSceneActorEventTrack() {
    this->bFireEventsWhenForwards = true;
    this->bFireEventsWhenBackwards = true;
    this->EventPosition = EFireActorEventsAtPosition::AfterSpawn;
}


