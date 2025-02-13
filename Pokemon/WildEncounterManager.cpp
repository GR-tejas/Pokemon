#include "WildEncounterManager.hpp"
#include "Grass.hpp"
#include <cstdlib>
#include <ctime> 

WildEncounterManager::WildEncounterManager() {
    srand(time(0));
}

Pokemon* WildEncounterManager::getRandomPokemonFromGrass(const Grass& grass) {
    int randomIndex = rand() % grass.wildPokemonList.size();
    Pokemon* wildPokemon = grass.wildPokemonList[randomIndex];
    //return grass.wildPokemonList[randomIndex];
    return wildPokemon;
}

