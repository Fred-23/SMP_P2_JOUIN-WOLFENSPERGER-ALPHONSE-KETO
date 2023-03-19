#include "Sewers.h"

Sewers::Sewers() {}

list<Turtle *> Sewers::mutagene() {

  list<Turtle *> output;
  Leonardo *leonardo = new Leonardo();
  Splinter *splinter = new Splinter();
  Donatello *donatello = new Donatello();
  Michelangelo *michelangelo = new Michelangelo();
  Raphael *raphael = new Raphael();

  output.push_back(leonardo);
  output.push_back(donatello);
  output.push_back(michelangelo);
  output.push_back(raphael);
  output.push_back(splinter);

  return output;
}
