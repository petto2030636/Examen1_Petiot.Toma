#include "Marchand.h"

Marchand::Marchand()
{
}

Marchand::~Marchand()
{
}

void Marchand::init()
{
	for (int i = 0; i < 3; i++)
	{
		vecArmem.push_back(FactoryArme::getRandomArme());
	}
}

void Marchand::ajouterArme(Arme* arme)
{
	vecArmem.push_back(arme);
}

std::vector<Arme*> Marchand::getArmeDispo()
{
	return vecArmem;
}