#include "MovieSceneAtomTrack.h"
#include "MovieSceneAtomSection.h" // Include the header for the section class
#include "Evaluation/MovieSceneEvalTemplate.h" // Include the header for FMovieSceneEvalTemplatePtr

UMovieSceneAtomTrack::UMovieSceneAtomTrack() {
}

FMovieSceneEvalTemplatePtr UMovieSceneAtomTrack::CreateTemplateForSection(const UMovieSceneSection& InSection) const
{
	// Create a template for the section
	return FMovieSceneEvalTemplatePtr();
}
