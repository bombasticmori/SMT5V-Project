#include "PlayerGrowTable.h"

FPlayerGrowTable::FPlayerGrowTable() {
	this->m_Data.SetNum(1); // Ensure the array has at least 1 elements
	this->m_Data[0] = FPlayerGrowData();
}

