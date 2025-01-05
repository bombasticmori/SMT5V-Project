#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "CharaMotion.h"
#include "E_CHARA_MOTION_ID.h"
#include "CharaMotionTable.generated.h"

UCLASS(Blueprintable)
class PROJECT_API UCharaMotionTable : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<E_CHARA_MOTION_ID, FCharaMotion> Map;
    
    UCharaMotionTable();

};

