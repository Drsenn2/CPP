//Die Roller
//Demonstrates generation of random numbers

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
  //seed random number generator
  srand(static_cast<unsigned int>(time(0)));
//generate random number
  int randomNumber = rand();
//get random number between 1-6
  int die = (randomNumber%6)+1;
  cout << "You rolled a " << die << endl;

  return 0;
}