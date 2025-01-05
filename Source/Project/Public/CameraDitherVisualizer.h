#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ECollisionChannel -FallbackName=ECollisionChannel
#include "CameraDitherVisualizer.generated.h"

class UMaterialInterface;
class UStaticMeshComponent;

UCLASS(Abstract, Blueprintable)
class PROJECT_API ACameraDitherVisualizer : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ECollisionChannel> MaskedCollisionChannel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UStaticMeshComponent*> LevelGoodMaskedSMActorComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UStaticMeshComponent*> LevelBadMaskedSMActorComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<int32, UMaterialInterface*> InstanceOverridenMaterials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* GoodMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* BadMaterial;
    
public:
    ACameraDitherVisualizer(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void VisualizeMaskableMeshes();
    
    UFUNCTION(BlueprintCallable)
    void UnvisualizeMaskableMeshes();
    
    UFUNCTION(BlueprintCallable)
    void FindValidDitherTargets();
    
};

