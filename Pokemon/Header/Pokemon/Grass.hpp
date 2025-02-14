#pragma once
#include<string>
#include<vector>
#include"../../Header/Pokemon/Pokemon.hpp"
#include"../../Header/Battle/WildEncounterManager.hpp"
using namespace std;

struct Grass {
    string environmentType;  // Example: "Forest", "Cave", "Riverbank"
    vector<Pokemon> wildPokemonList;  // List of wild Pokémon that live in this grass
    int encounterRate;  // Likelihood of encountering a wild Pokémon, out of 100
};