#pragma once
#include "../Pokemon.hpp"

namespace N_Pokemon {
    namespace N_Pokemons {

        class Caterpie : public Pokemon {
        public:
            Caterpie();

        private:
            int bugBite_dmg;
            void bugBite(Pokemon* target);
        };

    }
}