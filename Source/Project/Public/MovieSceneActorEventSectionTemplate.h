#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneEvalTemplate -FallbackName=MovieSceneEvalTemplate
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneObjectBindingID -FallbackName=MovieSceneObjectBindingID
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieSceneTracks -ObjectName=MovieSceneEventSectionData -FallbackName=MovieSceneEventSectionData
#include "Evaluation/MovieSceneEvalTemplate.h"
#include "Sections/MovieSceneEventSection.h"
#include "MovieSceneActorEventSectionTemplate.generated.h"

USTRUCT(BlueprintType)
struct FMovieSceneActorEventSectionTemplate : public FMovieSceneEvalTemplate {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneEventSectionData EventData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMovieSceneObjectBindingID> EventReceivers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bFireEventsWhenForwards: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bFireEventsWhenBackwards: 1;
    
    PROJECT_API FMovieSceneActorEventSectionTemplate();
};

