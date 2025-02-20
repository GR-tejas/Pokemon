#include "../../../Header/Pokemon/Pokemons/Squitle.hpp"
#include "../../../Header/Pokemon/PokemonType.hpp"
#include <iostream>

namespace N_Pokemon {
    namespace N_Pokemons {

        using namespace std;

        Squitle::Squitle() : Pokemon("Squitle", PokemonType::ELECTRIC, 100, 20)
        {
            waterGun_dmg = 15;
        }

        void Squitle::waterGun(Pokemon* target) {
            cout << name << " uses Thunder Shock on " << target->getName() << "!\n";
            target->takeDamage(waterGun_dmg);
        }
    }
}