#pragma once
#include <vector>
#include"../Pokemon/Pokemon.hpp"
//#include"../Pokemon/Grass.hpp"

//class Pokemon;
struct Grass;

using namespace N_Pokemon;

namespace N_Battle
{
	class WildEncounterManager {
	public:
		WildEncounterManager();
		N_Pokemon::Pokemon getRandomPokemonFromGrass(const N_Pokemon::Grass& grass);
	};
}