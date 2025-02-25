#pragma once
#include <iostream>
#include <limits>
#include <string>   
#include "../../Header/Pokemon/Pokemon.hpp"
using namespace std;

using namespace N_Utility;

namespace N_Pokemon
{
    Pokemon::Pokemon() {
        name = "Unknown";
        type = PokemonType::NORMAL;
        health = 50;
        maxHealth = 100;
    }

    Pokemon::Pokemon(string p_name, PokemonType p_type, int p_health, vector<Move> p_moves) {
        name = p_name;
        type = p_type;
        health = p_health;
        moves = p_moves;
        maxHealth = 100;
    }

    Pokemon::Pokemon(const Pokemon* other) {
        name = other->name;
        type = other->type;
        health = other->health;
        maxHealth = 100;
    }

    void Pokemon::selectAndUseMove(Pokemon* target) {
        printAvailableMoves();

        int choice = selectMove();
        Move selectedMove = moves[choice - 1];

        useMove(selectedMove, target);
    }

        void Pokemon::printAvailableMoves() {
            cout << name << "'s available moves:\n";

            // List out all moves for the player to choose from
            for (size_t i = 0; i < moves.size(); ++i) {
                cout << i + 1 << ": " << moves[i].name << " (Power: " << moves[i].power << ")\n";
            }
        }

        int Pokemon::selectMove() {
            // Ask the player to select a move
            int choice;
            cout << "Choose a move: ";
            cin >> choice;

            // Validate the choice
            while (choice < 1 || choice > static_cast<int>(moves.size())) {
                cout << "Invalid choice. Try again: ";
                cin >> choice;
            }

            return choice;
        }

        void Pokemon::useMove(Move selectedMove, Pokemon* target) {
            cout << name << " used " << selectedMove.name << "!\n";
            attack(selectedMove, target);

            Utility::waitForEnter();

            cout << "...\n";
            Utility::waitForEnter();

            if (target->isFainted())
                cout << target->name << " fainted!\n";
            else
                cout << target->name << " has " << target->health << " HP left.\n";
        }


    Pokemon::~Pokemon() { }

    void Pokemon::attack(Move selectedMove, Pokemon* target) {
        target->takeDamage(selectedMove.power);
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
    