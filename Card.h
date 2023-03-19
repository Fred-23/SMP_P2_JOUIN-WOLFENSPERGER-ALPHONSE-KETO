#ifndef CARD_H
#define CARD_H

/* includes */
#include <iostream>

#include "CardEffects.h"
#include "TargetTurtles.h"

using namespace std;

class Card {
private:
  TargetTurtles target = TargetTurtles::tneutral; // default neutral
  CardEffects effect = CardEffects::None;         // default effect none

public:
  // builder :
  Card();
  Card(TargetTurtles pTarget = TargetTurtles::tneutral,
       CardEffects pEffect = CardEffects::None);
  Card(CardEffects pEffect = CardEffects::None);
  Card(TargetTurtles pTarget = TargetTurtles::tneutral);

  // read accessor :
  TargetTurtles getTarget(void) const { return target; }
  CardEffects getEffect(void) const { return effect; }

  // write accessor :
  void setTarget(TargetTurtles pTarget = TargetTurtles::tneutral) {
    this->target = pTarget;
  }
  void setEffect(CardEffects pEffect = CardEffects::None) {
    this->effect = pEffect;
  }

  // operator overload for displaying :
  friend ostream &operator<<(ostream &os, const Card &obj) {

    os << "Cible : " << getName(obj.getTarget())
       << "Effet : " << getDescription(obj.getEffect()) << endl;
    return os;
  }
};

#endif