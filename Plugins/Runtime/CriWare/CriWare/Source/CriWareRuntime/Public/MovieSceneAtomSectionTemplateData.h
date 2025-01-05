#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneFloatChannel -FallbackName=MovieSceneFloatChannel
#include "Channels/MovieSceneFloatChannel.h"
#include "MovieSceneAtomSectionTemplateData.generated.h"

class USoundAtomCue;

USTRUCT(BlueprintType)
struct FMovieSceneAtomSectionTemplateData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundAtomCue* Sound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AtomStartOffset;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double SectionStartTimeSeconds;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneFloatChannel AtomPitchMultiplierCurve;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneFloatChannel AtomVolumeCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RowIndex;
    
    CRIWARERUNTIME_API FMovieSceneAtomSectionTemplateData();
};

