/* includes */
#include "CardEffects.h"

string getDescription(CardEffects effect) {
  switch(effect){
    case None :
      return "";
      break; // make an exeception here
    case PlusPlus :
      return "++ card (advances the color by 2 spaces)";
      break;
    case Plus :
      return "+ card (advance of 1 square the concerned color)";
      break;
    case Moins :
      return "− card (moves back 1 space the concerned color)";
      break;
    case Haut :
      return "⇑ card (the last turtle moves one space, if there are several stacked the player chooses either to move them all or the one of his choice)";
      break;
    case HautHaut :
      return "⇑⇑ card (the last turtle moves 2 squares forward, if there are several stacked the player chooses either to move them all or the one of his choice)";
      break;
  }
} // returns the string corresponding to the description of the effect of a card