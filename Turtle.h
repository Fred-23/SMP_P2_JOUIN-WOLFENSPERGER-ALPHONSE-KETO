#ifndef TURTLE_H
#define TURTLE_H

/* includes */
#include "Card.h"
#include "TargetTurtles.h"
#include "screenAPI.h"
#include <iostream>
#include <limits>
#include <list>

using namespace std;

class Turtle {

private:
  TargetTurtles name;
  list<Card> cards;

public: // builder :
  Turtle(TargetTurtles pName = TargetTurtles::tneutral);

  void draw(list<Card> *pStack);
  void initialDraw(list<Card> *pStack);
  Card play(list<Card> *pStack);
  void displayCards();
  Card chooseCard();
  TargetTurtles getTurtleName() const { return name; }
  virtual void displayTurtle() const = 0;

  friend ostream &operator<<(ostream &os, const Turtle &obj) {
    os << getName(obj.getTurtleName());
    return os;
  }
};

#endif