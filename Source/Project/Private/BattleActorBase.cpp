#include "BattleActorBase.h"

ABattleActorBase::ABattleActorBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Tags.AddDefaulted(1);
    this->SortWeight = 0;
    this->SortWeight_WaitSec = 100000.00f;
    this->m_ElapsedSec = 0.00f;
}

FString ABattleActorBase::DebugWriteTaskInfo(int32 PecID, int32 Step, int32 UpdateTimes, float ElapsedTime, bool isTerminal, TArray<int32>& WaitTaskList, FBtlTaskDesc& Desc, FDebugBattleTaskInfo& TaskInfo, bool isOutputLog) {
    return TEXT("");
}


