#pragma once
#include<string>
#include<vector>
#include"../../Header/Pokemon/Pokemon.hpp"
#include"../../Header/Battle/WildEncounterManager.hpp"
using namespace std;

namespace N_Pokemon
{
    struct Grass {
        string environmentType;
        vector<Pokemon> wildPokemonList;
        int encounterRate;
    };
}