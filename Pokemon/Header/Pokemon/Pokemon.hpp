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
        Pokemon(std::string p_name, PokemonType p_type, int p_health, vector<Move> p_moves);

        // Copy constructor
        Pokemon(const Pokemon* other);

        ~Pokemon();

        virtual void attack(Move selectedMove, Pokemon* target) = 0;

        void heal();

        void takeDamage(int damage);

        bool isFainted() const;

        //getters and setters
        string getName();

        void setName(string _name);

        void selectAndUseMove(Pokemon* target);

        void reduceAttackPower(int reducedDamage);

    protected:
        string name;
        PokemonType type;
        int health;
        int maxHealth;
        vector<Move> moves;
        int attackBonus = 0;
        
        void printAvailableMoves();
        int selectMove();
        void useMove(Move selectedMove, Pokemon* target);
    };
}