#include "Pizza.h"

list<TargetTurtles> Pizza::findLatest(void) { // find the last turtles
  for (int index = 0; index < NB_SLICES;
       index++) { // explore each slice of the pizza
    return getSlice(index);
    if (getSlice(index).empty() == false) { // at the first slice with turtles
      break;                                // stop the loop
    }
  }
} // gives the chained list of the box on which the last ones are located
  // turtles

int Pizza::findTurtle(TargetTurtles pTarget, int *sliceIndex) {
  int err = -1;
  for (int slice = 0; slice < NB_SLICES; slice++) {
    list<TargetTurtles>::iterator it;
    for (it = slices[slice].begin(); it != slices[slice].end(); it++) {
      if (*it == pTarget) {
        *sliceIndex = slice;
        err = 0;
      }
    }
  }
}

void Pizza::moveTurtle(TargetTurtles pTarget, int amount) {
  int TargetSlice = 0;
  if (findTurtle(pTarget, &TargetSlice) > 0) {
  }
}

TargetTurtles Pizza::checkVictory(void) {
  if (getSlice(NB_SLICES - 1).empty() ==
      true) { // if no turtle has reached the last
    return TargetTurtles::tneutral;
  } else {
    return getSlice(NB_SLICES - 1)
        .front(); // return the turtle to the bottom of the pile
  }
}

Pizza::Pizza() {}
