#include "GameManager.h"
#include <chrono>

GameManager::GameManager() :finPartie(false)
{
	etatJeu = new EnJeu();
}

GameManager::~GameManager() {}

void GameManager::init()
{
	etatJeu->init();
}

void GameManager::demarrerJeu()
{
	update();
}
void GameManager::update()
{
	std::chrono::steady_clock::time_point lastUpdate;
	float deltaTime;

	while (!finPartie)
	{
		auto now = std::chrono::steady_clock::now();
		deltaTime = std::chrono::duration_cast<std::chrono::microseconds>(now - lastUpdate).count() / 1000000.0f;
		lastUpdate = now;

		etatJeu->handleEvents(deltaTime, this);
		etatJeu->update(deltaTime);
		etatJeu->draw(deltaTime);


	}
}