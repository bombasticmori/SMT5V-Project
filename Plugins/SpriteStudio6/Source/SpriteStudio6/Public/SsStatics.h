#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "CoreUObject.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "SsStatics.generated.h"

class ASsPlayerActor;
class UObject;
class USs6Project;

UCLASS(Blueprintable)
class SPRITESTUDIO6_API USsStatics : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USsStatics();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static ASsPlayerActor* SpawnSsPlayerAtLocationByIndex(UObject* WorldContextObject, USs6Project* SsProject, int32 AnimPackIndex, int32 AnimationIndex, float UUPerPixel, FVector Location, FRotator Rotation, bool bAutoDestroy, int32 TranslucencySortPriority);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static ASsPlayerActor* SpawnSsPlayerAtLocation(UObject* WorldContextObject, USs6Project* SsProject, FName AnimPackName, FName AnimationName, float UUPerPixel, FVector Location, FRotator Rotation, bool bAutoDestroy, int32 TranslucencySortPriority);
    
};

