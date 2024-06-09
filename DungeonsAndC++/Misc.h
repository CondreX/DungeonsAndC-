#pragma once
#include <iostream>
#include "Intro.h"
#include"Player.h"
#include "Warrior.h"
#include "Wizard.h"
#include <windows.h>
#include "Crossroads.h"
#include"Goblin.h"
#include"Ork.h"
#include<fstream>

void AsciArt();
Player* characterSetup();
void IntroAndSetup(Player* p);
bool BattleSound(bool play);
bool MenuSound(bool play);
bool ExploringSound(bool play);
bool CheckPath(const std::string& path);