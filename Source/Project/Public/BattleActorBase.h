#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "GameFramework/Actor.h"
#include "BtlTaskDesc.h"
#include "DebugBattleTaskInfo.h"
#include "BattleActorBase.generated.h"

UCLASS(Blueprintable)
class PROJECT_API ABattleActorBase : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SortWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SortWeight_WaitSec;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_ElapsedSec;
    
public:
    ABattleActorBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    FString DebugWriteTaskInfo(int32 PecID, int32 Step, int32 UpdateTimes, float ElapsedTime, bool isTerminal, UPARAM(Ref) TArray<int32>& WaitTaskList, UPARAM(Ref) FBtlTaskDesc& Desc, FDebugBattleTaskInfo& TaskInfo, bool isOutputLog);
    
};

