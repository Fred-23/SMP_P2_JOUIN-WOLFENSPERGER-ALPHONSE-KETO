#include "Turtle.h"

Turtle::Turtle(TargetTurtles pName) { this->name = pName; }

void Turtle::draw(list<Card> *pStack) {
  if (pStack->size() != 0) {
    cards.splice(cards.begin(), *pStack, pStack->begin());
  }
}

void Turtle::initialDraw(list<Card> *pStack) {
  for (int i = 0; i < 5; i++) {
    draw(pStack);
  }
}

Card Turtle::play(list<Card> *pStack) {
  draw(pStack);
  return chooseCard();
}

void Turtle::displayCards() {
  list<Card>::iterator it;
  int cIndex = 0;
  cout << "Cards : " << endl;
  for (it = cards.begin(); it != cards.end(); it++) {
    cout << "[" << cIndex << "] - " << *it << endl;
    cIndex++;
  }
}

Card Turtle::chooseCard() {
  displayCards();
  int choice;

  cout << "\033[1;37mWhich card will you play " << *this << " ? : " << endl;
  cin >> choice;

  while (choice < 0 || choice >= cards.size() || !cin.good()) {
    cin.clear();
    cin.ignore(numeric_limits<std::streamsize>::max(), '\n');
    cout << "\033[1;37mWhich card will you play " << *this << " ? : " << endl;
    cin >> choice;
  }

  list<Card>::iterator it = cards.begin();
  advance(it, choice);
  Card chosenCard = *it;
  cards.erase(it);
  return chosenCard;
}