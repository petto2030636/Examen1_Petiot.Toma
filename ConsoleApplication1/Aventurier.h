#pragma once
#include <vector>
#include <string>
#include "Arme.h"

class Aventurier
{
public:
	int attaque;
	int force;
	int orDispo;
	std::string nom;
	Arme* monArme;
	std::vector<Arme*> vecArme;

	Aventurier();
	~Aventurier();

	int getAtt();
	void acheterArme(Arme* arme);
	void ajouterArme(Arme* arme);
	void changerArme(Arme* arme);

	int perdreOr(Arme* arme);

	virtual std::string to_string();
};

