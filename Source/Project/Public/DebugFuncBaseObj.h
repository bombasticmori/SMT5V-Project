#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "DebugFuncBaseObj.generated.h"

UCLASS(Blueprintable)
class PROJECT_API UDebugFuncBaseObj : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_IsFuncAlways;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_IsDebugMenuKeyLock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_IsUpdateAlways;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Location;
    
    UDebugFuncBaseObj();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool UpdateAlwaysFunc(const FName& itemPathName);
    
    UFUNCTION(BlueprintCallable)
    void SetIsFuncAlways(bool isAlways);
    
    UFUNCTION(BlueprintCallable)
    void SetIsDebugMenuKeyLock(bool isLock);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveDestroyed();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFuncAlways();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDebugMenuKeyLock();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool Initialize();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool ExecFuncAlways();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool ExecFunc(const FName& itemPathName);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool CheckAddMenu();
    
};

