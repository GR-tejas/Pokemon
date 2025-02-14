#include <iostream>
#include <limits>
#include <string>
#include "../../Header/Main/Game.hpp"
#include "../../Header/Character/Player/Player.hpp"
#include "../../Header/Character/ProfessorOak.hpp"

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