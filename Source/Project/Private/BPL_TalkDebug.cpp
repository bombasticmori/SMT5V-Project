#include "BPL_TalkDebug.h"

UBPL_TalkDebug::UBPL_TalkDebug() {
}

void UBPL_TalkDebug::TalkDebugWantReduceUniqueSkillDevilIdSet(int32 DevilID) {
}

int32 UBPL_TalkDebug::TalkDebugWantReduceUniqueSkillDevilIdGet() {
    return 0;
}

void UBPL_TalkDebug::TalkDebugWantReacSet(E_TALK_WANT_REAC wantReac) {
}

E_TALK_WANT_REAC UBPL_TalkDebug::TalkDebugWantReacGet() {
    return E_TALK_WANT_REAC::WANT_REAC_INVALID;
}

void UBPL_TalkDebug::TalkDebugWantHPMPRankSet(int32 rank) {
}

int32 UBPL_TalkDebug::TalkDebugWantHPMPRankGet() {
    return 0;
}

void UBPL_TalkDebug::TalkDebugSafetyUniqueSkillDevilIdSet(int32 DevilID) {
}

int32 UBPL_TalkDebug::TalkDebugSafetyUniqueSkillDevilIdGet() {
    return 0;
}

E_TALK_MOON_TEMPER_STATUS UBPL_TalkDebug::TalkDebugMoonTemperStatusSet(E_TALK_MOON_TEMPER_STATUS status) {
    return E_TALK_MOON_TEMPER_STATUS::INVALID;
}

E_TALK_MOON_TEMPER_STATUS UBPL_TalkDebug::TalkDebugMoonTemperStatusGet() {
    return E_TALK_MOON_TEMPER_STATUS::INVALID;
}

bool UBPL_TalkDebug::TalkDebugFlagToggle(eTalkDebugFlag debugFlag) {
    return false;
}

bool UBPL_TalkDebug::TalkDebugFlagSet(eTalkDebugFlag debugFlag, bool Value) {
    return false;
}

bool UBPL_TalkDebug::TalkDebugFlagGet(eTalkDebugFlag debugFlag) {
    return false;
}

eTalkDebugFlag UBPL_TalkDebug::eTalkDebugFlag_FromString(const FString& enumString) {
    return eTalkDebugFlag::None;
}


