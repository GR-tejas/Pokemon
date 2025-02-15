#pragma once
#include<iostream>
#include<string>
#include"../../../Header/Pokemon/PokemonType.hpp"
#include"../../../Header/Pokemon/PokemonChoice.hpp"
#include"../../../Header/Pokemon/Pokemon.hpp"
#include"../../../Header/Utility/Utility.hpp"
using namespace std;

namespace N_Character
{
    namespace N_Player
    {
        class Player {
        public:
            string name;
            N_Pokemon::Pokemon chosenPokemon;

            // Default constructor
            Player();

            // Parameterized constructor
            Player(string p_name, N_Pokemon::Pokemon p_chosenPokemon);


            void choosePokemon(int choice);
        };
    }
}