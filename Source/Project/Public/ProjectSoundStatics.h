#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "EDevilVoiceType.h"
#include "Templates/SubclassOf.h"
#include "ProjectSoundStatics.generated.h"

class AActor;
class UAtomComponent;
class USceneComponent;
class USoundAtomCue;
class UStaticMesh;

UCLASS(Blueprintable)
class UProjectSoundStatics : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UProjectSoundStatics();

    UFUNCTION(BlueprintCallable)
    static UAtomComponent* PlayDevilVoice(AActor* Talker, EDevilVoiceType DevilVoiceType, FName Socket, bool bDontAttachToTalker);
    
    UFUNCTION(BlueprintCallable)
    static UAtomComponent* PlayCharacterVoice(AActor* Talker, USoundAtomCue* Cue, FName Socket, bool bDontAttachToTalker);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FTransform> GetPlacementSeFoliageTransforms(UStaticMesh* TargetMesh, float MinScale, AActor* LevelGetActor);
    
    UFUNCTION(BlueprintCallable)
    static void ForceUpdateAtomListenersImmediately();
    
    UFUNCTION(BlueprintCallable)
    static USceneComponent* AddResidentSoundComponent(TSubclassOf<USceneComponent> ComponentClass, AActor* Owner);
    
};

