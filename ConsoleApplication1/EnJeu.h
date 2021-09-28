#pragma once
#include "GameState.h"
#include "Utilitaire.h"

class EnJeu : public GameState
{
public:
	EnJeu();
	~EnJeu();

	virtual void init();

	virtual void pause();
	virtual void resume();

	virtual void handleEvents(float deltaTime, GameManager* gameManager);
	virtual void update(float deltaTime);
	virtual void draw(float deltaTime);

private:

	void afficherMenu(MENU menu);
	void changerMenu(MENU nouvMenu);

	MENU menuAffiche;

};

