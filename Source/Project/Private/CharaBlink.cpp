#include "CharaBlink.h"

UCharaBlink::UCharaBlink() {
    this->KeyList.SetNum(1); // Ensure the array has at least 1 elements
    this->KeyList[0] = FCharaBlinkKey();
}
