#include "Menu.h"
#include < conio.h >
#include "Utilitaire.h"
#include < stdlib.h >
#include <iostream>
#include <vector>
#include "Marchand.h"
#include <string>

std::string Menu::to_string()
{
	std::string info;
	info.append("1- Voir le statut de votre aventurier\n");
	info.append("2- Voir les armes disponibles au marché \n");
	info.append("2- Acheter une arme \n");
	info.append("2- Equiper une arme \n");

	return info;
}

Menu::Menu()
{
}

Menu::~Menu()
{
}