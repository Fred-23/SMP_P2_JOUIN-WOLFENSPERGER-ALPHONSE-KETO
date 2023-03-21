#ifndef GAMEMASTER_H
#define GAMEMASTER_H

/* includes */

#include <iostream>
#include <list> // classe list (conteneur)

#include "Card.h"
#include "CardFactory.h"
#include "Pizza.h"
#include "Sewers.h"
#include "Turtle.h"
#include "screenAPI.h"

using namespace std;

class GameMaster {
private:
  CardFactory cardFactory;
  Sewers sewers;
  Pizza pizza;

  list<Card> unusedCards;
  list<Card> usedCards;
  list<Turtle *> turtles;

  string gameRulesText =
      "My dear students, here are the rules of the Teenage Mutant Ninja "
      "Turtles race game: the objective is to make your secret ninja turtle "
      "win the race by playing a progression card each turn. You must move the "
      "ninja turtle of the color imposed by the card, depending on the symbol "
      "on the card you can advance one or two squares, or move back one "
      "square. If a turtle lands on an already occupied square, it must stack "
      "on top of the existing turtles. The player who owns the winning ninja "
      "turtle wins the game when it reaches the last square. If multiple "
      "turtles reach the last square, the player who owns the lowest turtle in "
      "the pile wins, or if no player has a winning turtle, the player who "
      "owns the turtle closest to the last square wins. Have fun!\n\n";

  string storyBlock1 =
      "\033[1;37mSplinter\033[0m : My dear turtles, we have a new important "
      "mission. \033[1;37mShredder\033[0m is back and his actions have caused too much harm to "
      "the city. We need to stop him before he causes any more "
      "damage.\n\n\033[1;37mSplinter\033[0m: Our goal is to reach "
      "\033[1;37mShredder\033[0m on the last square, and stop him once and for all. "
      "But it won't be easy to reach him, there will be obstacles and enemies "
      "in our way.\n\n";

  string responseBlock1 =
      "\033[1;35mDonatello\033[0;35m : How will we achieve this master !?\n\n";

  string storyBlock2 =
      "\033[1;37mSplinter\033[0m : We will have to use all our skills to "
      "advance in the course, playing our progression cards wisely to "
      "strategically advance and retreat. Remember that you must take with you "
      "all the ninja turtles that are possibly stacked on your back when you "
      "move.\n\n\033[1;37mSplinter\033[0m : We will also need to be ready to "
      "fight the enemies in our way. We will have to use our combat skills and "
      "work together to defeat the enemies and move forward in the course.\n\n";

  string responseBlock2 =
      "\033[1;31mRaphael\033[0;31m : It will be easy for us master !\n\n";

  string storyBlock3 =
      "\033[1;37mSplinter\033[0m : Remember, the game ends when we reach the "
      "last square and stop \033[1;37mShredder\033[0;37m. The player who owns "
      "the winning ninja "
      "turtle wins the game, but our real goal is to put an end to Shredder's "
      "actions.\n\n\033[1;37mSplinter\033[0m : Come on, my dear turtles, get "
      "ready for this important mission and show us what you are capable "
      "of.\n\n";

  string responseBlock3 =
      "\033[1;34mLeonardo\033[0;34m : Let's "
      "go!\033[0m\n\033[1;33mMichalangelo\033[0;33m : kawabunga!\033[0m\n\n";

private:
  void initGame();
  void startGame();
  void displayTitleScreen();
  void displayMenuOptions();
  void showStory();
  void showRules();

public:
  GameMaster();
  // read accessor :
  Pizza getPizza(void) { return pizza; }
  void showMenu();
  void effectInterpreter(Turtle * turtle, Card card);
};

#endif