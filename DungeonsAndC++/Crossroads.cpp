#include "Crossroads.h"

int chooseRoad()
{
    int playerOption=0;
    crossroads();
    std::cout << "Choose one of the options: " << std::endl;
    std::cout << "Option 1 is for forward path " << std::endl;
    std::cout << "Option 2 is for left path " << std::endl;
    std::cout << "Option 3 is for right path " << std::endl;
    std::cin >> playerOption;
    return playerOption;
}



void crossroads()
{
    system("cls");
	// aici implementarea pt imagine
    for (int column = 0; column < 200; ++column)
    {
        std::cout << "*";
    }
 
    std::cout << "\n";
    //we text our description
    text();
    for (int row = 0; row < 5; ++row)
    {  std::cout << "*";
        for (int column = 0; column < 200; ++column)
        {
            std::cout << " ";
        }
        std::cout << "*\n";
    }
    for (int column = 0; column < 200; ++column)
    {
        std::cout << "*";
    }
    std::cout << "\n";

}

void text()
{
    std::cout << "*In front of your eyes, lies the Hinderlands.                                                                                                                                                            *" << std::endl;
    std::cout << "*You find yourself at a crossroad, ahead lies a dense forest,                                                                                                                                            *" << std::endl;
    std::cout << "*at your left a cave is visible and at your right side a village arises.                                                                                                                                 *" <<std::endl;
    std::cout << "*  Where will you go, brave adventurer?                                                                                                                                                     *" << std::endl;
}
