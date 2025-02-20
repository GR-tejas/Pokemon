#pragma once
#include <iostream>
#include <limits>
#include <string>   
#include "../../Header/Pokemon/Pokemon.hpp"
using namespace std;

namespace N_Pokemon
{
    Pokemon::Pokemon() {
        name = "Unknown";
        type = PokemonType::NORMAL;
        health = 50;
        attackPower = 10;
        maxHealth = 100;
    }

    Pokemon::Pokemon(string p_name, PokemonType p_type, int p_health, int p_attackPower) {
        name = p_name;
        type = p_type;
        health = p_health;
        attackPower = p_attackPower;
        maxHealth = 100;
    }

    Pokemon::Pokemon(const Pokemon* other) {
        name = other->name;
        type = other->type;
        health = other->health;
        attackPower = other->attackPower;
        maxHealth = 100;
    }

    Pokemon::~Pokemon() { }

    void Pokemon::attack(Pokemon* target) {
        int damage = attackPower; // Use attack power for damage calculation
        cout << name << " attacks " << target->name << " for " << damage << " damage!\n";
        target->takeDamage(damage);
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

    string Pokemon::getName()
    {
        return (Pokemon::name);
    }

    void Pokemon::setName(string _name)
    {
        Pokemon::name = _name;
    }
}
    