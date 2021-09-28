#pragma once
#include <stdlib.h>


enum class TypeArme
{
	Epee = 1,
	Lance = 2,
	Arc = 3,
};

enum class MENU
{
	MENU_Principal = 0,
	MENU_Aventurier = 1,
	MENU_Marche = 2,
	MENU_Achat = 3,
	MENU_Equip = 4,
};

class Utilitaire
{
public:
	static int genererNb(int min, int max)
	{
		return (rand() % (max - min + 1)) + min;
	}

#define KEY_UN 49
#define KEY_DEUX 50
#define KEY_TROIS 51
#define KEY_QUATRE 52
#define KEY_B 98
};

