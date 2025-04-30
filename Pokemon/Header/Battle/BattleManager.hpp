#pragma once
#include"../../Header/Battle/BattleState.hpp"
#include"../../Header/Pokemon/Pokemon.hpp"
#include"../../Header/Character/Player/Player.hpp"

using namespace N_Character;
using namespace N_Player;

namespace N_Battle
{
    

    class BattleManager {
    public:
        void startBattle(Player& player, N_Pokemon::Pokemon& wildPokemon);
    private:
        BattleState battleState;

        void battle();
        void handleBattleOutcome();
        void updateBattleState();
    };
}

