#include <iostream>
#include <limits>
#include <string>
#include "Header/Main/Game.hpp"
#include "Header/Character/Player/Player.hpp"
#include "Header/Character/ProfessorOak.hpp"

using namespace N_Character;
using namespace N_Game;
using namespace N_Player;

int main() {

	ProfessorOak* professor = new ProfessorOak("Professor Oak");
	Player* player = new Player();

	professor->greetPlayer(player);
	professor->offerPokemonChoices(player);

	professor->explainMainQuest(player);

	Game* game = new Game();
	game->gameLoop(player);

	return 0;
}