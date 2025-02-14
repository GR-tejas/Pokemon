#pragma once
#include "../../Header/Pokemon/Grass.hpp"

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