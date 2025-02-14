#pragma once
#include <iostream>
#include <limits> // Include this header to use numeric_limits
#include <string>
#include"../../Header/Utility/Utility.hpp"
#include"../../Header/Character/Player/Player.hpp"
using namespace std;

class ProfessorOak {
public:
    string name;

    // Parameterized constructor
    ProfessorOak(string p_name);

    void greetPlayer(Player& player);

    void offerPokemonChoices(Player& player);

    // New method for the main quest conversation
    void explainMainQuest(Player& player);
};