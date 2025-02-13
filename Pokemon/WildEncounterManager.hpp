#pragma once
#include <vector>
#include "Grass.hpp"

class WildEncounterManager {
public:
	WildPokemon getRandomPokemonFromGrass(const Grass& grass);
};	