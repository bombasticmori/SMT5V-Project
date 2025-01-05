#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "EGazeTargetType.h"
#include "GazeParameter.h"
#include "GazeTargetHolder.generated.h"

class ACustomPawn;
class IGazeTarget;
class UGazeTarget;
class USceneComponent;

UCLASS(Blueprintable)
class UGazeTargetHolder : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GazeMaxDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GazeWeight_TargetType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GazeWeight_Distance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GazeWeight_CameraDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EGazeTargetType, FGazeParameter> GazeParams;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<TScriptInterface<IGazeTarget>> GazeTargets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<USceneComponent*> PriotiryGazeTargets;
    
public:
    UGazeTargetHolder();

    UFUNCTION(BlueprintCallable)
    void UnregisterGazeTarget(TScriptInterface<IGazeTarget> InTarget);
    
    UFUNCTION(BlueprintCallable)
    void RemovePriorityGazeTarget(USceneComponent* InTarget);
    
    UFUNCTION(BlueprintCallable)
    void RegisterGazeTarget(TScriptInterface<IGazeTarget> InTarget);
    
    UFUNCTION(BlueprintCallable)
    bool FindGazeTargetFromPawn(ACustomPawn* InPawn, FVector& OutLocation, float DistanceCoefficient);
    
    UFUNCTION(BlueprintCallable)
    void AddPriorityGazeTarget(USceneComponent* InTarget);
    
};

