#pragma once
#include "../../../Header/Character/Player/Player.hpp"
#include <iostream>
using namespace std;

using namespace N_Utility;
using namespace N_Pokemon;
using namespace N_Pokemons;

namespace N_Character
{
    namespace N_Player
    {
        Player::Player() {
            name = "Trainer";
        }

        Player::Player(string p_name) {
            name = p_name;
        }

        void Player::choosePokemon(int choice) {
            switch ((N_Pokemon::PokemonChoice)choice) {
            case N_Pokemon::PokemonChoice::CHARMANDER:
                chosenPokemon = new Charmander();
                break;
            case N_Pokemon::PokemonChoice::BULBASAUR:
                Pokemon* chosenPokemon = new Bulbasaur();
                break;
            case N_Pokemon::PokemonChoice::SQUIRTLE:
                Pokemon* chosenPokemon = new Squirtle();
                break;
            default:
                Pokemon* chosenPokemon = new Pikachu();
                break;
            }
            cout << "Player " << name << " chose " << chosenPokemon->getName() << "!\n";
            Utility::waitForEnter();
        }
    }
}