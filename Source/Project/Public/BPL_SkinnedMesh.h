#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "BPL_SkinnedMesh.generated.h"

class USkinnedMeshComponent;

UCLASS(Blueprintable)
class PROJECT_API UBPL_SkinnedMesh : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBPL_SkinnedMesh();

private:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FTransform GetRefPoseTransform(const USkinnedMeshComponent* target, FName BoneName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetMaxDistanceFactor(const USkinnedMeshComponent* Component);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FTransform GetComposedRefPoseTransform(const USkinnedMeshComponent* target, FName BoneName);
    
};

