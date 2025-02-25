#include "../../../Header/Pokemon/Pokemons/Squirtle.hpp"
#include "../../../Header/Pokemon/PokemonType.hpp"
#include <iostream>

namespace N_Pokemon {
    namespace N_Pokemons {

        using namespace std;

        Squirtle::Squirtle() : Pokemon("Squirtle", PokemonType::WATER, 100, {Move("Water gun", 20), Move("Tackle", 15)})
        {
            
        }

        void Squirtle::attack(Move selectedMove, Pokemon* target) {
            selectAndUseMove(target);
        }
    }
}