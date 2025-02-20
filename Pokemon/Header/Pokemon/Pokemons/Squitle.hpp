#pragma once
#include "../Pokemon.hpp"

namespace N_Pokemon {
    namespace N_Pokemons {

        class Squitle : public Pokemon {
        public:
            Squitle();

        private:
            int waterGun_dmg;
            void waterGun(Pokemon* target);
        };

    }
}