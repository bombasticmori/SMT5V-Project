#pragma once

#include "CoreMinimal.h"
#include "Widgets/SCompoundWidget.h"
/**
 * 
 */
class SMMIAssetEditor : public SCompoundWidget
{
public:
	SLATE_BEGIN_ARGS(SMMIAssetEditor)
		{
		}
	SLATE_END_ARGS()

	void Construct(const FArguments& InArgs);
	int32 OnPaint(const FPaintArgs& Args, const FGeometry& AllottedGeometry, const FSlateRect& MyCullingRect, FSlateWindowElementList& OutDrawElements, int32 LayerId, const FWidgetStyle& InWidgetStyle, bool bParentEnabled) const override;
	FVector2D ComputeDesiredSize(float LayoutScaleMultiplier) const override;
	
	FReply OnMouseButtonDown(const FGeometry& MyGeometry, const FPointerEvent& MouseEvent) override;
	FReply OnMouseButtonUp(const FGeometry& MyGeometry, const FPointerEvent& MouseEvent) override;
	FReply OnMouseMove(const FGeometry& MyGeometry, const FPointerEvent& MouseEvent) override;

};
