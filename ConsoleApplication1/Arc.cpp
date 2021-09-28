#include "Arc.h"

Arc::Arc()
{
	attaque = 70;
	durabilite = 25;
	poids = 1;
	nom = "Arc";
	valeur = 35;
}

Arc::~Arc()
{
}

std::string Arc::to_string()
{
	std::string message = Arme::to_string();
	message.append("Facile a transporter, cette arme est aussi redoutable que fragile. \n");
	return message;
}