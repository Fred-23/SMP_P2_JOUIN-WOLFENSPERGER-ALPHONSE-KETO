#include "Pizza.h"

list<TargetTurtles> Pizza::findLatest(void) { // find the last turtles
  for (int index = 0; index < NB_SLICES; index++) {
    // explore each slice of the pizza
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
    for (it = slices[slice]->begin(); it != slices[slice]->end(); it++) {
      if (*it == pTarget) {
        *sliceIndex = slice; // return the slice index where the turtle is
        err = 0;
      }
    }
  }
  return err;
}

list<TargetTurtles>::iterator Pizza::findTurtleinSlice(TargetTurtles pTarget,
                                                       int sliceIndex) {
  list<TargetTurtles>::iterator it;
  for (it = getSlice(sliceIndex).begin(); it != getSlice(sliceIndex).end();
       it++) {
    if (*it == pTarget) {
      break;
    }
  }
  return it; // return the iterator where the turtle is in th slice
}

/*void Pizza::moveTurtle(TargetTurtles pTarget, int amount) {
  int targetSlice = 0;
  if (findTurtle(pTarget, &targetSlice) == 0) { // if the turtle is found
    int destinationSlice = targetSlice + amount;
    if (destinationSlice < 0 || destinationSlice >= NB_SLICES) {
      return; // the turtle cannot move outside of the pizza
    }
    slices[targetSlice].remove(pTarget); // remove the turtle from the current
slice slices[destinationSlice].push_back(pTarget); // add the turtle to the
destination slice
  }
}*/

void Pizza::initTurtle(TargetTurtles pTarget) {
  slices[0]->push_back(pTarget);
  cout << slices[0]->size() << endl;
}

void Pizza::moveTurtle(TargetTurtles pTarget, int effect) {
  int targetSlice = 0;
  if (findTurtle(pTarget, &targetSlice) == 0) { // if the turtle is found
    int destinationSlice = targetSlice + effect;
    if (destinationSlice < 0 || destinationSlice >= NB_SLICES) {
      return; // the turtle cannot move outside of the pizza
      // make an execption here
    }

    list<TargetTurtles>::iterator it = findTurtleinSlice(pTarget, targetSlice);
    getSlice(destinationSlice)
        .splice(getSlice(destinationSlice).end(), getSlice(targetSlice), it,
                getSlice(targetSlice)
                    .end()); // moves the target turtle and those above it from
                             // the slice where they are located to the top of
                             // the target slice's stack.
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

Pizza::Pizza() {
  for (int i = 0; i < NB_SLICES; i++) {
    slices[i] = new list<TargetTurtles>();
  }
}

 ostream &operator<<(ostream &os, Pizza &obj) {
    os << "Pizza:" << endl;
    for (int i = 0; i < NB_SLICES; i++) {
      os << "[" << i << "]: ";
      if (!obj.getSlice(i).empty()) {
        for (auto &target : obj.getSlice(i)) {
          os << getColor(target) << getName(target) << "\t";
        }
      } else {
        os << "empty";
      }
      os << endl;
    }
    return os;
  }
