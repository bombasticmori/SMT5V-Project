#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "ConvertSaveDataCompleteDispatherDelegate.h"
#include "SaveDataConvertResult.h"
#include "SaveDataConverter.generated.h"

UCLASS(Blueprintable)
class PROJECT_API USaveDataConverter : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FConvertSaveDataCompleteDispather ConvertComplete;
    
    USaveDataConverter();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void OverrideTrophyDataByConvertResult(const UObject* WorldContextObject, const FSaveDataConvertResult& convertResult);
    
    UFUNCTION(BlueprintCallable)
    void ConvertSaveDataPS4toPS5Async();
    
};

