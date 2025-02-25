#include "../../../Header/Pokemon/Pokemons/Pidgey.hpp"
#include "../../../Header/Pokemon/PokemonType.hpp"
#include <iostream>

namespace N_Pokemon {
    namespace N_Pokemons {

        using namespace std;

        Pidgey::Pidgey() : Pokemon("Pidgey", PokemonType::NORMAL, 100, {Move("Wing Attack",15), Move("Peck", 10)})
        {
        }

        void Pidgey::attack(Move selectedMove, Pokemon* target) {
            selectAndUseMove(target);
        }
    }
}