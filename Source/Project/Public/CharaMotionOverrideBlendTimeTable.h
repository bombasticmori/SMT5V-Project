#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "CharaMotionOverrideBlendTime.h"
#include "E_CHARA_MOTION_ID.h"
#include "CharaMotionOverrideBlendTimeTable.generated.h"

UCLASS(Blueprintable)
class PROJECT_API UCharaMotionOverrideBlendTimeTable : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<E_CHARA_MOTION_ID, FCharaMotionOverrideBlendTime> BlendMap;
    
    UCharaMotionOverrideBlendTimeTable();

};

