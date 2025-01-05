#include "BPL_GodParameter.h"

UBPL_GodParameter::UBPL_GodParameter() {
}

void UBPL_GodParameter::SetGodParameterSkillNewIcon(int32 argSkillID) {
}

void UBPL_GodParameter::SetGodParameterSkillActiveState(int32 argSkillID, bool IsActive) {
}

void UBPL_GodParameter::SetGodParameterPoint(int32 Value) {
}

void UBPL_GodParameter::ResetGodParameterSkillNewIcon(int32 argSkillID) {
}

void UBPL_GodParameter::ResetGodParameterSkill(int32 argSkillID) {
}

bool UBPL_GodParameter::IsSetGodParameterSkillNewIcon(int32 argSkillID) {
    return false;
}

bool UBPL_GodParameter::IsLearningGodParameterSkillFromEnum(E_GODPARAMETER_ID argSkillID) {
    return false;
}

bool UBPL_GodParameter::IsLearningGodParameterSkill(int32 argSkillID) {
    return false;
}

bool UBPL_GodParameter::IsLearnableGodParameterSkill(int32 argSkillID) {
    return false;
}

bool UBPL_GodParameter::IsExistNewGodParameterSkill() {
    return false;
}

bool UBPL_GodParameter::IsAddedSelectableGodParameterSkill(int32 argSkillID) {
    return false;
}

bool UBPL_GodParameter::IsActiveGodParameterSkill(int32 argSkillID) {
    return false;
}

void UBPL_GodParameter::GodParameterSkillLearningAll() {
}

bool UBPL_GodParameter::GodParameterSkillLearning(int32 argSkillID, bool forced) {
    return false;
}

int32 UBPL_GodParameter::GetUserDataFromGodParameterData(E_GODPARAMETER_ID ID) {
    return 0;
}

E_GODPARAMETER_STATE UBPL_GodParameter::GetGodParameterSkillState(int32 argSkillID) {
    return E_GODPARAMETER_STATE::E_GODPARAMETER_STATE_INVALID_ID;
}

int32 UBPL_GodParameter::GetGodParameterSKillNum() {
    return 0;
}

int32 UBPL_GodParameter::GetGodParameterPointMaxNum() {
    return 0;
}

int32 UBPL_GodParameter::GetGodParameterPoint() {
    return 0;
}

FText UBPL_GodParameter::GetGodParameterNameFromEnum(E_GODPARAMETER_ID ID) {
    return FText::GetEmpty();
}

FText UBPL_GodParameter::GetGodParameterName(int32 ID) {
    return FText::GetEmpty();
}

int32 UBPL_GodParameter::GetGodParameterLearningNumFromType(E_GODPARAMETER_TYPE Type) {
    return 0;
}

FText UBPL_GodParameter::GetGodParameterHelpFromEnum(E_GODPARAMETER_ID ID) {
    return FText::GetEmpty();
}

FText UBPL_GodParameter::GetGodParameterHelp(int32 ID) {
    return FText::GetEmpty();
}

FGodParameterData UBPL_GodParameter::GetGodParameterDataFromEnum(E_GODPARAMETER_ID ID) {
    return FGodParameterData{};
}

FGodParameterData UBPL_GodParameter::GetGodParameterData(int32 ID) {
    return FGodParameterData{};
}

void UBPL_GodParameter::ClearGodParameterSkillLearningAll(bool isRenewalNewGame) {
}

void UBPL_GodParameter::ClearGodParameterSkillLearning(int32 argSkillID) {
}

void UBPL_GodParameter::AddGodParameterPoint(int32 Value) {
}


