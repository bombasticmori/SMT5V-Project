#pragma once
#include "CoreMinimal.h"
#include "E_BST_TYPE.generated.h"

UENUM(BlueprintType)
enum class E_BST_TYPE : uint8 {
    E_BST_TYPE_ATTR,
    E_BST_TYPE_ABNORMAL,
    E_BST_TYPE_ETC,
};

