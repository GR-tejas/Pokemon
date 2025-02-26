#include "../../Header/Main/Game.hpp"
#include <iostream>
using namespace std;

using namespace N_Battle;
using namespace N_Utility;
using namespace N_Character;
using namespace N_Player;
using namespace N_Pokemons;

namespace N_Game
{
    Game::Game() {
        forestGrass = {"Forest", {new Pidgey() , new Caterpie()}, 70};

        //Grass* caveGrass = new Grass({"Cave", {Pokemon {"Zubat", PokemonType::POISON, 30, 10}, Pokemon {"Geodude", PokemonType::ROCK, 50, 10}}, 80});

        //Grass* shallowWater = new Grass({"water", {Pokemon {"Staryu", PokemonType::WATER, 40, 10}, Pokemon {"Tentacool", PokemonType::POISON, 40, 10}}, 80});
    }

    void Game::gameLoop(Player* player) {
        BattleManager battleManager;
        bool keepPlaying = true;
        WildEncounterManager encounterManager;

        while (keepPlaying) {
            Utility::clearConsole();
            std::cout << "\nWhat would you like to do next, " << player->name << "?\n";
            std::cout << "1. Battle Wild Pokémon\n";
            std::cout << "2. Visit PokeCenter\n";
            std::cout << "3. Challenge Gyms\n";
            std::cout << "4. Enter Pokémon League\n";
            std::cout << "5. Quit\n";
            std::cout << "Enter your choice: ";
            int choice;
            std::cin >> choice;

            Utility::clearInputBuffer();

            switch (choice) {
            case 1: {
                wildPokemon = encounterManager.getRandomPokemonFromGrass(forestGrass);

                battleManager.startBattle(player, wildPokemon);
                break;
            }
            case 2: {
                std::cout << "You head to the PokeCenter.\n";
                player->chosenPokemon->heal();
                std::cout << player->chosenPokemon->getName() << "'s health is fully restored!\n";
                break;
            }
            case 5: {
                keepPlaying = false;
                break;
            }
            default: {
                std::cout << "That's not a valid choice. Try again!\n";
                break;
            }
            }

            Utility::waitForEnter();
        }

        std::cout << "Goodbye, " << player->name << "! Thanks for playing!\n";
    }

    Game::~Game() {
        delete(wildPokemon);
    }

}

