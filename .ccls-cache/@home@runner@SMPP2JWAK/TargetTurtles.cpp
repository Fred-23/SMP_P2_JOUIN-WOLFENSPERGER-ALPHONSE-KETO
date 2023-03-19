/* includes */
#include "TargetTurtles.h"

string getName(TargetTurtles target) {
  switch(target){
    case tneutral :
      return "neutral";
      break;
    case tLeonardo :
      return "Leonardo";
      break;
    case tRaphael :
      return "Raphael";
      break;
    case tDonatello :
      return "Donatello";
      break;
    case tMichelangelo :
      return "Michelangelo";
      break;
    case tSplinter :
      return "Splinter";
      break;
  }
}