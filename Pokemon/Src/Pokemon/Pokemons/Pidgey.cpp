#include "../../../Header/Pokemon/Pokemons/Pidgey.hpp"
#include "../../../Header/Pokemon/PokemonType.hpp"
#include <iostream>

namespace N_Pokemon {
    namespace N_Pokemons {

        using namespace std;

        Pidgey::Pidgey() : Pokemon("Pidgey", PokemonType::NORMAL, 100, 20) 
        {
            wingAttack_dmg = 15;
        }

        void Pidgey::WingAttack(Pokemon* target) {
            cout << name << " uses Wing Attack on " << target->getName() << "!\n";
            target->takeDamage(wingAttack_dmg);
        }
    }
}