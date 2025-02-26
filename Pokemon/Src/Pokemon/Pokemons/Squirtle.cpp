#include "../../../Header/Pokemon/Pokemons/Squirtle.hpp"
#include "../../../Header/Pokemon/PokemonType.hpp"
#include <iostream>

namespace N_Pokemon {
    namespace N_Pokemons {

        using namespace std;

        Squirtle::Squirtle() : Pokemon("Squirtle", PokemonType::WATER, 100, {Move("Water gun", 20), Move("Tackle", 15)})
        {
            
        }

        void Squirtle::attack(Move selectedMove, Pokemon* target) {
            Pokemon::attack(selectedMove, target);

            if (selectedMove.name == "RAPID SPIN")
            {
                // Random number of hits between 2 and 5
                int hits = (rand() % 4) + 2;

                // Split damage across hits
                for (int i = 0; i < hits; ++i) {
                    Pokemon::attack(selectedMove, target);
                }

                std::cout << "... and hit " << hits << " times!\\n";
            }
        }
    }
}