#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "UIListCursorData.h"
#include "UIListCursor.generated.h"

UCLASS(Blueprintable)
class PROJECT_API UUIListCursor : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_IsLimitLock;
    
public:
    UUIListCursor();

    UFUNCTION(BlueprintCallable)
    bool MoveCursor(int32 Add, int32 set, bool isLimitStop);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLimitLock();
    
    UFUNCTION(BlueprintCallable)
    void Init(int32 Index, int32 TopIndex, int32 ViewMax, int32 itemNum);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNowIndex();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FUIListCursorData GetCursorData();
    
    UFUNCTION(BlueprintCallable)
    void AddItemNum(int32 Add);
    
};

