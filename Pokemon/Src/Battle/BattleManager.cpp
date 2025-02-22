#include<iostream>
#include"../../Header/Pokemon/Pokemon.hpp"
#include"../../Header/Battle/BattleManager.hpp"
#include"../../Header/Utility/Utility.hpp"

using namespace std;
using namespace N_Utility;

namespace N_Battle
{
    void BattleManager::startBattle(Player* player, N_Pokemon::Pokemon* wildPokemon) {
        battleState.playerPokemon = player->chosenPokemon;
        battleState.wildPokemon = wildPokemon;
        battleState.playerTurn = true;  // Player starts first
        battleState.battleOngoing = true;
        std::cout << "A wild " << wildPokemon->getName() << " appeared!\n";
        battle();
    }
    //className* ptrname; declaration
    //ptrname->name;
    void BattleManager::battle() {
        while (battleState.battleOngoing) {
            if (battleState.playerTurn) {
                // Player's turn to attack
                battleState.playerPokemon->attack(battleState.wildPokemon);
            }
            else {
                // Wild Pokémon's turn to attack
                battleState.wildPokemon->attack(battleState.playerPokemon);
            }

            // Update the battle state after the turn
            updateBattleState();

            // Switch turns
            battleState.playerTurn = !battleState.playerTurn;

            Utility::waitForEnter();
        }

        handleBattleOutcome();
    }

    void BattleManager::handleBattleOutcome() {
        if (battleState.playerPokemon->isFainted()) {
            std::cout << battleState.playerPokemon->getName() << " has fainted! You lose the battle.\n";
        }
        else {
            std::cout << "You defeated the wild " << battleState.wildPokemon->getName() << "!\n";
        }
    }



    void BattleManager::updateBattleState() {
        if (battleState.playerPokemon->isFainted()) {
            battleState.battleOngoing = false;
        }
        else if (battleState.wildPokemon->isFainted()) {
            battleState.battleOngoing = false;
        }
    }
}

