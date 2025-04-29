#include <iostream>
#include <limits>
#include <string>
#include "Game.hpp"
#include "Player.hpp"
#include "ProfessorOak.hpp"

int main() {

	ProfessorOak professor("Professor Oak");
	Player player;

	professor.greetPlayer(player);
	professor.offerPokemonChoices(player);

	professor.explainMainQuest(player);

	Game game;
	game.gameLoop(player);

	return 0;
}