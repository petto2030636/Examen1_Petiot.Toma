#include "FactoryArme.h"
#include "Utilitaire.h"

Arme* FactoryArme::getRandomArme()
{
	Arme* arme;

	TypeArme typeA = (TypeArme)Utilitaire::genererNb(1, 3);
	if (typeA == TypeArme::Epee)
		arme = new Epee;
	else if (typeA == TypeArme::Lance)
		arme = new Lance;
	else
		arme = new Arc;

	return arme;
}