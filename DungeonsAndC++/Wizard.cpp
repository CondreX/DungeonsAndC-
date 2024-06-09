#include "Wizard.h"

void Wizard::setWizardType()
{
	setPlayerType(WizardOption);
}

Wizard::Wizard()
{
	setWizardType();
	setMana(50);
}

Wizard::~Wizard()
{
}
