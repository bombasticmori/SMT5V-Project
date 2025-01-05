#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "MotionViewerTableCtrl.generated.h"

class UDataTable;

UCLASS(Blueprintable)
class PROJECT_API UMotionViewerTableCtrl : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* m_TableData;
    
    UMotionViewerTableCtrl();

    UFUNCTION(BlueprintCallable)
    void StartCreateTableBlocking(const TArray<FName> PackagePath);
    
    UFUNCTION(BlueprintCallable)
    void StartCreateTable(const TArray<FName> PackagePath);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool isRunCreateTable();
    
};

