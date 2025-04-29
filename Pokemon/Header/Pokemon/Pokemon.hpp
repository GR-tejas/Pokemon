#pragma once
#include <iostream>
#include <limits>
#include <string>
#include<vector>
#include"../Utility/Utility.hpp"
#include"../Pokemon/Move.hpp"
#include"../Pokemon/PokemonType.hpp"
#include"../Pokemon/PokemonChoice.hpp"
#include"StatusEffects/IStatusEffect.hpp"
#include"StatusEffects/StatusEffectType.hpp"
#include"StatusEffects/ParalyzedEffect.hpp"

using namespace std;

struct Move;

namespace N_Pokemon
{
    using namespace N_StatusEffects;
    class Pokemon {
    public:
        //basic attributes
        string name;
        PokemonType type;
        int health;
        int maxHealth;
        vector<Move> moves;
        int attackBonus = 0;

        //constructors
        Pokemon();
        Pokemon(std::string p_name, PokemonType p_type, int p_health, vector<Move> p_moves);
        Pokemon(const Pokemon* other);

        //destructor
        ~Pokemon();

        //battle methods
        virtual void attack(Move selectedMove, Pokemon* target) = 0;
        void heal();
        void takeDamage(int damage);
        bool isFainted() const;

        //getter and setter methods
        string getName();
        void setName(string _name);

        void selectAndUseMove(Pokemon* target);
        void reduceAttackPower(int reducedDamage);

        //status effect members
        IStatusEffect* appliedEffect;

        bool canAttack();
        void applyEffect(StatusEffectType effectToApply);
        void clearEffect();
        bool canApplyEffect();

    protected:
        //Pokemon move methods
        void printAvailableMoves();
        int selectMove();
        void useMove(Move selectedMove, Pokemon* target);
    };
}