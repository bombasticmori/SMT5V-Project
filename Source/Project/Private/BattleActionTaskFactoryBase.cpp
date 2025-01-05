#include "BattleActionTaskFactoryBase.h"

UBattleActionTaskFactoryBase::UBattleActionTaskFactoryBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UBattleActionTaskFactoryBase::TaskSort(TArray<ABattleActorBase*>& Tasks, bool IsOldSystem) {
}

void UBattleActionTaskFactoryBase::RemoveTaskFromPoolInner(TMap<int32, FBattleTaskArray>& inTaskListValue, ABattleActorBase*& inTask) {
}

bool UBattleActionTaskFactoryBase::OutputDebugInfo(FString& Data, TArray<FDebugBattleTaskInfo>& TaskInfo, const FString& Path, const FString& Filename) {
    return false;
}

bool UBattleActionTaskFactoryBase::IsTerminalTaskInner(const TMap<int32, FBattleIntegerArray>& inTaskListKey, int32 inPecID) {
    return false;
}

int32 UBattleActionTaskFactoryBase::FindReadyPoolTaskListInner(TMap<int32, FBattleIntegerArray>& inTaskListKey, TArray<int32>& inPopedTaskList, const TArray<uint8>& inValidArray) {
    return 0;
}

int32 UBattleActionTaskFactoryBase::FindPoolTaskListKeyInner(TMap<int32, FBattleIntegerArray>& inTaskListKey, TArray<int32>& inWaitTaskList, int32& outKeyLength) {
    return 0;
}

void UBattleActionTaskFactoryBase::AddPoolTaskListInner(TMap<int32, FBattleTaskArray>& inTaskListValue, int32 InKey, ABattleActorBase*& inTask) {
}


