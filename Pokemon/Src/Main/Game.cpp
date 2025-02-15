#include "../../Header/Main/Game.hpp"
#include "../../Header/Character/Player/Player.hpp"
#include"../../Header/Pokemon/PokemonType.hpp"
#include"../../Header/Utility/Utility.hpp"
#include "../../Header/Battle/WildEncounterManager.hpp"
#include "../../Header/Battle/BattleManager.hpp"
#include <iostream>
using namespace std;

using namespace N_Battle;
using namespace N_Utility;
using namespace N_Character;
using namespace N_Player;
using namespace N_Pokemon;

namespace N_Game
{
    Game::Game() {
        forestGrass = { "Forest", {N_Pokemon::Pokemon {"Pidgey", PokemonType::NORMAL, 40, 10}, N_Pokemon::Pokemon {"Caterpie", PokemonType::BUG, 35, 10}}, 70 };

        caveGrass = {
        "Cave",
        {{"Zubat", PokemonType::POISON, 30, 10}, {"Geodude", PokemonType::ROCK, 50, 10}},
        80
        };

        shallowWater = {
        "Cave",
        {{"Staryu", PokemonType::WATER, 40, 10}, {"Tentacool", PokemonType::POISON, 40, 10}},
        80
        };
    }

    void Game::gameLoop(Player& player) {
        BattleManager battleManager;
        bool keepPlaying = true;

        while (keepPlaying) {
            Utility::clearConsole();
            std::cout << "\\nWhat would you like to do next, " << player.name << "?\\n";
            std::cout << "1. Battle Wild Pokémon\\n";
            std::cout << "2. Visit PokeCenter\\n";
            std::cout << "3. Challenge Gyms\\n";
            std::cout << "4. Enter Pokémon League\\n";
            std::cout << "5. Quit\\n";
            std::cout << "Enter your choice: ";
            int choice;
            std::cin >> choice;

            Utility::clearInputBuffer();

            switch (choice) {
            case 1: {
                WildEncounterManager encounterManager;
                N_Pokemon::Pokemon wildPokemon = encounterManager.getRandomPokemonFromGrass(N_Game::Game::forestGrass);
                battleManager.startBattle(player, wildPokemon);
                break;
            }
            case 2: {
                std::cout << "You head to the PokeCenter.\\n";
                player.chosenPokemon.heal(); // Heal the player's Pokémon
                std::cout << player.chosenPokemon.name << "'s health is fully restored!\\n";
                break;
            }
            case 5: {
                keepPlaying = false;
                break;
            }
            default: {
                std::cout << "That's not a valid choice. Try again!\\n";
                break;
            }
            }

            Utility::waitForEnter();
        }

        std::cout << "Goodbye, " << player.name << "! Thanks for playing!\\n";
    }
}

