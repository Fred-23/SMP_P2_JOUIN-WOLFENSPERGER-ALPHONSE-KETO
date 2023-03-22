#include "CardFactory.h"

CardFactory::CardFactory(){};

void shuffleDeck(list<Card> &deck) {
  // Initialize random seed
  srand(unsigned(time(0)));

  // Loop over the deck from the last element to the second one
  for (auto it = prev(deck.end()); it != deck.begin(); --it) {
    // Generate a random index between 0 and the current index
    int rand_index = rand() % distance(deck.begin(), next(it));

    // Swap the current element with the randomly chosen one
    iter_swap(next(deck.begin(), rand_index), it);
  }
}

list<Card> CardFactory::genCards() {
  list<Card> output;

  output.push_back(Card(TargetTurtles::tLeonardo,CardEffects::PlusPlus));
  output.push_back(Card(TargetTurtles::tRaphael,CardEffects::PlusPlus));
  output.push_back(Card(TargetTurtles::tSplinter,CardEffects::PlusPlus));
  output.push_back(Card(TargetTurtles::tDonatello,CardEffects::PlusPlus));
  output.push_back(Card(TargetTurtles::tMichelangelo,CardEffects::PlusPlus));

  for (int cpt = 0; cpt < 5; cpt++) {
    output.push_back(Card(TargetTurtles::tLeonardo,CardEffects::Plus));
    output.push_back(Card(TargetTurtles::tRaphael,CardEffects::Plus));
    output.push_back(Card(TargetTurtles::tSplinter,CardEffects::Plus));
    output.push_back(Card(TargetTurtles::tDonatello,CardEffects::Plus));
    output.push_back(Card(TargetTurtles::tMichelangelo,CardEffects::Plus));
    output.push_back(Card(TargetTurtles::tneutral,CardEffects::Plus));
  }

  for (int cpt = 0; cpt < 2; cpt++) {
    output.push_back(Card(TargetTurtles::tLeonardo,CardEffects::Moins));
    output.push_back(Card(TargetTurtles::tRaphael,CardEffects::Moins));
    output.push_back(Card(TargetTurtles::tSplinter,CardEffects::Moins));
    output.push_back(Card(TargetTurtles::tDonatello,CardEffects::Moins));
    output.push_back(Card(TargetTurtles::tMichelangelo,CardEffects::Moins));
    output.push_back(Card(TargetTurtles::tneutral,CardEffects::Moins));
  }

  for (int cpt = 0; cpt < 2; cpt++) {
    output.push_back(Card(CardEffects::HautHaut));
  }

  for (int cpt = 0; cpt < 3; cpt++) {
    output.push_back(Card(CardEffects::HautHaut));
  }
  shuffleDeck(output);
  return output;
}
