#include "EnJeu.h"
#include < conio.h >
#include "Utilitaire.h"
#include < stdlib.h >
#include <iostream>
#include "Marchand.h"
#include <vector>
#include "Aventurier.h"
#include "Arme.h"

void EnJeu::handleEvents(float deltaTime, GameManager* myGame)
{
	if (_kbhit() != 0)
	{
		if (menuAffiche == MENU::MENU_Principal)
		{
			switch (_getch())
			{
			case KEY_UN:
				changerMenu(MENU::MENU_Aventurier);
				break;
			case KEY_DEUX:
				changerMenu(MENU::MENU_Marche);
				break;
			case KEY_TROIS:
				changerMenu(MENU::MENU_Achat);
				break;
			case KEY_QUATRE:
				changerMenu(MENU::MENU_Equip);
			}
		}
		else if (menuAffiche == MENU::MENU_Achat)
		{
			int keyCodeValue = _getch();

			if (keyCodeValue == KEY_B)
			{
				changerMenu(MENU::MENU_Principal);
			}

			int choixVaisseau = keyCodeValue - 48;

		}
		else if (menuAffiche == MENU::MENU_Marche)
		{
			changerMenu(MENU::MENU_Principal);
		}

		else if (menuAffiche == MENU::MENU_Aventurier)
		{
			changerMenu(MENU::MENU_Principal);
		}

		else if (menuAffiche == MENU::MENU_Equip)
		{
			changerMenu(MENU::MENU_Principal);
		}
	}
}

void EnJeu::changerMenu(MENU nouvMenu)
{
	system("CLS");
	menuAffiche = nouvMenu;
	afficherMenu(menuAffiche);
}

void EnJeu::afficherMenu(MENU menu)
{
	switch (menu)
	{

	case MENU::MENU_Principal:
		std::cout << "1- Voir le statut de votre aventurier\n";
		std::cout << "2- Voir les armes disponibles au marche \n";
		std::cout << "3- Acheter une arme \n";
		std::cout << "4- Equiper une arme \n";

		break;

	case MENU::MENU_Achat:
		//Aventurier::acheterArme()
		break;

	case MENU::MENU_Marche:
		//Affichage des armes disponibles
		/*std::vector<Arme*> vecAffichage;
		vecAffichage = Marchand::getArmeDispo;
		for (auto it = vecAffichage.begin(); it != vecAffichage.end(); it++)
		{
			std::cout << *it << ' ';
		}
		break;*/

	case MENU::MENU_Equip:
		//Affichage des armes possédés
		
		/*for (auto it = Marchand::vecArmem.begin(); it != Marchand::vecArmem.end(); it++)
		{
			std::cout << *it << ' ';
		}
		break;*/
		std::cout << "Choississez l'arme a equiper";
		int choix;
		std::cin >> choix;
		Arme* arme;
		/*switch (choix)
		{
		case 1: arme = Marchand::vecArmem; break;
		case 2:break;
		case 3:break;
		default:
			break;
		}
		Aventurier::ajouterArme(arme);*/
		break;

	case MENU::MENU_Aventurier: 
		Aventurier* aventurier;
		std::cout << aventurier->to_string();
		break;
	default:
		break;
	}
}

void EnJeu::update(float deltaTime)
{
}

void EnJeu::draw(float deltaTime)
{
}

void EnJeu::init()
{
	afficherMenu(MENU::MENU_Principal);
}

void EnJeu::pause()
{
}

void EnJeu::resume()
{
}

EnJeu::EnJeu()
{
}

EnJeu::~EnJeu()
{
}