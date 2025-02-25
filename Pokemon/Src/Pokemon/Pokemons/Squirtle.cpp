#include "../../../Header/Pokemon/Pokemons/Squirtle.hpp"
#include "../../../Header/Pokemon/PokemonType.hpp"
#include <iostream>

namespace N_Pokemon {
    namespace N_Pokemons {

        using namespace std;

        Squirtle::Squirtle() : Pokemon("Squirtle", PokemonType::ELECTRIC, 100, 20)
        {
            waterGun_dmg = 15;
        }

        void Squirtle::attack(Pokemon* target) {
            cout << name << " uses Water Gun on " << target->getName() << "!\n";
            target->takeDamage(waterGun_dmg);
        }
    }
}