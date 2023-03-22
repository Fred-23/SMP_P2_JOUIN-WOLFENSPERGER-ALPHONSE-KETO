#include "Pizza.h"
#include "screenAPI.h"
list<TargetTurtles> Pizza::findLatest(void) { // find the last turtles
  for (int index = 0; index < NB_SLICES; index++) {
    // explore each slice of the pizza
    if (getSlice(index).empty() == false) { // at the first slice with turtles
      return getSlice(index);
      break;                                // stop the loop
    }
  }
}

// gives the chained list of the box on which the last ones are located
// turtles

int Pizza::findTurtle(TargetTurtles pTarget) {
  for (int slice_index = 0; slice_index < NB_SLICES; slice_index++) {
    for (list<TargetTurtles>::iterator it = slices[slice_index]->begin(); it != slices[slice_index]->end(); it++) {     
      if (*it == pTarget) {
        return slice_index;
        break;
        break;
      }
    }
  }
  return -1; // -1 if not found
}

int Pizza::findTurtleinSlice(TargetTurtles pTarget, int sliceIndex) {
  int turtle_index = 0;
  list<TargetTurtles>::iterator it;
  for (it = slices[sliceIndex]->begin(); it != slices[sliceIndex]->end();
       it++) {
    if (*it == pTarget) {
      return turtle_index; // return the iterator where the turtle is in th slice
      break;
    }
    turtle_index++;
  }
  return -1; // return -1 if not found
}

void Pizza::initTurtle(TargetTurtles pTarget) {
  slices[0]->push_back(pTarget);
  cout << slices[0]->size() << endl;
}

/*void Pizza::moveTurtle(TargetTurtles pTarget, int effect) {
  int targetSlice = 0;
  if (findTurtle(pTarget, &targetSlice) == 0) { // if the turtle is found
    int destinationSlice = targetSlice + effect;
    cout << "tortue trouvée"<<endl;
    cout << "target slice"<< targetSlice<<endl;
    cout << "effect int"<< effect<<endl;
    if (destinationSlice < 0 || destinationSlice >= NB_SLICES) {
      return; // the turtle cannot move outside of the pizza
      // make an exeception here
    }else{*/
/*slices[targetSlice]->remove(pTarget);
slices[destinationSlice]->push_back(pTarget);*/
/*auto& sourceSlice = slices[targetSlice];
auto& destSlice = slices[destinationSlice];
destSlice->splice(destSlice->end(), *sourceSlice, sourceSlice->begin(),
sourceSlice->end());
//Container, x , first ,last (splice)
}
}
}*/

void Pizza::moveTurtle(TargetTurtles pTarget, int effect) {
  int targetSlice = 0;
  int target_slice_index = findTurtle(pTarget);
  
  if (target_slice_index != -1) { // if the turtle is found
    int destination_slice_index = target_slice_index + effect;

    //debug :
    cout << "tortue trouvée" << endl;
    cout << "target slice" << target_slice_index << endl;
    cout << "effect int" << effect << endl;

    if (destination_slice_index < 0 || destination_slice_index >= NB_SLICES) {
      return; // the turtle cannot move outside of the pizza
      // make an exception here
    } else {

      auto &sourceSlice = slices[target_slice_index];
      auto &destSlice = slices[destination_slice_index];
      //destSlice->splice(destSlice->end(), *sourceSlice, sourceSlice->begin(),
                        //sourceSlice->end());
      // Container, x , first ,last (splice)

      list<TargetTurtles>::iterator it = sourceSlice->begin();
      int turtle_index = findTurtleinSlice(pTarget, target_slice_index);
      advance(it, turtle_index);
      destSlice->splice(destSlice->end(), *sourceSlice, it, sourceSlice->end());
    }
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
        os << getColor(target) << getName(target) <<"\033[1;37m" <<"\t";
      }
    } else {
      os << "empty";
    }
    os << endl;
  }
  return os;
}
