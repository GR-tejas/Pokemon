#include "../../../Header/Pokemon/Pokemons/Charmander.hpp"
#include "../../../Header/Pokemon/PokemonType.hpp"
#include <iostream>

namespace N_Pokemon {
    namespace N_Pokemons {

        using namespace std;

        Charmander::Charmander() : Pokemon("Charmander", PokemonType::ELECTRIC, 100, 20)
        {
            flameThrower_dmg = 15;
        }

        void Charmander::flameThrower(Pokemon& target) {
            cout << name << " uses Thunder Shock on " << target.getName() << "!\n";
            target.takeDamage(flameThrower_dmg);
        }
    }
}