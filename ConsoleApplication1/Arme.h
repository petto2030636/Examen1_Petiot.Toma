#pragma once
#include <string>

class Arme
{
protected :
	int valeur;
	int attaque;
	int durabilite;
	float poids;
	std::string nom;
	enum rarete
	{
		Commun = 1,
		Rare = 2,
		Epique = 3,
		Legendaire = 4,
	};

public:
	Arme();
	~Arme();

	int getValeur();
	int getAtt();
	int getDur();
	float getPoids();
	std::string getNom();
	
	virtual std::string to_string();
};

