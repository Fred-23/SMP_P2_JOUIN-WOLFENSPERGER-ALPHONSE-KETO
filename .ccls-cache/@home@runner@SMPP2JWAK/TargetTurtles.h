#ifndef TARGETTURTLES_H
#define TARGETTURTLES_H

/* includes */
#include <iostream>

using namespace std;

typedef enum {
  tneutral,
  tLeonardo,
  tRaphael,
  tDonatello,
  tMichelangelo,
  tSplinter
} TargetTurtles;

string getName(TargetTurtles target = TargetTurtles::tneutral);

#endif