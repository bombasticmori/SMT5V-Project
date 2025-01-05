#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "Templates/SubclassOf.h"
#include "BPL_Asset.generated.h"

class AActor;
class UCharaLipSync;
class UObject;
class USoundAtomCue;

UCLASS(Blueprintable)
class PROJECT_API UBPL_Asset : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBPL_Asset();

    UFUNCTION(BlueprintCallable)
    static TSoftObjectPtr<USoundAtomCue> SearchEventVoiceEx(const FName voiceName, const FName Path, const bool usePath);
    
    UFUNCTION(BlueprintCallable)
    static TSoftObjectPtr<USoundAtomCue> SearchEventVoice(const FName voiceName);
    
    UFUNCTION(BlueprintCallable)
    static TSoftObjectPtr<UCharaLipSync> SearchEventLipSyncEx(const FName Filename, const FName Path, const bool usePath);
    
    UFUNCTION(BlueprintCallable)
    static TSoftObjectPtr<UCharaLipSync> SearchEventLipSync(const FName Filename);
    
    UFUNCTION(BlueprintCallable)
    static UObject* LoadObjectBlocking(TSoftObjectPtr<UObject> SoftObjectReference);
    
    UFUNCTION(BlueprintCallable)
    static TSubclassOf<AActor> GetBlueprintGeneratedActorClass(UObject* BPAsset);
    
};

