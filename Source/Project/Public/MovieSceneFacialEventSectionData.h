#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieSceneTracks -ObjectName=MovieSceneEventSectionData -FallbackName=MovieSceneEventSectionData
#include "Sections/MovieSceneEventSection.h"
#include "MovieSceneFacialEventSectionData.generated.h"

USTRUCT(BlueprintType)
struct FMovieSceneFacialEventSectionData : public FMovieSceneEventSectionData {
    GENERATED_BODY()
public:
    PROJECT_API FMovieSceneFacialEventSectionData();
};

