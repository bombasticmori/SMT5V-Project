#include "SkillSearchSortWindowBase.h"

ASkillSearchSortWindowBase::ASkillSearchSortWindowBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

int32 ASkillSearchSortWindowBase::GetSearchSkillNum(int32 InTargetElement) {
    return 0;
}

TArray<int32> ASkillSearchSortWindowBase::GetSearchSkillIDList(int32 InTargetElement) {
    return TArray<int32>();
}


