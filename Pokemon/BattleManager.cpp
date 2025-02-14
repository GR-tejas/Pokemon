#include<iostream>
#include "Pokemon.hpp"
#include"BattleManager.hpp"

using namespace std;

void BattleManager::startBattle(Player& player, Pokemon& wildPokemon) 
{
    std::cout << "A wild " << wildPokemon.name << " appeared!\n";
    battle(player.chosenPokemon, wildPokemon, player);
}

void BattleManager::battle(Pokemon& playerPokemon, Pokemon& wildPokemon, Player& player) {
    while (!playerPokemon.isFainted() && !wildPokemon.isFainted()) 
    {
        playerPokemon.attack(wildPokemon);

        if (!wildPokemon.isFainted()) 
        {
            wildPokemon.attack(playerPokemon);
        }

        Utility::waitForEnter();
    }

    handleBattleOutcome(player, wildPokemon.isFainted());
}

void BattleManager::handleBattleOutcome(Player& player, bool playerWon) {
    if (playerWon) {
        std::cout << player.chosenPokemon.name << " is victorious! Keep an eye on your Pokémon's health.\n";
    }
    else {
        std::cout << "Oh no! " << player.chosenPokemon.name << " fainted! You need to visit the PokeCenter.\n";
        Utility::waitForEnter();
        std::cout << "Game Over.\n";
    }
}