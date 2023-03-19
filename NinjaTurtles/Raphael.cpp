#include "Raphael.h"

Raphael::Raphael() : Turtle(TargetTurtles::tRaphael) {}

void Raphael::displayTurtle() const {
  cout << "\033[2J\033[0;0H";
  cout << "\033[0;32m"
       << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣠⣤⣤⣤⣤⣄⡀⠀⠀⠀⠀⢠⣤⣄⠀⣀⠀⠀" << endl;
  cout << "⠀⠀⠀⠀⠀⠀⠀⣠⣴⠟⠛⠉⠁⠀⠀⠈⠉⠛⠻⣦⣄⠀⢸⡟⠙⣿⡟⣷⡀" << endl;
  cout << "⠀⠀⠀⠀⠀⢠⣾⠏⣀⣀⠀⠀⠀⠀⠀⠀⠀⢀⣀⡈⠻⣷⣼⣧⠀⢹⡇⣹⡇" << endl;
  cout << "\033[0;31m"
       << "⠀⠀⠀⣰⡿⠟⠛⢛⣛⣛⡿⢶⣶⣶⡶⢿⣛⣛⡛⠛⠿⢿⣿⣷⣿⣣⡿⠁" << endl;
  cout << "⠀⠀⠀⣿⠁⢀⣼⠟⣯⣝⣻⣦⣤⣤⣾⣟⣫⣭⠻⣷⡄⠈⣿⣨⣿⠋⠀⠀" << endl;
  cout << "⠀⠀⣠⡾⠻⢷⣬⣛⣿⡿⠟⠋⠁⠀⠀⠈⠉⠛⢿⣿⣋⣵⡾⠛⢿⣅⠀⠀⠀" << endl;
  cout << "\033[0;32m"
       << "⠀⣼⠟⠀⠀⠀⠉⠿⠋⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠙⠿⠁⠀⠀⠀⠻⣧⠀⠀" << endl;
  cout << "⠰⣿⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣿⠆⠀" << endl;
  cout << "⠀⢻⣦⠀⠀⠀⠀⠀⢴⣤⣤⣀⣀⠀⠀⣀⣠⣤⡾⢿⡆⠀⠀⠀⠀⣴⡟⠀⠀" << endl;
  cout << "⠀⠀⠙⢷⣤⣀⠀⠀⠀⠈⠉⠙⠛⠛⠛⠛⠉⠁⠀  ⠀⣀⣤⡾⠋⠀⠀⠀" << endl;
  cout << "⠀⠀⠀⠀⠈⠛⠷⢶⣄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣠⡶⠟⠋⠁⠀⠀⠀⠀⠀" << endl;
  cout << "⠀⠀⠀⠀⠀⠀⠀⠈⠛⢷⣤⣀⡀⠀⠀⢀⣠⣴⡾⠛⠁⠀⠀⠀⠀⠀⠀⠀⠀" << endl;
  cout << "⠀⠀⠀⠀⠀⠀⠀     ⠛⠛⠛⠛⠀⠀⠀⠀⠀⠀⠀⠀" << endl;
}