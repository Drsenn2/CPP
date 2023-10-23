//Menu Chooser
//Demonstrates the switch statement

#include <iostream>
using namespace std;

int main()
{
  cout << "Difficulty Levels\n\n";
  cout << "1 - Easy\n";
  cout << "2 - Normal\n";
  cout << "3 - Hard\n\n";

  enum choice {ZERO, EASY, NORMAL, HARD};
  
  cout << "Choice: ";
  cin >> choice;

  if (choice == EASY)
  {
   cout << "You picked Easy.\n"; 
  }
  else if (choice == NORMAL) 
  {
    cout << "You picked Normal.\n";
  }
  else (choice == HARD)
  {
  cout << "You picked Hard.\n";
  }

  return 0;
}