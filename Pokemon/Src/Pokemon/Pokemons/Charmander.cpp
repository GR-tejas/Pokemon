#include "../../../Header/Pokemon/Pokemons/Charmander.hpp"
#include "../../../Header/Pokemon/PokemonType.hpp"
#include <iostream>

namespace N_Pokemon {
    namespace N_Pokemons {

        using namespace std;

        Charmander::Charmander() : Pokemon("Charmander", PokemonType::FIRE, 100, {Move("Flame Thrower", 25), Move("Ember", 20)})
        {
        }

        void Charmander::attack(Move selectedMove, Pokemon* target) {
            Pokemon::attack(selectedMove, target);

            if (selectedMove.name == "BLAZING CHARGE")
            {
                // Recoil effect: Charmander takes recoil damage
                this->takeDamage(10); // Fixed recoil damage
                std::cout << name << " takes 10 recoil damage from the Blazing Charge!\n";
                N_Utility::Utility::waitForEnter();
            }
        }
    }
}