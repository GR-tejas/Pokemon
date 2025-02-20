#include "../../../Header/Pokemon/Pokemons/Pikachu.hpp"
#include "../../../Header/Pokemon/PokemonType.hpp"
#include <iostream>

namespace N_Pokemon {
    namespace N_Pokemons {

        using namespace std;

        Pikachu::Pikachu() : Pokemon("Pikachu", PokemonType::ELECTRIC, 100, 20) 
        {
            thunderShock_dmg = 15;
        }

        void Pikachu::thunderShock(Pokemon* target) {
            cout << name << " uses Thunder Shock on " << target->getName() << "!\n";
            target->takeDamage(thunderShock_dmg);
        }
    }
}