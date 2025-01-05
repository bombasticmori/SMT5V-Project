#pragma once
#include "CoreMinimal.h"
#include "SaveDataConvertResult.h"
#include "ConvertSaveDataCompleteDispatherDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FConvertSaveDataCompleteDispather, FSaveDataConvertResult, result);

