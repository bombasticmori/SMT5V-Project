#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=PrimaryAssetId -FallbackName=PrimaryAssetId
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Volume -FallbackName=Volume
#include "ASubLevelVisibilityVolumeUsage.h"
#include "SubLevelVisibilityVolume.generated.h"

class ULevelStreaming;

UCLASS(Blueprintable)
class PROJECT_API ASubLevelVisibilityVolume : public AVolume {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPrimaryAssetId> StreamingLevelNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bDisabled: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ASubLevelVisibilityVolumeUsage> VisibilityVolumeUsage;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ULevelStreaming*> LevelStreamings;
    
public:
    ASubLevelVisibilityVolume(const FObjectInitializer& ObjectInitializer);

};

