#include "StaticMeshTableRow.h"

FStaticMeshTableRow::FStaticMeshTableRow() {
    this->Disable = 0;
    this->LODNum = 0;
    this->CastShadowLODNum = 0;
    this->SectionNum = 0;
    this->Percent0 = 0;
    this->Percent1 = 0;
    this->Percent2 = 0;
    this->Percent3 = 0;
    this->bAutoComputeLODScreenSize = 0;
    this->ScreenSize1 = 0.00f;
    this->ScreenSize2 = 0.00f;
    this->ScreenSize3 = 0.00f;
    this->LOD_GenerateLM = 0;
    this->LOD_SrcLM = 0;
    this->LOD_DstLM = 0;
    this->BuildAdjacencyBuffer = 0;
    this->BuildReversedIndexBuffer = 0;
    this->Gen_LightmapResolution = 0;
}

