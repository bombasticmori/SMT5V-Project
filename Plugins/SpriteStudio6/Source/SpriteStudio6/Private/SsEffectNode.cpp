#include "SsEffectNode.h"

FSsEffectNode::FSsEffectNode() {
    this->ArrayIndex = 0;
    this->ParentIndex = 0;
    this->Type = SsEffectNodeType::Root;
    this->Visible = false;
}

