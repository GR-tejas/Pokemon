#pragma once
#include"../../Header/Pokemon/Pokemon.hpp"

struct BattleState {
    Pokemon* playerPokemon;
    Pokemon* wildPokemon;
    bool playerTurn;
    bool battleOngoing;
};