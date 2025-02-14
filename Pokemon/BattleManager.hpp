#pragma once
#include "Pokemon.hpp"
#include "Player.hpp"

class BattleManager {
public:
    void startBattle(Player& player, Pokemon& wildPokemon);
private:
    void battle(Pokemon& playerPokemon, Pokemon& wildPokemon, Player& player);
    void handleBattleOutcome(Player& player, bool playerWon);
};