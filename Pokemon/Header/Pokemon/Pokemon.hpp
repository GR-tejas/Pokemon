#pragma once
#include <iostream>
#include <limits>
#include <string>
#include<vector>
#include"../Utility/Utility.hpp"
#include"../Pokemon/Move.hpp"
#include"../Pokemon/PokemonType.hpp"
#include"../Pokemon/PokemonChoice.hpp"
using namespace std;

struct Move;

namespace N_Pokemon
{
    class Pokemon {
    public:
        
        // Default constructor
        Pokemon();

        // Parameterized constructor
        Pokemon(std::string p_name, PokemonType p_type, int p_health, int p_attackPower);

        // Copy constructor
        Pokemon(const Pokemon* other);

        ~Pokemon();

        virtual void attack(Pokemon* target) = 0;

        void heal();

        void takeDamage(int damage);

        bool isFainted() const;

        //getters and setters
        string getName();

        void setName(string _name);

    protected:
        string name;
        PokemonType type;
        int health;
        int maxHealth;
        int attackPower;
        vector<Move> moves;

        void selectAndUseMove(Pokemon* target);
        void printAvailableMoves();
        int selectMove();
        void useMove(Move selectedMove, Pokemon* target);
    };
}