#pragma once
#include<iostream>
#include<string>
#include"../../../Header/Pokemon/Pokemon.hpp"
#include"../../../Header/Pokemon/Pokemons/Charmander.hpp"
#include"../../../Header/Pokemon/Pokemons/Squirtle.hpp"
#include"../../../Header/Pokemon/Pokemons/Pikachu.hpp"
#include"../../../Header/Pokemon/Pokemons/Bulbasaur.hpp"
#include"../../../Header/Utility/Utility.hpp"
using namespace std;

namespace N_Character
{
    namespace N_Player
    {
        class Player {
        public:
            string name;
            N_Pokemon::Pokemon* chosenPokemon;

            // Default constructor
            Player();

            // Parameterized constructor
            Player(string p_name);


            void choosePokemon(int choice);
        };
    }
}