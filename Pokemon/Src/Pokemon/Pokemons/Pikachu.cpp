#include "../../../Header/Pokemon/Pokemons/Pikachu.hpp"
#include "../../../Header/Pokemon/PokemonType.hpp"
#include <iostream>

namespace N_Pokemon {
    namespace N_Pokemons {

        using namespace std;

        Pikachu::Pikachu() : Pokemon("Pikachu", PokemonType::ELECTRIC, 100, {Move("Thunder Blot", 25), Move("Iron tail", 20), Move("Quick Attack", 15)})
        {
        }

        void Pikachu::attack(Move selectedMove, Pokemon* target) {
            selectAndUseMove(target);
        }
    }
}