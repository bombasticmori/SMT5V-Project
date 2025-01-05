#pragma once
#include "CoreMinimal.h"
#include "DlcTableDataDispatherDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FDlcTableDataDispather, FName, ContentNameTag);

