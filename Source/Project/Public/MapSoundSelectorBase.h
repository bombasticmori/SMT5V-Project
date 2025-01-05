#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "BGMState.h"
#include "EFadeType.h"
#include "MapSoundSelectorBase.generated.h"

class USoundAtomCue;

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UMapSoundSelectorBase : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USoundAtomCue* MapDefaultBGM;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USoundAtomCue* MagatsukaBGM;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FBGMState> BGMStateArray;
    
public:
    UMapSoundSelectorBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetMapDefaultBGM(USoundAtomCue* InMapDefaultBGM, EFadeType FadeType);
    
    UFUNCTION(BlueprintCallable)
    void OutMagatsukaArea();
    
    UFUNCTION(BlueprintCallable)
    void OutBGMArea(USoundAtomCue* Cue, int32 Priority, EFadeType FadeType);
    
    UFUNCTION(BlueprintCallable)
    void MapInitialize(USoundAtomCue* InMapDefaultBGM, EFadeType FadeType);
    
    UFUNCTION(BlueprintCallable)
    void InMagatsukaArea(USoundAtomCue* Cue);
    
    UFUNCTION(BlueprintCallable)
    void InBGMArea(USoundAtomCue* Cue, int32 Priority, EFadeType FadeType);
    
};

