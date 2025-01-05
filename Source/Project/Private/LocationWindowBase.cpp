#include "LocationWindowBase.h"

ALocationWindowBase::ALocationWindowBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void ALocationWindowBase::setType(E_LOCATION_WINDOW_TYPE InType) {
}

void ALocationWindowBase::setTokyoLargeMapPlaceName(const FText& InText) {
}

void ALocationWindowBase::setFacilityName(const FText& InText) {
}

E_LOCATION_WINDOW_TYPE ALocationWindowBase::GetType() const {
    return E_LOCATION_WINDOW_TYPE::None;
}

FText ALocationWindowBase::GetTokyoLargeMapPlaceName() const {
    return FText::GetEmpty();
}

FText ALocationWindowBase::GetFacilityName() const {
    return FText::GetEmpty();
}



