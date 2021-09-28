#pragma once
#include <vector>
#include "Arme.h"
#include "FactoryArme.h"

class Marchand
{
public:
	Marchand();
	~Marchand();

	std::vector<Arme*> vecArmem;

	std::vector<Arme*> getArmeDispo();
	void init();
	void ajouterArme(Arme* arme);
};
