#pragma once
#include "../Pokemon/Grass.hpp"
#include "../../Header/Character/Player/Player.hpp"
//#include"../../Header/Pokemon/PokemonType.hpp"
#include"../../Header/Utility/Utility.hpp"
#include "../../Header/Battle/WildEncounterManager.hpp"
#include "../../Header/Battle/BattleManager.hpp"
#include"../../Header/Pokemon/Pokemons/Pidgey.hpp"
#include"../../Header/Pokemon/Pokemons/Caterpie.hpp"

using namespace N_Character;
using namespace N_Player;
using namespace N_Pokemon;

namespace N_Game
{
	class Game {

	public:
		Game();
		~Game();
		void gameLoop(Player* player);

	private:
		Grass* forestGrass;
		Pokemon* wildPokemon;

		//Grass* caveGrass;
		//Grass* shallowWater;
	};
}