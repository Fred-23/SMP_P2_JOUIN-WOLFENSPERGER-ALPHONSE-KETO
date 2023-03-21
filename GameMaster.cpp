#include "GameMaster.h"

// builder :
GameMaster::GameMaster() {
  cardFactory = CardFactory();
  sewers = Sewers();
  pizza = Pizza();
}

void GameMaster::effectInterpreter(Turtle *turtle, Card card) {
  // switch
  int effect = 0;
  TargetTurtles target = tneutral;
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
    effect = 1;
    break;
  case HautHaut:
    choice = getPizza().findLatest();
    effect = 2;
    break;
  }

  if (choice.empty() == false) { // if the choice list contains turtles
    // Browse each turtle in the list
    cout << "\033[1;37m\t" << getName((turtle)->getTurtleName())
         << ", choose among these last turtles:\033[0m" << endl;

    list<TargetTurtles>::iterator it;
    int tIndex = 0;
    for (it = choice.begin(); it != choice.end(); ++it) {
      cout << "[" << tIndex << "] - " << getName(*it) << endl;
      tIndex++;
    }

    int turtle_choice;

    cout << "\033[1;37mWhich turtle will you play "
         << " ? : " << endl;
    cin >> turtle_choice;

    while (turtle_choice < 0 || turtle_choice >= choice.size() || !cin.good()) {
      cin.clear();
      cin.ignore(numeric_limits<std::streamsize>::max(), '\n');
      cout << "\033[1;37mWhich turtle will you play "
           << " ? : " << endl;
      cin >> turtle_choice;
    }

    list<TargetTurtles>::iterator it2 = choice.begin();
    advance(it2, turtle_choice);
    target = *it2;
  } else {
    target = card.getTarget();
    if (target == tneutral) { // if the card target is neutral
      // the player have to choose between all the turtles the target
      cout << "\033[1;37m\t" << getName((turtle)->getTurtleName())
           << ", choose among these last turtles:\033[0m" << endl;
      cout << "[1] - " << getName(tLeonardo) << endl;
      cout << "[2] - " << getName(tRaphael) << endl;
      cout << "[3] - " << getName(tDonatello) << endl;
      cout << "[4] - " << getName(tMichelangelo) << endl;
      cout << "[5] - " << getName(tSplinter) << endl;

      int turtle_choice;

      while (turtle_choice < 0 || turtle_choice > 5 || !cin.good()) {
        cin.clear();
        cin.ignore(numeric_limits<std::streamsize>::max(), '\n');
        cout << "\033[1;37mWhich turtle will you play "
             << " ? : " << endl;
        cin >> turtle_choice;
      }

      switch (turtle_choice) {
      case 1:
        target = tLeonardo;
        break;
      case 2:
        target = tRaphael;
        break;
      case 3:
        target = tDonatello;
        break;
      case 4:
        target = tMichelangelo;
        break;
      case 5:
        target = tSplinter;
        break;
      }

      pizza.moveTurtle(target, effect); // move the turtle on the pizza once the
                                        // card is interpreted by the GameMaster
    }
  }
}

void GameMaster::startGame() {
  initGame();

  list<Turtle *>::iterator it = turtles.begin();

  do {
    clearScreen();

    (*it)->displayTurtle();

    cout << "\033[1;37m\tIt's your turn " << getName((*it)->getTurtleName())
         << " !!!\033[0m" << endl;
    this_thread::sleep_for(chrono::milliseconds(5000));

    clearScreen();
    cout << pizza << endl;
    Card playedCard = (*it)->play(&unusedCards);
    usedCards.push_back(playedCard);

    // effectInterpreter(*it, playedCard);

    advance(it, 1);
    if (it == turtles.end()) {
      it = turtles.begin();
    }
  } while (pizza.checkVictory() == tneutral); // Condition check win
  cout << "You won " << getName(pizza.checkVictory()) << " !!";
}

void GameMaster::initGame() {
  turtles = this->sewers.mutagene();
  unusedCards = this->cardFactory.genCards();

  for (auto &i : turtles) {
    pizza.initTurtle(i->getTurtleName());
    i->initialDraw(&unusedCards);
  }
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
  cout
      << " ____________________________________________________________________"
         "_____________________________________________________________________"
         "___________________________________________________________________"
         "_____________________________________________________________________"
         "________\n"
      <<endl;

  cout << " _________          _______ _________ _        _______  _______ " << endl;
  cout << "|\\__   __/|\\     /|(  ____ )\\__   __/( \\      (  ____ \\(  ____ \\" << endl;
  cout << "   ) (   | )   ( || (    )|   ) (   | (      | (    \\/| (    \\/" << endl;
  cout << "   | |   | |   | || (____)|   | |   | |      | (__    | (_____ " << endl;
  cout << "   | |   | |   | ||     __)   | |   | |      |  __)   (_____  )" << endl;
  cout << "   | |   | |   | || (\\ (      | |   | |      | (            ) |" << endl;
  cout << "   | |   | (___) || ) \\ \\__   | |   | (____/\\| (____/\\/\\____) |" << endl;
  cout << "   )_(   (_______)|/   \\__/   )_(   (_______/(_______/\\_______)" << endl;
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