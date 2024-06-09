#include "Misc.h"



void IntroAndSetup(Player* p)
{
	std::string name;
	std::cout << "What is your name?" << std::endl;
	std::cin.ignore();
	std::getline(std::cin, name);
	p->setName(name);
}

void AsciArt()
{
	std::cout << R"(
``###"""##.                                                                                 ###""##            .##"""###                     
  ##    `##.                                                                               ###  ##          .##'     `#                     
  ##     `## `###  `###  `########.   .#"#####  .##"##   ###"##.  `########.  ###"###       ####"           ##'       `     #         #     
  ##      ##   ##    ##    ##    ##  :##
  ##   ##'   ## ##'   `##   ##    ##  ##   `"      ####N.  ##"'     ##              #         #     
  ##     ###   ##    ##    ##    ##   #####"   ##"""""" ##     ##   ##    ##  `#####.     ##.  ###.#'       ##.         ######### ######### 
  ##    ###'   ##    ##    ##    ##  ##        ##.    # ##.   ###   ##    ##  #.   ##     ###   ####        `##.     #'     #         #     
.########'     `##o#"###..####  ####. #######   `#####'  `#####'  .####  ####.######'     `#####'``###.       `"#####'      #         #     
                                     #'     ##                                                                                              
                                     ######'                                                                                                
)" << std::endl;
}

Player* characterSetup() {
	system("cls");
	//intro
	intro();
	std::cout << "\n";
	//character select
	std::cout << "Character select" << std::endl;
	int characterOption = 0;
	std::cout << "Press 1 for warrior" << std::endl;
	std::cout << "Press 2 for wizard" << std::endl;
	std::cout << "Press 3 for rogue" << std::endl;
	std::cin >> characterOption;

	Player* player = nullptr;

	switch (characterOption)
	{
	case WarriorOption:
		IntroWarrior();
		{
			player = new Warrior();
			IntroAndSetup(player);
			std::cout << "Hello " << player->getName();
			std::cout << "Brave warriow\n";
			break;
		}

	case WizardOption:
		IntroWizard();
		{
			player = new Wizard;
			IntroAndSetup(player);
			std::cout << "Hello " << player->getName();
			std::cout << "Mighty wizzard\n";
			break;
		}

	default:
	{
		std::cout << "Error,mate." << std::endl;
		break;
	}
	}

	//retrunam un pointer de player
	return player;
}
bool BattleSound(bool play)
{
	if (play == true) {
		std::string path = "E:\ITSCHOOL\DungeonsAndC++\BattleFinal.wav";
		if (CheckPath(path))
			PlaySound(TEXT("E:\ITSCHOOL\DungeonsAndC++\BattleFinal.wav"), NULL, SND_LOOP | SND_ASYNC);	
	}
		
	else {}
	return play;
}

bool MenuSound(bool play)
{
	if (play == true) {
		std::string path = "E:\ITSCHOOL\DungeonsAndC++\/Main_Menu.wav";
		if (CheckPath(path))
			PlaySound(TEXT("E:\ITSCHOOL\DungeonsAndC++\/Main_Menu.wav"), NULL, SND_LOOP | SND_ASYNC);		
	}
	else {}
	return play;
}

bool ExploringSound(bool play)
{
	if (play == true) {
		std::string path = "E:\ITSCHOOL\DungeonsAndC++\/Exploring.wav";
		if(CheckPath(path))
			PlaySound(TEXT("E:\ITSCHOOL\DungeonsAndC++\/Exploring.wav"), NULL, SND_LOOP | SND_ASYNC);
	}
	else {}
	return play;
}

bool CheckPath(const std::string& path)
{
	std::ifstream f(path.c_str());
	if (f.good())
		return true;
	else
		return false;
	
}
