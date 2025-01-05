#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "DG_ActorVisibilityVolumeManager.generated.h"

class ADG_ActorVisibilityVolume;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PROJECT_API UDG_ActorVisibilityVolumeManager : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ADG_ActorVisibilityVolume*> VisibilityVolumes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bForceShowAll;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bForceHideAll;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bForceUpdateAll;
    
    UDG_ActorVisibilityVolumeManager(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void ShowAll();
    
    UFUNCTION(BlueprintCallable)
    void RegisterVibilityVolume(ADG_ActorVisibilityVolume* InActorVisibilityVolumeVolume);
    
    UFUNCTION(BlueprintCallable)
    void ProcessVisibilityVolume(const FVector& ViewLocation);
    
    UFUNCTION(BlueprintCallable)
    void Init();
    
};

