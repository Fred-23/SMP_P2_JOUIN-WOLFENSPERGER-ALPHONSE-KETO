#include "GameMaster.h"

void GameMaster::effectInterpreter(Turtle turtle, Card card) {
  // switch
  int effect = 0;
  list<TargetTurtles> choice;
  switch (card.getEffect()) {
    case None:
      break;       // make an exception here
    case PlusPlus: // cartes ++ (avance de 2 cases la couleur concernée)
      effect = 2;
      break;
    case Plus: // cartes + (avance de 1 case la couleur concernée
      effect = 1;
      break;
    case Moins: // cartes − (recule de 1 case la couleur concernée)
      effect = -1;
      break;
    case Haut:
      choice = getPizza().findLatest();
      break;
    case HautHaut:
      choice = getPizza().findLatest();
      break;
  }
}
/*cout << "Number of Turtles?" << endl;
  cin >> numberOfTurtles ;*/

void GameMaster::startGame() {
  initGame();

  list<Turtle *>::iterator it = turtles.begin();
  do {
    clearScreen();// F
    cout << pizza << endl;
    Card playedCard = (*it)->play(&unusedCards);
    usedCards.push_back(playedCard);

    advance(it, 1);
    if (it == turtles.end()) {
      it = turtles.begin();
    }

  } while (1); // Condition check win
}

void GameMaster::initGame() {
  // Generate Turtles
  turtles = this->sewers.mutagene();
  // Generate Cards
  unusedCards = this->cardFactory.genCards();
  
  // Turtles drawing cards
  for (auto &i : turtles) {
    //Init the turtles on the board
    //pizza.moveTurtle(i->getTurtleName(), 1);
    i->initialDraw(&unusedCards);
  }
}

GameMaster::GameMaster() {
  cardFactory = CardFactory();
  sewers = Sewers();
  pizza = Pizza();
}

void GameMaster::showMenu() {
  clearScreen();
  displayTitleScreen();
  int choice;

  displayMenuOptions();
  cin >> choice;
  while (choice <= 0 || choice > 3) {
    clearScreen();
    displayTitleScreen();
    displayMenuOptions();
    cerr << "\033[1;37mPlease chose a valid option !" << endl;
    cin.clear();
    cin.ignore(numeric_limits<std::streamsize>::max(), '\n');
    cin >> choice;
  }

  clearScreen();
  switch (choice) {
  case 1:
    // showStory();
    clearScreen();

    startGame();
    break;
  case 2:
    showRules();
    break;
  case 3:
    exit(0);
  }
}

void GameMaster::displayTitleScreen() {
  std::cout
      << " ____________________________________________________________________"
         "_____________________________________________________________________"
         "_________________\n"
      << " \\  @@@@ @@@@ @@@@  @@@    @@@    @@@@   @@@@    @@@@        ###    "
         "###  ## ## ####  ###  ###   ## ####       **     **  ****  **     ** "
         "      ***  ****  /  \n"
      << "  \\   @   @    @     @@@@@  @@@    @  @   @       @          ## #  "
         "# ##  ## ##  ##  ## ## ## #  ##  ##       ***    **   **   ***    ** "
         "  *    **  ** ** /  \n"
      << "   \\   @   @@   @@    @@@ @@ @@@    @@@@   @  @@   @@        ##  ## "
         " ##  ## ##  ##  ##### ##  # ##  ##      **   * **   **   **   * **   "
         " **  **  ***** /  \n"
      << "    \\   @   @@@  @@@   @@@   @@@@    @  @   @@@@    @@@      ##     "
         " ##   ###   ##  ## ## ##   ###  ##     **     **  ****  **     **    "
         "  ***   ** ** /  \n"
      << "     "
         "\\___________________________________________________________________"
         "_____________________________________________________________________"
         "________/\n"
      << "                                    __ _    ____         ________    "
         "___...-----...      `'-._          ``''--..__       .-''``''--..     "
         "               \n"
      << "                     /~-.-.-.-.-.-.- \\ ¥ \\   \\  :\\       |     : "
         " `. :     ~         \\   / ~^ /         /   :     :\\     /  ^       "
         " )              \n"
      << "                    (       (   ~~|  \\ ' \\   \\   \\      |   ____ "
         " `: :___      ___..-  /  >-/         /   /``''--..\\    |  ~ "
         "|''--..``   \n"
      << "                     '-.-'   >  -'    \\' '\\   \\ ` `.    |  |____) "
         " )     |  ) |       /    /         / -'``''--..        \\ `  \\     "
         "\n"
      << "                          \\.`` )\\      `.   \\.,.\\ >-`.   |  :  "
         "_.`.`      |_.- |      /    /         /   -/``''--..:   ____ '.`   "
         "'.  \n"
      << "                           \\  : \\      `.    .`     \\   |  : (   "
         "`       |   *|     /  (  `'.-._   /    /            \\ ` `'--  : '.\n"
      << "                            \\:   \\       \\       :   \\  |  :  \\ "
         "  \\      |  - |    `'-._   (    |  \\'   `''--..      \\  `  ^     "
         ".\n"
      << "                             \\.-.-\\       \\.-.-.-.-.-.\\ |__:   "
         "\\___\\     |____|         `'-.____\\   ``''--..__|        "
         "`'-._____.'\n";
}
void GameMaster::displayMenuOptions() {
  std::cout << "\n\033[1;37m=== Main Menu ===" << std::endl;
  std::cout << "1. Start new game" << std::endl;
  std::cout << "2. Read rules" << std::endl;
  std::cout << "3. Quit" << std::endl;
}

void GameMaster::showStory() {
  printMessage(storyBlock1, 10);
  printMessage(responseBlock1, 10);
  printMessage(storyBlock2, 10);
  printMessage(responseBlock2, 10);
  printMessage(storyBlock3, 10);
  printMessage(responseBlock3, 10);
  int choice;
  cout << "\033[1;37mSplinter\033[0;37m : Write 1 if you have understood ..."
       << endl;
  cin >> choice;
  while (choice != 1) {
    cerr << "\033[1;37mSplinter\033[0;37m : We have no time for that ... Write "
            "1 if you "
            "have understood !"
         << endl;
    cin.clear();
    cin.ignore(numeric_limits<std::streamsize>::max(), '\n');
    cin >> choice;
  }
}
void GameMaster::showRules() {
  printMessage(gameRulesText, 10);
  int choice;
  cout << "\033[1;37mSplinter : Write 1 if you have understood ...\033[0m"
       << endl;
  cin >> choice;
  while (choice != 1) {
    cerr << "\033[1;37mSplinter : We have no time for that ... Write 1 if you "
            "have understood !\033[0m"
         << endl;
    cin.clear();
    cin.ignore(numeric_limits<std::streamsize>::max(), '\n');
    cin >> choice;
  }
}