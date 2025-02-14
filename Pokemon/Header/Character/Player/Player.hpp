#pragma once
#include<iostream>
#include<string>
#include"../../Header/Pokemon/PokemonType.hpp"
#include"../../Header/Pokemon/PokemonChoice.hpp"
#include"../../Header/Pokemon/Pokemon.hpp"
#include"../../Header/Utility/Utility.hpp"
using namespace std;

class Pokemon;

class Player {
public:
    string name;
    Pokemon chosenPokemon;

    // Default constructor
    Player();

    // Parameterized constructor
    Player(string p_name, Pokemon p_chosenPokemon);


    void choosePokemon(int choice);
};