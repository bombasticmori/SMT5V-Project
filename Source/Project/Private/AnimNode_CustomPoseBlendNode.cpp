#include "AnimNode_CustomPoseBlendNode.h"

FAnimNode_CustomPoseBlendNode::FAnimNode_CustomPoseBlendNode() {
    this->PoseAsset = NULL;
    this->PoseWeightTable = NULL;
    this->BlendOption = EAlphaBlendOption::Linear;
    this->CustomCurve = NULL;
    this->Alpha = 0.00f;
}

