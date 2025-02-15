#pragma once
#include "../../../Header/Character/Player/Player.hpp"
#include"../../../Header/Pokemon/Pokemon.hpp"
#include"../../../Header/Utility/Utility.hpp"
#include <iostream>
using namespace std;

using namespace N_Utility;

namespace N_Character
{
    namespace N_Player
    {
        Player::Player() {
            name = "Trainer";
            chosenPokemon = N_Pokemon::Pokemon(); // Using the default Pokemon constructor
        }

        Player::Player(string p_name, N_Pokemon::Pokemon p_chosenPokemon) {
            name = p_name;
            chosenPokemon = p_chosenPokemon;
        }

        void Player::choosePokemon(int choice) {
            switch ((N_Pokemon::PokemonChoice)choice) {
            case N_Pokemon::PokemonChoice::CHARMANDER:
                chosenPokemon = N_Pokemon::Pokemon("Charmander", N_Pokemon::PokemonType::FIRE, 100, 10);
                break;
            case N_Pokemon::PokemonChoice::BULBASAUR:
                chosenPokemon = N_Pokemon::Pokemon("Bulbasaur", N_Pokemon::PokemonType::GRASS, 100, 10);
                break;
            case N_Pokemon::PokemonChoice::SQUIRTLE:
                chosenPokemon = N_Pokemon::Pokemon("Squirtle", N_Pokemon::PokemonType::WATER, 100, 10);
                break;
            default:
                chosenPokemon = N_Pokemon::Pokemon("Pikachu", N_Pokemon::PokemonType::ELECTRIC, 100, 10);
                break;
            }
            cout << "Player " << name << " chose " << chosenPokemon.name << "!\n";
            Utility::waitForEnter();
        }
    }
}