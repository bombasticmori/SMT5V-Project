#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "EncountAreaComp_CPP.generated.h"

class AActor;
class UObject;
class USplineComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PROJECT_API UEncountAreaComp_CPP : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTransform> m_SpawnPointList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTransform> m_SpawnPointList_Prio;
    
    UEncountAreaComp_CPP(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetNeedData(float SpaceWhenSpawning);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSpaceWhenSpawning();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 ConvertDevilLevel(int32 PrevLevel);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    bool CheckSpaceWhenSpawning(const UObject* WorldContextObject, FVector spawnPos);
    
    UFUNCTION(BlueprintCallable)
    void CalcSpawnPointList_Spline(USplineComponent* splineComp, TArray<int32> spawnKeyList, float Space);
    
    UFUNCTION(BlueprintCallable)
    void CalcSpawnPointList_Box(FVector BoxSize, float Space, TArray<AActor*> addPointActors, bool addPointOnly);
    
};

