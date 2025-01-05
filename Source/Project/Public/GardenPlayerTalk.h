#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "E_RYUKETSU_GARDEN_TYPE.h"
#include "GardenPlayerTalkData.h"
#include "GardenPlayerTalk.generated.h"

class UObject;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PROJECT_API UGardenPlayerTalk : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<int32, FGardenPlayerTalkData> RepeatableTalkList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<int32, FGardenPlayerTalkData> PlayOnceTalkList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<int32, FGardenPlayerTalkData> PowerUpTalkList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ChosenRepeatableTalkIndex;
    
    UGardenPlayerTalk(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasPowerUpTalkQueued();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasPlayOnceTalkQueued();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    int32 EvaluatePlayerPowerUpAmount(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    void BuildPlayerTalkData(UObject* WorldContextObject, E_RYUKETSU_GARDEN_TYPE GardenType);
    
};

