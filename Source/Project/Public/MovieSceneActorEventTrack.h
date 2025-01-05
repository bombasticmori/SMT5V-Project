#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneNameableTrack -FallbackName=MovieSceneNameableTrack
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneObjectBindingID -FallbackName=MovieSceneObjectBindingID
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneTrackTemplateProducer -FallbackName=MovieSceneTrackTemplateProducer
#include "Tracks/MovieSceneActorReferenceTrack.h"
#include "EFireActorEventsAtPosition.h"
#include "MovieSceneActorEventTrack.generated.h"

class UMovieSceneSection;

UCLASS(Blueprintable, MinimalAPI)
class UMovieSceneActorEventTrack : public UMovieSceneNameableTrack, public IMovieSceneTrackTemplateProducer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bFireEventsWhenForwards: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bFireEventsWhenBackwards: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFireActorEventsAtPosition EventPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMovieSceneObjectBindingID> EventReceivers;

    virtual FMovieSceneEvalTemplatePtr CreateTemplateForSection(const UMovieSceneSection& InSection) const override;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UMovieSceneSection*> Sections;
    
public:
    UMovieSceneActorEventTrack();


    // Fix for true pure virtual functions not being implemented
};

