#pragma once
#include "GameManager.h"
#include "EnJeu.h"

class GameState
{
public:
	virtual void init() = 0;

	virtual void pause() = 0;
	virtual void resume() = 0;

	virtual void handleEvents(float deltaTime, GameManager* gameManager) = 0;
	virtual void update(float deltaTime) = 0;
	virtual void draw(float deltaTime) = 0;

protected:
	GameState() { }
	bool paused;
};

