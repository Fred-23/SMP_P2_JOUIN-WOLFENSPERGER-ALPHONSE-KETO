#include "Donatello.h"

Donatello::Donatello() : Turtle(TargetTurtles::tDonatello) {}

void Donatello::displayTurtle() const {
  cout << "\033[0;32m"
       << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣠⣤⣤⣤⣤⣄⡀⠀⠀⠀⠀⢠⣤⣄⠀⣀⠀⠀" << endl;
  cout << "⠀⠀⠀⠀⠀⠀⠀⣠⣴⠟⠛⠉⠁⠀⠀⠈⠉⠛⠻⣦⣄⠀⢸⡟⠙⣿⡟⣷⡀" << endl;
  cout << "⠀⠀⠀⠀⠀⢠⣾⠏⠁⣀⠀⠀⠀⠀⠀⠀⠀⢀⣀⡈⠻⣷⣼⣧⠀⢹⡇⣹⡇" << endl;
  cout << "\033[0;35m"
       << "⠀⠀⠀⣰⡿⠟⠛⢛⣛⣛⡿⢶⣶⣶⡶⢿⣛⣛⡛⠛⠿⢿⣿⣷⣿⣣⡿⠁" << endl;
  cout << "⠀⠀⠀⣿⠁⢀⣼⠟⣯⣝⣻⣦⣤⣤⣾⣟⣫⣭⠻⣷⡄⠈⣿⣨⣿⠋⠀⠀" << endl;
  cout << "⠀⠀⣠⡾⠻⢷⣬⣛⣿⡿⠟⠋⠁⠀⠀⠈⠉⠛⢿⣿⣋⣵⡾⠛⢿⣅⠀⠀⠀" << endl;
  cout << "\033[0;32m"
       << "⠀⣼⠟⠀⠀⠀⠉⠿⠋⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠙⠿⠁⠀⠀⠀⠻⣧⠀⠀" << endl;
  cout << "⠰⣿⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣿⠆⠀" << endl;
  cout << "⠀⢻⣦⠀⠀⠀⠀⠀⢴⣤⣤⣀⣀⠀⠀⣀⣠⣤⡾⢿⡆⠀⠀⠀⠀⣴⡟⠀⠀" << endl;
  cout << "⠀⠀⠙⢷⣤⣀⠀⠀⠀⠈⠉⠙⠛⠛⠛⠛⠉⠁⠀⠈⠁⠀⣀⣤⡾⠋⠀⠀⠀" << endl;
  cout << "⠀⠀⠀⠀⠈⠛⠷⢶⣄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣠⡶⠟⠋⠁⠀⠀⠀⠀⠀" << endl;
  cout << "⠀⠀⠀⠀⠀⠀⠀⠈⠛⢷⣤⣀⡀⠀⠀⢀⣠⣴⡾⠛⠁⠀⠀⠀⠀⠀⠀⠀⠀" << endl;
  cout << "⠀⠀⠀⠀⠀⠀⠀     ⠛⠛⠛⠛⠀⠀⠀⠀⠀⠀⠀⠀" << endl;
}