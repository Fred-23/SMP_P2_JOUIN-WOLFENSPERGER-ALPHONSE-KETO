#ifndef PIZZA_H
#define PIZZA_H

/* includes */
#include <iostream>
#include <list> // classe list (conteneur)

#include "TargetTurtles.h"

// constant :
#define NB_SLICES 10

using namespace std;

class Pizza {
private:
  list<TargetTurtles> *slices[NB_SLICES];

public:
  // builder :
  Pizza();

  // read accessor :
  list<TargetTurtles> getSlice(int index) { return *slices[index]; }

  list<TargetTurtles> findLatest(void); // find the last turtles
  int findTurtle(TargetTurtles pTarget);
  //int findTurtle(TargetTurtles pTarget, int *sliceIndex);
  //list<TargetTurtles>::iterator findTurtleinSlice(TargetTurtles pTarget, int sliceIndex);
  int findTurtleinSlice(TargetTurtles pTarget, int sliceIndex);

  void moveTurtle(TargetTurtles pTarget, int effect);
  // Init turtle on the board
  void initTurtle(TargetTurtles pTarget);

  TargetTurtles checkVictory(void);

  friend ostream &operator<<(ostream &os, Pizza &obj);
};

#endif