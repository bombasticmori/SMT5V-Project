#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "GardenRespawnChatInfo.h"
#include "GardenTalkCameraParam.h"
#include "GardenDevil.generated.h"

UCLASS(Abstract, Blueprintable)
class PROJECT_API AGardenDevil : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_DevilID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_IsInitialiationDone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGardenTalkCameraParam ParamFinal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGardenTalkCameraParam Params;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGardenTalkCameraParam ParamM;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGardenTalkCameraParam ParamL;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGardenTalkCameraParam ParamLL;
    
    AGardenDevil(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SpawnDevil();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FGardenRespawnChatInfo GetUsedChatMsg();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Despawn();
    
    UFUNCTION(BlueprintCallable)
    void CalcGardenCameraParam(float TargetHeight);
    
};

