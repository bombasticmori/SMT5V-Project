#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "DG_ActorVisibilityVolume.generated.h"

class AStaticMeshActor;
class UBoxComponent;
class USceneComponent;

UCLASS(Blueprintable)
class PROJECT_API ADG_ActorVisibilityVolume : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* TransformComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AStaticMeshActor*> StaticMeshList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> ObjectList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector ModelHitSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* ModelHitBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector VisibilityHitSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* VisibilityHitBox;
    
    ADG_ActorVisibilityVolume(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UpdateHitBox();
    
    UFUNCTION(BlueprintCallable)
    void RemoveAllStaticMesh();
    
    UFUNCTION(BlueprintCallable)
    void RemoveAllObjects();
    
    UFUNCTION(BlueprintCallable)
    void CollectStaticMeshActors();
    
    UFUNCTION(BlueprintCallable)
    void CollectObjects();
    
};

