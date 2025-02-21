#pragma once
#include "../Pokemon.hpp"

namespace N_Pokemon {
    namespace N_Pokemons {

        class Charmander : public Pokemon {
        public:
            Charmander();

        private:
            int flameThrower_dmg;
            void attack(Pokemon* target) override;
        };

    }
}