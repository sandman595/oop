
#include "CavalryDPS.hpp"

CavalryDPS::CavalryDPS(std::string playerID, std::string unitID, CombatObjectTypeFactory *combatObjectTypeFactory)
{
    health = 150;
    
    type = combatObjectTypeFactory->getCombatObjectType(80, 40, 1);
    this->playerID = playerID;
    this->ID = unitID;

    critChance = 0.2;
    critDamage = 2.3;
    objectType = CAV_DPS;
}











