#include "../../../Header/Pokemon/Pokemons/Bulbasaur.hpp"
#include "../../../Header/Pokemon/PokemonType.hpp"
#include <iostream>

namespace N_Pokemon {
    namespace N_Pokemons {

        using namespace std;

        Bulbasaur::Bulbasaur() : Pokemon("Bulbasaur", PokemonType::ELECTRIC, 100, 20)
        {
            leafBlade_dmg = 15;
        }

        void Bulbasaur::attack(Pokemon* target) {
            cout << name << " uses Leaf Blade on " << target->getName() << "!\n";
            target->takeDamage(leafBlade_dmg);
        }
    }
}