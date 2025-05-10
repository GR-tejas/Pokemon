#pragma once
#include "../Pokemon.hpp"

namespace N_Pokemon {
    namespace N_Pokemons {

        class Pidgey : public Pokemon {
        public:
            Pidgey();

        private:
            int wingAttack_dmg;
            void WingAttack(Pokemon& target);
        };
    }
}