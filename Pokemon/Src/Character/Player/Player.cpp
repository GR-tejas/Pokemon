#pragma once
#include "../../../Header/Character/Player/Player.hpp"
#include <iostream>
#include"../../../Header/Pokemon/Pokemons/Charmander.hpp"
#include"../../../Header/Pokemon/Pokemons/Squirtle.hpp"
#include"../../../Header/Pokemon/Pokemons/Pikachu.hpp"
#include"../../../Header/Pokemon/Pokemons/Bulbasaur.hpp"
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
            chosenPokemon = nullptr;
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
                chosenPokemon = new Bulbasaur();
                break;
            case N_Pokemon::PokemonChoice::SQUIRTLE:
                chosenPokemon = new Squirtle();
                break;
            default:
                chosenPokemon = new Pikachu();
                break;
            }
            cout << "Player " << name << " chose " << chosenPokemon->getName() << "!\n";
            Utility::waitForEnter();
        }
    }
}