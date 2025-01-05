#include "BPL_CampPartyPanel.h"

UBPL_CampPartyPanel::UBPL_CampPartyPanel() {
}

int32 UBPL_CampPartyPanel::CampPartyPanel_GetStockPanelNum() {
    return 0;
}

int32 UBPL_CampPartyPanel::CampPartyPanel_GetAttribute_Type_Max() {
    return 0;
}

E_DEFENCE_RESISTANCE UBPL_CampPartyPanel::CampPartyPanel_CheckResistanceType(int32 Param) {
    return E_DEFENCE_RESISTANCE::E_DEFENCE_RESISTANCE_WEAK;
}


