#include "Misc.h"

/*Functie ce adauga item-uri initiale in 
inventarul jucatorului*/
void chest(Player& p)
{
	if (p.getPlayerType() == WarriorOption)
	{
		Item* item1 = new Item("sword");
		Item* item2 = new Item("armour");
		Item* item3 = new Item("shield");
		p.Inventar.push_back(*item1);
		p.Inventar.push_back(*item2);
		p.Inventar.push_back(*item3);
	}
	else
	{
		Item* item1 = new Item("staff");
		Item* item2 = new Item("robe");
		Item* item3 = new Item("hat");
		p.Inventar.push_back(*item1);
		p.Inventar.push_back(*item2);
		p.Inventar.push_back(*item3);
	}
}
/*we prepare the player whit items*/
void preparePlayer(Player& player)
{
	system("cls");

	std::cout << "In front of you there is a chest\n";
	std::cout << "Do you wish to open it\n";
	std::cout << "your answer yes/no:\n";
	std::string answer;
	std::cin >> answer;
	if (answer == "yes")
	{
		chest(player);
		std::cout << "Your items are in the inventory\n";
	}
	else
	{
		std::cout << "good luck\n";
	}

}

void battle(Player& p, Enemy& e)
{
	//we stop the menu sound
	ExploringSound(false);
	//we start the battle sound
	BattleSound(true);
	std::cout << "You are in a battle\n";
	std::cout << "The enemey attacks you\n";
	while (p.getHealth() > 0 || e.getHealth() > 0)
	{
		e.Attack();
		p.DecreaseHealth(10);
		p.Attack();
		e.DecreaseHealth(20);
		if (p.getHealth() <= 0)
		{
			std::cout << "the enemy has killed you\n";
			break;
		}
		else if (e.getHealth() <= 0)
		{
			std::cout << "You have killed the enemy\n";
			break;
		}
		else
		{
			continue;
		}
	}
  

	system("pause");
}

void inTheForest(Player& player)
{
	std::cout << "You are in the forest and see a path ahead" << std::endl;
	std::cout << "And hiding in the bushes there is a ork\n";
	std::cout << "He attacks you\n";
	Enemy* enemy = new Ork();
	battle(player, *enemy);
}


int main()
{	
	//functie pentru clear screen
	system("cls");
	// Initial menu
	MenuSound(true);
	AsciArt();

	std::cout << "\n";
	//game select
	std::cout << "Press 1 for new game" << std::endl;
	std::cout << "Press 2 for load game" << std::endl;
	int option = 0;
	std::cin >> option;
	//implementarea de game select
	Player* player = nullptr;
	if (option == 1)
	{
		player = characterSetup();
		MenuSound(false);
		ExploringSound(true);
		int nextPathOption = chooseRoad();
		preparePlayer(*player);
		inTheForest(*player);
	}
	else if (option == 2)
	{
		//check if save game exists
		std::cout << "Save game will be availabe in the future\n";
	}
	else
	{
		std::cout << "Error,mate." << std::endl;
	}


	delete player;
}
