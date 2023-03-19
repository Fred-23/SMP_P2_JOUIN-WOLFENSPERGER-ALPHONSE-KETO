#ifndef CARDEFFECTS_H
#define CARDEFFECTS_H

/* includes */
#include <iostream>

using namespace std;

typedef enum {
  None,      //default
  PlusPlus,  // cartes ++ (avance de 2 cases la couleur concernée)
  Plus,      // cartes + (avance de 1 case la couleur concernée)
  Moins,     // cartes − (recule de 1 case la couleur concernée)
  Haut,      // cartes ⇑ (la dernière tortue avance d'une case, sil y en a plusieurs empilées le joueur choisit soit de les déplacer toutes soit celle de son choix)
  HautHaut   // cartes ⇑⇑ (la dernière tortue avance de 2 cases, sil y en a plusieurs empilées le joueur choisit soit de les déplacer toutes soit celle de son choix)
} CardEffects;

string getDescription(CardEffects effect = CardEffects::None);

#endif