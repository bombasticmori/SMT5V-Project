#include "MapSymbolRouteNode.h"

FMapSymbolRouteNode::FMapSymbolRouteNode() {
    this->m_Done = false;
    this->m_Cost = 0.00f;
    this->m_PrevConnectIndex = 0;
    this->m_Slope = 0.00f;
    this->m_X = 0;
    this->m_Y = 0;
}

