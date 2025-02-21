#pragma once
#include "../../../Header/Character/Player/Player.hpp"
#include"../../../Header/Pokemon/Pokemon.hpp"
#include"../../../Header/Utility/Utility.hpp"
#include <iostream>
using namespace std;

using namespace N_Utility;
using namespace N_Pokemon;

namespace N_Character
{
    namespace N_Player
    {
        Player::Player() {
            name = "Trainer";
            //Pokemon* chosenPokemon = new Pokemon(); // should i do this after i have done the chosepokemon thing?
        }

        Player::Player(string p_name, /*Pokemon* p_chosenPokemon*/) {
            name = p_name;
            //chosenPokemon = p_chosenPokemon;
        }

        void Player::choosePokemon(int choice) {
            switch ((N_Pokemon::PokemonChoice)choice) {
            case N_Pokemon::PokemonChoice::CHARMANDER:
                chosenPokemon = new Charmander();
                break;
            case N_Pokemon::PokemonChoice::BULBASAUR:
                Pokemon* chosenPokemon = new Pokemon("Bulbasaur", N_Pokemon::PokemonType::GRASS, 100, 10);
                break;
            case N_Pokemon::PokemonChoice::SQUIRTLE:
                Pokemon* chosenPokemon = new Pokemon("Squirtle", N_Pokemon::PokemonType::WATER, 100, 10);
                break;
            default:
                Pokemon* chosenPokemon = new Pokemon("Pikachu", N_Pokemon::PokemonType::ELECTRIC, 100, 10);
                break;
            }
            cout << "Player " << name << " chose " << chosenPokemon->getName() << "!\n";
            Utility::waitForEnter();
        }
    }
}