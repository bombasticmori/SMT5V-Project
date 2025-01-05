#pragma once
#include "CoreMinimal.h"
#include "NaviDevilGimmickActors.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct PROJECT_API FNaviDevilGimmickActors {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_Category;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> m_Actors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_ExistNum;
    
    FNaviDevilGimmickActors();
};

