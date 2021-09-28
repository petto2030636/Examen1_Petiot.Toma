#include "Arme.h"

Arme::Arme()
{
	attaque = 0;
	durabilite = 0;
	valeur = 0;
	poids = 0;
	nom = " ";
	valeur = 0;
}

Arme::~Arme()
{
}

int Arme::getDur()
{
	return durabilite;
}

int Arme::getAtt()
{
	return attaque;
}

int Arme::getValeur()
{
	return valeur;
}

std::string Arme::getNom()
{
	return nom;
}

float Arme::getPoids()
{
	return poids;
}

std::string Arme::to_string()
{
	std::string info;
	info.append("Nom : " + nom + "\n");
	info.append("Attaque : " + std::to_string(this->getAtt()) + "\n");
	info.append("Durabilite : " + std::to_string(this->getDur()) + "\n");
	info.append("Poids : " + std::to_string(this->getPoids()) + "\n");
	return info;
}