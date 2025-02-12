#pragma once
#include <iostream>
#include <limits>
#include <string>
#include "PokemonType.hpp"
#include "PokemonChoice.hpp"
using namespace std;

class Pokemon {
public:
    string name;
    PokemonType type;
    int health;
    int maxHealth;

    // Default constructor
    Pokemon();

    // Parameterized constructor
    Pokemon(std::string p_name, PokemonType p_type, int p_health);

    // Copy constructor
    Pokemon(const Pokemon& other);

    ~Pokemon();

    void attack();

    void takeDamage(int damage);

    bool isFainted() const;
};