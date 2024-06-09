#pragma once
#include<string>
#include<vector>
#include"Item.h"
enum CharacterOption
{
	WarriorOption = 1, WizardOption
};


/*base class player*/
class Player
{
private:
	int health;
	int mana;
	std::string nume;
	CharacterOption eCaracterOption;
public:
	void Attack();
	void Defense();
	Player();
	virtual ~Player();
	void setName(std::string nume);
	std::string getName();
	std::vector<Item> Inventar;
	CharacterOption getPlayerType();
	void DecreaseHealth(int health);
	int	getHealth();
	int getMana();
protected:
	void IncreaseHealth(int health);

	void setMana(int mana);

	void setPlayerType(CharacterOption option);
	
};

  