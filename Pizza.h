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
    list<TargetTurtles> slices[NB_SLICES];
  
  public:
    // builder :
    Pizza();
  
    // read accessor :
    list<TargetTurtles> getSlice(int index) { return slices[index]; }
  
    // write accessor :
    /*void setSlice(int index, list<TargetTurtles> slice) {
      this->slices[index] = slice;
    }*/
  
    list<TargetTurtles> findLatest(void); // find the last turtles
  
    int findTurtle(TargetTurtles pTarget, int *sliceIndex);
    void moveTurtle(TargetTurtles pTarget, int amount);
  
    TargetTurtles checkVictory(void);

   // operator overload for displaying the BoardGame:
   //This function need to be improve to display multiple turtles
    friend ostream &operator<<(ostream &os, Pizza &obj) {
    os << "Pizza:" << endl;
    for (int i = 0; i < NB_SLICES; i++) {
        os << "[" << i << "]: ";
        if (!obj.getSlice(i).empty()) {
            for (auto& turtle : obj.getSlice(i)) {
                os << getName(turtle) << " ";
            }
        } else {
            os << "empty";
        }
        os << endl;
    }
    return os;
  }
};

#endif