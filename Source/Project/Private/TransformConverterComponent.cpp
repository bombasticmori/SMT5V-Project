#include "TransformConverterComponent.h"

UTransformConverterComponent::UTransformConverterComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->LocationConvert = EConvertLocationType::AttachParent;
    this->RotationConvert = EConvertRotationType::AttachParent;
    this->ScaleConvert = EConvertScaleType::AttachParent;
}


