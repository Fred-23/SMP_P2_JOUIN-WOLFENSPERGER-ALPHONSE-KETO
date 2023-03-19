#include "Card.h"

// builder :
Card::Card(TargetTurtles pTarget, CardEffects pEffect) {
  setTarget(pTarget);
  setEffect(pEffect);
}

Card::Card(CardEffects pEffect) { setEffect(pEffect); }
Card::Card(TargetTurtles pTarget) { setTarget(pTarget); }
Card::Card(){};