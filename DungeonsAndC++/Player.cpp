#include "Player.h"

void Player::Attack()
{
}

void Player::Defense()
{
}

Player::Player()
{
	health = 100;
	mana = 100;
	nume = "Necunoscut";
}

Player::~Player()
{
}

void Player::IncreaseHealth(int health)
{
	this->health += health;
}

void Player::DecreaseHealth(int health)
{
	this->health -= health;
}

void Player::setMana(int mana)
{
	this->mana = mana;
}

void Player::setName(std::string nume)
{
	this->nume = nume;
}

int Player::getHealth()
{
	return health;
}

int Player::getMana()
{
	return mana;
}

void Player::setPlayerType(CharacterOption option)
{
	if (option == WarriorOption)
		eCaracterOption = WarriorOption;
	else
		eCaracterOption = WizardOption;

}

std::string Player::getName()
{
	return nume;
}

CharacterOption Player::getPlayerType()
{
	return eCaracterOption;
}
