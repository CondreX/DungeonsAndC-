#include "Intro.h"


//functie pentru textul intro-ului
 void txtIntro()
    {
        std::cout << "*Welcome,stranger.                                                                                                                                                                                       *"  << std::endl;
        std::cout << "*Here in Hinderlands, you'll get to fight dragons and conquer the deadliest dungeons.                                                                                                                    *" << std::endl;
        std::cout << "*In a country where magic rules, anything is possible if you wish so.                                                                                                                                    *" << std::endl;
        std::cout << "*It all depends on you, brave hero.                                                                                                                                                                      *" << std::endl;
    }

 //functie pentru textul intro-ului de wizard
 void txtIntroWizard()
 {
     std::cout << "*Congratulations, grand wizard!                                                                                                                                                                          *" << std::endl;
     std::cout << "*Wizards were the scholars of Hinderlands, spreading knowledge and hope amongst the people.                                                                                                              *" << std::endl;
     std::cout << "*Are you going to help and nurture those in need, or turn to the dark side for the power it held?                                                                                                        *" << std::endl;
     std::cout << "*Choose wisely, young wizard.                                                                                                                                                                            *" << std::endl;
 }

 //functie pentru textul intro-ului de warrior
 void txtIntroWarrior()
 {
     std::cout << "*Congratulations, great warrior!                                                                                                                                                                         *" << std::endl;
     std::cout << "*Warriors were high regarded in Hinderlands, as they were the only protectors of common folk.                                                                                                            *" << std::endl;
     std::cout << "*Are you going to protect the common people, or are you going to instill fear amoungst them?                                                                                                             *" << std::endl;
     std::cout << "*Choose wisely,young warrior.                                                                                                                                                                            *" << std::endl;
 }

 //implementarea programului pentru square box si a textului intro warrior
void IntroWarrior()
{
    system("cls");


    for (int column = 0; column < 200; ++column)
    {
        std::cout << "*";

    }

    std::cout << "\n";
    txtIntroWarrior();
    for (int row = 0; row < 2; ++row)
    {

        std::cout << "*";
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
    std::cout << "\n";
    system("pause");
}


//implementarea programului pentru square box si a textului de intro wizard
void IntroWizard()
{
    system("cls");
    for (int column = 0; column < 200; ++column)
    {
        std::cout << "*";

    }
    std::cout << "\n";
    txtIntroWizard();
    for (int row = 0; row < 2; ++row)
    {

        std::cout << "*";
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
    std::cout << "\n";

    system("pause");
}

//implementarea programului pentru square box si a textului de intro
void intro  ()
{
    system("cls");
    for (int column = 0; column < 200; ++column)
    {
        std::cout << "*";
        
    }
   
    std::cout << "\n";
    txtIntro();
    for (int row = 0; row < 2; ++row)
    {

        std::cout << "*";
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
    std::cout << "\n";
    system("pause");
}


