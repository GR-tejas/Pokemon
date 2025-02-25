#include "../../../Header/Pokemon/Pokemons/Caterpie.hpp"
#include "../../../Header/Pokemon/PokemonType.hpp"
#include <iostream>

namespace N_Pokemon {
    namespace N_Pokemons {

        using namespace std;

        Caterpie::Caterpie() : Pokemon("Caterpie", PokemonType::BUG, 100, {Move("Bug Bite", 20), Move("Tail Whip", 15)})
        {
        }

        void Caterpie::attack(Move selectedMove, Pokemon* target) {
            selectAndUseMove(target);
        }
    }
}