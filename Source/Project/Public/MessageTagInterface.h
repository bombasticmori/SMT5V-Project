#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "MessageTagInterface.generated.h"

class UScriptMessageAsset;

UINTERFACE(BlueprintType, meta=(CannotImplementInterfaceInBlueprint))
class UMessageTagInterface : public UInterface {
    GENERATED_BODY()
};

class IMessageTagInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    virtual void SetValueParam(int32 InIndex, int32 Value) PURE_VIRTUAL(SetValueParam,);
    
    UFUNCTION(BlueprintCallable)
    virtual void SetSkillHelpSkillId(int32 InSkillId) PURE_VIRTUAL(SetSkillHelpSkillId,);
    
    UFUNCTION(BlueprintCallable)
    virtual void SetScriptMessageByLabel(const UScriptMessageAsset* InAsset, FName InMessageLabel, bool bBuildText) PURE_VIRTUAL(SetScriptMessageByLabel,);
    
    UFUNCTION(BlueprintCallable)
    virtual void SetScriptMessageByID(const UScriptMessageAsset* InAsset, int32 InMessageId, bool bBuildText) PURE_VIRTUAL(SetScriptMessageByID,);
    
    UFUNCTION(BlueprintCallable)
    virtual void SetProgramValueNum(int32 InIndex, int32 InNumber, int32 InFigure, bool bInZeroFill) PURE_VIRTUAL(SetProgramValueNum,);
    
    UFUNCTION(BlueprintCallable)
    virtual void SetProgramValue(int32 InIndex, const FString& InValue) PURE_VIRTUAL(SetProgramValue,);
    
    UFUNCTION(BlueprintCallable)
    virtual void SetItemHelpItemId(int32 InItemId) PURE_VIRTUAL(SetItemHelpItemId,);
    
    UFUNCTION(BlueprintCallable)
    virtual int32 GetValueParam(int32 InIndex) PURE_VIRTUAL(GetValueParam, return 0;);
    
    UFUNCTION(BlueprintCallable)
    virtual void BuildText() PURE_VIRTUAL(BuildText,);
    
};

