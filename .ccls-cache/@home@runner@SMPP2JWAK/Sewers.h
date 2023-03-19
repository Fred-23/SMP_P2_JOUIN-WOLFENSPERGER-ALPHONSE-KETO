#ifndef SEWERS_H
#define SEWERS_H

/* includes */
#include <iostream>
#include <list> 
#include "Turtle.h"
#include "Turtles.h"

using namespace std;

class Sewers {
private:
public:
  // builder :
  Sewers();
  list<Turtle*> mutagene(); // Génère les tortues
};

#endif