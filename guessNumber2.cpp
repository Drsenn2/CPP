//Guess My Number
//classic number guessing game

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    srand(static_cast<unsigned int>(time(0)));

    int choice;
    int tries = 0;
    int randomGuess;

    cout << "\tWelcome to Guess My Number\n\n";
    cout << "Enter a number between 1 - 100: ";
    cin >> choice;

    do
    {
        randomGuess = rand() % 100 + 1;
        cout << randomGuess << endl;
        ++tries;

        if (randomGuess > choice)
        {
            cout << "Too high!\n\n";
        }
        else if (randomGuess < choice)
        {
            cout << "Too low!\n\n";
        }
        else {
            cout << "\nThe computer guessed it in " << tries << " guesses!\n";
        }
    } while (randomGuess != choice);

    return 0;
}