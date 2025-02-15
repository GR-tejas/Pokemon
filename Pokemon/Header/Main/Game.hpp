#pragma once
#include "../Pokemon/Grass.hpp"
#include"../Character/Player/Player.hpp"

using namespace N_Character;
using namespace N_Player;

namespace N_Game
{
	class Game {

	public:
		Game();
		void gameLoop(Player& player);

	private:
		N_Pokemon::Grass forestGrass;
		N_Pokemon::Grass caveGrass;
		N_Pokemon::Grass shallowWater;
	};
}