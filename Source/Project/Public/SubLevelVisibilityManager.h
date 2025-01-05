#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "LevelInfo.h"
#include "SubLevelVisibilityManager.generated.h"

class ASubLevelVisibilityVolume;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PROJECT_API USubLevelVisibilityManager : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ASubLevelVisibilityVolume*> VisibilityVolumes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLevelInfo> LevelInfos;
    
    USubLevelVisibilityManager(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void RegisterVibilityVolume(ASubLevelVisibilityVolume* InSubLevelVisibilityVolume);
    
    UFUNCTION(BlueprintCallable)
    void ProcessVisibilityVolume(const FVector& ViewLocation);
    
    UFUNCTION(BlueprintCallable)
    void Init();
    
};

