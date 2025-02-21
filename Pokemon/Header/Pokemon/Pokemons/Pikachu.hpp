#pragma once
#include "../Pokemon.hpp"

namespace N_Pokemon {
    namespace N_Pokemons {

        class Pikachu : public Pokemon {
        public:
            Pikachu();

        private:
            int thunderShock_dmg;
            void attack(Pokemon* target) override;
        };

    }
}