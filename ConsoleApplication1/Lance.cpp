#include "Lance.h"

Lance::Lance()
{
	attaque = 45;
	durabilite = 70;
	poids = 3;
	nom = "Lance";
	valeur = 50;
}

Lance::~Lance()
{
}

std::string Lance::to_string()
{
	std::string message = Arme::to_string();
	message.append("Tout aussi pointue que maniable, cette arme vous suivra dans tous vos combats ! \n");
	return message;
}