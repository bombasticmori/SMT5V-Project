#include "SsPart.h"

FSsPart::FSsPart() {
    this->ArrayIndex = 0;
    this->ParentIndex = 0;
    this->Type = SsPartType::Null;
    this->BoundsType = SsBoundsType::None;
    this->InheritType = SsInheritType::Parent;
    this->AlphaBlendType = SsBlendType::Mix;
    this->MaskInfluence = false;
    this->InheritRates[0] = 0.00f;
    this->InheritRates[1] = 0.00f;
    this->InheritRates[2] = 0.00f;
    this->InheritRates[3] = 0.00f;
    this->InheritRates[4] = 0.00f;
    this->InheritRates[5] = 0.00f;
    this->InheritRates[6] = 0.00f;
    this->InheritRates[7] = 0.00f;
    this->InheritRates[8] = 0.00f;
    this->InheritRates[9] = 0.00f;
    this->InheritRates[10] = 0.00f;
    this->InheritRates[11] = 0.00f;
    this->InheritRates[12] = 0.00f;
    this->InheritRates[13] = 0.00f;
    this->InheritRates[14] = 0.00f;
    this->InheritRates[15] = 0.00f;
    this->InheritRates[16] = 0.00f;
    this->InheritRates[17] = 0.00f;
    this->InheritRates[18] = 0.00f;
    this->InheritRates[19] = 0.00f;
    this->InheritRates[20] = 0.00f;
    this->InheritRates[21] = 0.00f;
    this->InheritRates[22] = 0.00f;
    this->InheritRates[23] = 0.00f;
    this->InheritRates[24] = 0.00f;
    this->InheritRates[25] = 0.00f;
    this->InheritRates[26] = 0.00f;
    this->InheritRates[27] = 0.00f;
    this->InheritRates[28] = 0.00f;
    this->InheritRates[29] = 0.00f;
    this->InheritRates[30] = 0.00f;
    this->InheritRates[31] = 0.00f;
    this->InheritRates[32] = 0.00f;
    this->InheritRates[33] = 0.00f;
    this->InheritRates[34] = 0.00f;
    this->InheritRates[35] = 0.00f;
    this->InheritRates[36] = 0.00f;
    this->InheritRates[37] = 0.00f;
    this->InheritRates[38] = 0.00f;
    this->BoneLength = 0;
    this->BoneRotation = 0.00f;
    this->WeightImpact = 0.00f;
    this->IKDepth = 0;
    this->IKRotationArrow = SsIkRotationArrow::Arrowfree;
}

