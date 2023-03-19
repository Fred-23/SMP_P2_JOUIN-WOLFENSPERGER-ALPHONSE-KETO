#ifndef CARD_FACTORY_H
#define CARD_FACTORY_H
/* includes */
#include <algorithm>
#include <iostream>
#include <list> // class list (cont)
#include <random>

#include "Card.h"

using namespace std;

class CardFactory {
private:
public:
  // builder :
  CardFactory();
  list<Card> genCards();
};

#endif
