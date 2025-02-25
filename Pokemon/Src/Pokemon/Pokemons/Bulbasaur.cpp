#include "../../../Header/Pokemon/Pokemons/Bulbasaur.hpp"
#include "../../../Header/Pokemon/PokemonType.hpp"
#include <iostream>

namespace N_Pokemon {
    namespace N_Pokemons {

        using namespace std;

        Bulbasaur::Bulbasaur() : Pokemon("Bulbasaur", PokemonType::GRASS, 100, {Move("Leaf Blade", 25), Move("Vine Whip", 20) })
        {

        }

        void Bulbasaur::attack(Move selectedMove, Pokemon* target) {
            selectAndUseMove(target);
        }
    }
}