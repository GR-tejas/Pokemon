#pragma once
#include "../Pokemon/Grass.hpp"
#include"../Character/Player/Player.hpp"

using namespace N_Character;
using namespace N_Player;
using namespace N_Pokemon;

namespace N_Game
{
	class Game {

	public:
		Game();
		void gameLoop(Player& player);

	private:
		Grass forestGrass;
		Grass caveGrass;
		Grass shallowWater;
	};
}