#pragma once
#include <iostream>
#include <limits>
#include <string>   
#include "../../Header/Pokemon/Pokemon.hpp"
using namespace std;

    Pokemon::Pokemon() {
        name = "Unknown";
        type = PokemonType::NORMAL;
        health = 50;
    }

    Pokemon::Pokemon(string p_name, PokemonType p_type, int p_health, int p_attackPower) {
        name = p_name;
        type = p_type;
        health = p_health;
    }

    Pokemon::Pokemon(const Pokemon& other) {
        name = other.name;
        type = other.type;
        health = other.health;
    }

    Pokemon::~Pokemon() { }

    void Pokemon::attack(Pokemon& target) {
        int damage = attackPower; // Use attack power for damage calculation
        std::cout << name << " attacks " << target.name << " for " << damage << " damage!\n";
        target.takeDamage(damage);
    }

    void Pokemon::takeDamage(int damage)
    {
        health -= damage;
        if (health <= 0)
            health = 0;
    }

    bool Pokemon::isFainted() const
    {
        return (health <= 0);
    }

    void Pokemon::heal()
    {
        health = maxHealth;
    }