#include "SMMIAssetEditor.h"
#include "Editor.h"

void SMMIAssetEditor::Construct(const FArguments& InArgs)
{
}

int32 SMMIAssetEditor::OnPaint(const FPaintArgs& Args, const FGeometry& AllottedGeometry, const FSlateRect& MyCullingRect, FSlateWindowElementList& OutDrawElements, int32 LayerId, const FWidgetStyle& InWidgetStyle, bool bParentEnabled) const
{
	const int32 NumPoints = 512;
	TArray<FVector2D> Points;
	Points.Reserve(NumPoints);
	FSlateDrawElement::MakeLines(OutDrawElements, LayerId, AllottedGeometry.ToPaintGeometry(), Points);
	return LayerId;
}

FVector2D SMMIAssetEditor::ComputeDesiredSize(float LayoutScaleMultiplier) const
{
	return FVector2D(200.0, 200.0);
}

FReply SMMIAssetEditor::OnMouseButtonDown(const FGeometry& MyGeometry, const FPointerEvent& MouseEvent)
{
	return FReply::Handled().CaptureMouse(SharedThis(this));
}

FReply SMMIAssetEditor::OnMouseButtonUp(const FGeometry& MyGeometry, const FPointerEvent& MouseEvent)
{
	if (GEditor) GEditor->EndTransaction();
	return FReply::Handled().ReleaseMouseCapture();;
}

FReply SMMIAssetEditor::OnMouseMove(const FGeometry& MyGeometry, const FPointerEvent& MouseEvent)
{
	if (!HasMouseCapture()) return FReply::Unhandled();
	return FReply::Handled();
}
