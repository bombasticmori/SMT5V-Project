#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector

#include "BattleActorComponentBase.h"
#include "BattleCamActorFactoryBase.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UBattleCamActorFactoryBase : public UBattleActorComponentBase {
    GENERATED_BODY()
public:
    UBattleCamActorFactoryBase(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRangeSkillCamera_Native(UPARAM(Ref) FString& CameraName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void CalcUnitSocketLocation_Native(UPARAM(Ref) FTransform& PartyTrans, UPARAM(Ref) FVector& LocalSocketLoc, float RelativeLocZ, FVector& OutRoot, FVector& OutSocketLoc);
    
};

