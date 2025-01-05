#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "Kismet/BlueprintFunctionLibrary.h"
#include "AtomExpand.generated.h"

class UAtomComponent;
class UObject;
class USoundAtomCue;

UCLASS(Blueprintable)
class UAtomExpand : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UAtomExpand();

    UFUNCTION(BlueprintCallable)
    static void PrepareStreamSound(UAtomComponent* Comp);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UAtomComponent* PlaySound2DRooted(const UObject* WorldContextObject, USoundAtomCue* Cue, bool bAutoDestroy);
    
    UFUNCTION(BlueprintCallable)
    static bool IsPreparedStreamSound(UAtomComponent* Comp);
    
    UFUNCTION(BlueprintCallable)
    static bool IsInCategory(USoundAtomCue* Cue, const FString& CategoryName);
    
};

