#include<iostream>
#include "Pokemon.hpp"
#include"BattleManager.hpp"

using namespace std;

void BattleManager::startBattle(Player& player, Pokemon& wildPokemon) 
{
    std::cout << "A wild " << wildPokemon.name << " appeared!\n";
    battle(player.chosenPokemon, wildPokemon);
}

void BattleManager::battle(Pokemon& playerPokemon, Pokemon& wildPokemon) {
    while (!playerPokemon.isFainted() && !wildPokemon.isFainted()) 
    {
        playerPokemon.attack(wildPokemon);

        // Check if wild Pokémon fainted
        if (!wildPokemon.isFainted()) 
        {
            wildPokemon.attack(playerPokemon);
        }

        Utility::waitForEnter();
    }

    // Determine and display the outcome of the battle
    handleBattleOutcome(playerPokemon, wildPokemon.isFainted());//this function needs thes args
}

void BattleManager::handleBattleOutcome(Player& player, bool playerWon) {//i need player here
    if (playerWon) {
        std::cout << player.chosenPokemon.name << " is victorious! Keep an eye on your Pokémon's health.\n";
    }
    else {
        std::cout << "Oh no! " << player.chosenPokemon.name << " fainted! You need to visit the PokeCenter.\n";
        Utility::waitForEnter();
        std::cout << "Game Over.\n";
    }
}