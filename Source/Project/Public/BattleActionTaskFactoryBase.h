#pragma once
#include "CoreMinimal.h"
#include "BattleActorComponentBase.h"
#include "BattleIntegerArray.h"
#include "BattleTaskArray.h"
#include "DebugBattleTaskInfo.h"
#include "BattleActionTaskFactoryBase.generated.h"

class ABattleActorBase;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UBattleActionTaskFactoryBase : public UBattleActorComponentBase {
    GENERATED_BODY()
public:
    UBattleActionTaskFactoryBase(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void TaskSort(UPARAM(Ref) TArray<ABattleActorBase*>& Tasks, bool IsOldSystem);
    
    UFUNCTION(BlueprintCallable)
    void RemoveTaskFromPoolInner(UPARAM(Ref) TMap<int32, FBattleTaskArray>& inTaskListValue, UPARAM(Ref) ABattleActorBase*& inTask);
    
    UFUNCTION(BlueprintCallable)
    bool OutputDebugInfo(UPARAM(Ref) FString& Data, UPARAM(Ref) TArray<FDebugBattleTaskInfo>& TaskInfo, const FString& Path, const FString& Filename);
    
    UFUNCTION(BlueprintCallable)
    bool IsTerminalTaskInner(const TMap<int32, FBattleIntegerArray>& inTaskListKey, int32 inPecID);
    
    UFUNCTION(BlueprintCallable)
    int32 FindReadyPoolTaskListInner(UPARAM(Ref) TMap<int32, FBattleIntegerArray>& inTaskListKey, UPARAM(Ref) TArray<int32>& inPopedTaskList, const TArray<uint8>& inValidArray);
    
    UFUNCTION(BlueprintCallable)
    int32 FindPoolTaskListKeyInner(UPARAM(Ref) TMap<int32, FBattleIntegerArray>& inTaskListKey, UPARAM(Ref) TArray<int32>& inWaitTaskList, int32& outKeyLength);
    
    UFUNCTION(BlueprintCallable)
    void AddPoolTaskListInner(UPARAM(Ref) TMap<int32, FBattleTaskArray>& inTaskListValue, int32 InKey, UPARAM(Ref) ABattleActorBase*& inTask);
    
};

