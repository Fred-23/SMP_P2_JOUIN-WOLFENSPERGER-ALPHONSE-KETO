#include "screenAPI.h"

void clearScreen() {
#if defined _WIN32
  system("cls");
  // clrscr(); // including header file : conio.h
#elif defined(__LINUX__) || defined(__gnu_linux__) || defined(__linux__)
  system("clear");
  // std::cout<< u8"\033[2J\033[1;1H"; //Using ANSI Escape Sequences
#elif defined(__APPLE__)
  system("clear");
#endif
}

void printMessage(string texte, int delai) {
  for (char c : texte) {
    cout << c;
    cout.flush();
    this_thread::sleep_for(chrono::milliseconds(delai));
  }
}