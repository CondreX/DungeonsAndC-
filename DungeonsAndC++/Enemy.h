#pragma once
#include <string>
class Enemy
{
	int health;
	int attack;
protected:
	void IncreaseHealth(int health);
public:
	void Attack();
	void Defense();
	void SetAtack(int attack);
	Enemy();
	virtual ~Enemy();
	int	getHealth();
	void DecreaseHealth(int health);
};

