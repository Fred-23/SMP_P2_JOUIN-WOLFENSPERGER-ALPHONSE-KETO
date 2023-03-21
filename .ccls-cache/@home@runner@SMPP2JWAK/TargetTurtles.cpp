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



string getColor(TargetTurtles target) {
  switch(target){
    case tneutral :
      return "\033[0;37m";
      break;
    case tLeonardo :
      return "\033[0;34m";
      break;
    case tRaphael :
      return "\033[0;31m";
      break;
    case tDonatello :
      return "\033[0;35m";
      break;
    case tMichelangelo :
      return "\033[0;33m";
      break;
    case tSplinter :
      return "\033[0;37m";
      break;
  }
}