#include "../../../Header/Pokemon/Pokemons/Caterpie.hpp"
#include "../../../Header/Pokemon/PokemonType.hpp"
#include <iostream>

namespace N_Pokemon {
    namespace N_Pokemons {

        using namespace std;

        Caterpie::Caterpie() : Pokemon("Pikachu", PokemonType::ELECTRIC, 100, 20)
        {
            bugBite_dmg = 15;
        }

        void Caterpie::bugBite(Pokemon& target) {
            cout << name << " uses Wing Attack on " << target.getName() << "!\n";
            target.takeDamage(bugBite_dmg);
        }
    }
}