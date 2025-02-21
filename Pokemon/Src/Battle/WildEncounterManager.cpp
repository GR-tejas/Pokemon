#include "../../Header/Battle/WildEncounterManager.hpp"
#include"../../Header/Pokemon/Grass.hpp"
#include"../../Header/Pokemon/Pokemon.hpp"
#include <cstdlib>
#include <ctime> 

namespace N_Battle
{
    WildEncounterManager::WildEncounterManager() {
        srand(time(0));
    }

    Pokemon* WildEncounterManager::getRandomPokemonFromGrass(const Grass* grass) 
    {
        int randomIndex = rand() % grass->wildPokemonList.size();
        Pokemon* WildPokemon = grass->wildPokemonList[randomIndex];
        return WildPokemon;
    }
}