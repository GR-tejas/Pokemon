#include "../../../Header/Pokemon/Pokemons/Charmander.hpp"
#include "../../../Header/Pokemon/PokemonType.hpp"
#include <iostream>

namespace N_Pokemon {
    namespace N_Pokemons {

        using namespace std;

        Charmander::Charmander() : Pokemon("Charmander", PokemonType::FIRE, 100, {Move("Flame Thrower", 25), Move("Ember", 20)})
        {
        }

        void Charmander::attack(Move selectedMove, Pokemon* target) {
            selectAndUseMove(target);
        }
    }
}