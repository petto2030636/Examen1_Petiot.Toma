#pragma once
#include "GameState.h"
	
class GameManager
{
public:
	GameManager();
	~GameManager();

	void init();
	void demarrerJeu();

	void quit() { finPartie - true; }

private:
	void update();

	GameState* etatJeu;
	bool finPartie;
};

