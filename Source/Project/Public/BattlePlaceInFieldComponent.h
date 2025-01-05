#pragma once
#include "CoreMinimal.h"
#include "BattleActorComponentBase.h"
#include "BattlePlaceInFieldEventDispatherDelegate.h"
#include "BattleUnitPlaceOne.h"
#include "E_BTL_FIELD_TYPE.h"
#include "BattlePlaceInFieldComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PROJECT_API UBattlePlaceInFieldComponent : public UBattleActorComponentBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBattlePlaceInFieldEventDispather OnEventDispather;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBattlePlaceInFieldEventDispather OnReplaceFinished;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_IsSuccess;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_IsFinished;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> m_Result;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_IsReplace;
    
    UBattlePlaceInFieldComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void MakeRePlaceWorkFree(int32 rimitX, int32 rimitY, TArray<FBattleUnitPlaceOne> unitArray);
    
    UFUNCTION(BlueprintCallable)
    void MakeNewPlaceWorkFree(int32 rimitX, int32 rimitY, TArray<FBattleUnitPlaceOne> unitArray);
    
    UFUNCTION(BlueprintCallable)
    void MakeNewPlaceWork(E_BTL_FIELD_TYPE Type, TArray<FBattleUnitPlaceOne> unitArray);
    
};

