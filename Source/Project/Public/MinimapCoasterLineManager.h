#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "MinimapCoasterLine.h"
#include "MinimapCoasterLineRenderEntry.h"
#include "MinimapCoasterLineManager.generated.h"

class UImage;

UCLASS(Blueprintable)
class PROJECT_API UMinimapCoasterLineManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FMinimapCoasterLine> m_Lines;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FMinimapCoasterLineRenderEntry> m_RenderEntries;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UImage*> m_ImageArray;
    
public:
    UMinimapCoasterLineManager();

};

