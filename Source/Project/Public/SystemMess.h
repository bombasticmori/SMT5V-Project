#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "SystemMess.generated.h"

class UScriptMessageAsset;

UCLASS(Blueprintable)
class PROJECT_API ASystemMess : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FText> m_Texts;
    
public:
    ASystemMess(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    bool MakeUp(UScriptMessageAsset* pText);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetText(const int32 Index);
    
    UFUNCTION(BlueprintCallable)
    void Finalize();
    
};

