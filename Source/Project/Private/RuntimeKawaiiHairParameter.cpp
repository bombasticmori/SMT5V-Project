#include "RuntimeKawaiiHairParameter.h"

FRuntimeKawaiiHairParameter::FRuntimeKawaiiHairParameter() {
    this->Settings = FKawaiiPhysicsSettings();
    this->Alpha = 0.00f;
    this->PoseLocationApplyRate = 0.00f;
    this->ForceCenter = { 0, -7, -20 };
    this->ForceRightA = { -2, -5, -20 };
    this->ForceRightB = { -4, -5, -20 };
    this->ForceRightC = { -6, -3, -20 };
    this->ForceLeftA = { 2, -5, -20 };
    this->ForceLeftB = { 4, -5, -20 };
    this->ForceLeftB = { 6, -3, -20 };
}

