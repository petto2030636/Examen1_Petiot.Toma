#include "Aventurier.h"

Aventurier::Aventurier()
{
	attaque = 10 + monArme->getAtt();
	force = 30;
	orDispo = 100;
	nom = "Jean";
	monArme = new Arme;
}

Aventurier::~Aventurier()
{
}

void Aventurier::acheterArme(Arme* arme)
{
	perdreOr(arme);
	ajouterArme(arme);
}

void Aventurier::ajouterArme(Arme* arme)
{
	vecArme.push_back(arme);
}

void Aventurier::changerArme(Arme* arme)
{
	vecArme.push_back(monArme);
	monArme = arme;
	//Soucis de dupplications
}

int Aventurier::perdreOr(Arme* arme)
{
	orDispo -= arme->getValeur();
}

int Aventurier::getAtt()
{
	return attaque;
}

std::string Aventurier::to_string()
{
	std::string info;
	info.append("Nom : " + nom + "\n");
	info.append("Attaque : " + std::to_string(this->getAtt()) + "\n");

	return info;
}