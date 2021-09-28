#include "Epee.h"

Epee::Epee()
{
	attaque = 60;
	durabilite = 45;
	poids = 4;
	nom = "Epee";
	valeur = 60;
}

Epee::~Epee()
{
}

std::string Epee::to_string()
{
	std::string message = Arme::to_string();
	message.append("Une arme polyvalente et efficace, mais toute fois un peu lourde... \n");
	return message;
}