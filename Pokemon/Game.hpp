#pragma once
#include "Grass.hpp"
#include "Game.hpp"

class Player;

class Game {

public:
	Game();
	void gameLoop(Player& player);

private:
	Grass forestGrass;
	Grass caveGrass;
	Grass shallowWater;
};