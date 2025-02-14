#pragma once
#include"../../Header/Battle/BattleState.hpp"
#include"../../Header/Pokemon/Pokemon.hpp"
#include"../../Header/Character/Player/Player.hpp"

class BattleManager {
public:
    void startBattle(Player& player, Pokemon& wildPokemon);
private:
    BattleState battleState;  // New BattleState object to track the battle

    void battle();
    void handleBattleOutcome();
    void updateBattleState(); // Method to update the battle state after each turn
};