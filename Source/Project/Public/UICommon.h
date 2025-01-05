#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=Geometry -FallbackName=Geometry
#include "E_WIDGET_PRIO.h"
#include "UICommon.generated.h"

class AActor;
class UCanvasPanel;
class UUserWidget;

UCLASS(Blueprintable)
class PROJECT_API UUICommon : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UUICommon();

    UFUNCTION(BlueprintCallable)
    static AActor* SpawnUIActor(UClass* pClass);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GeometryEquals(const FGeometry& A, const FGeometry& B);
    
    UFUNCTION(BlueprintCallable)
    static FLinearColor CalcScreenToWidgetUVEx(const UCanvasPanel* Canvas, const FGeometry& Geometry, float& OutScale);
    
    UFUNCTION(BlueprintCallable)
    static FLinearColor CalcScreenToWidgetUV(const UCanvasPanel* Canvas, const FGeometry& Geometry);
    
    UFUNCTION(BlueprintCallable)
    static bool AddToWidgetPrio(UUserWidget* Widget, E_WIDGET_PRIO prio);
    
};

