#include "Warrior.h"

void Warrior::setWarriorType()
{
	setPlayerType(WarriorOption);
}

Warrior::Warrior()
{
	IncreaseHealth(50);
	setWarriorType();
}

Warrior::~Warrior()
{
}
