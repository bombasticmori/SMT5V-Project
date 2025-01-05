#include "ResultGettingSkillBase.h"

AResultGettingSkillBase::AResultGettingSkillBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

TArray<FStatusSkillTekisei> AResultGettingSkillBase::Sort_SkillTekisei(TArray<FStatusSkillTekisei> SkillTekisei) {
    return TArray<FStatusSkillTekisei>();
}

E_SKILL_ICON AResultGettingSkillBase::GetSkillIconType(E_SKILL_TEKISEI_CATEGORY category) {
    return E_SKILL_ICON::E_SKILL_ICON_PHISICS;
}


