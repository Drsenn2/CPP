/*
Write a new version of the Word Jumble game that does the following:
  1. Adds a scoring system. Make the point value for a word based on its length. Deduct points if the player asks for a hint. - done
  2. Adds at least 5 more words and hints for a total of at least 10 words. - done
  3. On a win, asks the player if they would like to play again. If so, restart the main game loop with a new word. - done
  4. Adds a difficulty level that the player can choose which limits the players' guesses. Easy Mode has unlimited guesses. Medium Mode has a limit of 10 guesses. Hard Mode has a limit of 3 guesses. - done

Review your Ch 3 Exercise and/or the book demo for the Word Jumble. It may help to have completed the Ch 3 Exercise assignment first.
*/

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
  enum fields {WORD, HINT, NUM_FIELDS};
  const int NUM_WORDS = 10; //additional words
  const string WORDS[NUM_WORDS][NUM_FIELDS] =
  {
    {"wall", "Do you feel you're banging your head against something?"},
    {"wait", "Hold up!"},
    {"pizza", "Do you like yours with pineapple?"},
    {"glasses", "These might help you see the answer."},
    {"labored", "Going slowly, is it?"},
    {"persistent", "Keep at it."},
    {"aardvark", "Nature's exterminator?"},
    {"jumble", "It's what the game is all about."},
    {"zigzag", "Can't keep it straight."},
    {"laxative", "Take it easy."}
  };
  
    char playAgain; //play again?
    int totalScore = 0;

  do { //runs first time then repeats on while loop
    //random word from list
      srand(static_cast<unsigned int>(time(0)));
      int choice = (rand()% NUM_WORDS);
      string theWord = WORDS[choice][WORD]; //this is the word to guess
      string theHint = WORDS[choice][HINT]; //hint for word
      string jumble = theWord; //this is the jumbled version of the word
      int length = jumble.size();
    
      for (int i=0; i<length; ++i)
        {
          int index1 = (rand()% length);
          int index2 = (rand()% length);
          char temp = jumble[index1];
          jumble[index1] = jumble[index2];
          jumble[index2] = temp;
        }
    //intro
      cout<<"\n\nWelcome to Word Jumble!\n\n";
      cout<<"Unscramble the letters to make a word.\n";
      cout<<"Enter 'hint' for a hint\n";
      cout<<"Enter 'quit' to quit the game.\n\n";

   //difficulty level
    int maxAttempts; //maximum attempts
    enum difficulty {EASY, MEDIUM, HARD, NUM_DIFF_LEVELS};
    cout<<"There are "<<NUM_DIFF_LEVELS<<" difficulty levels.\n\n";
    int tries = 0; //number of tries for guess
    int score = 0;
    int hintPenalty = 0;
    int points = 0;
  
    int difficultyLevel; 
    cout << "Please choose a level of difficulty:\n";
    cout << "1. Easy (Unlimited Guesses)\n";
    cout << "2. Medium (10 Guesses)\n";
    cout << "3. Hard (3 Guesses)\n\n";
    cin >> difficultyLevel; 
    
    switch (difficultyLevel)
        {
          case 1:
            maxAttempts = 999; //unlimited
            cout << "You have chosen Easy difficulty.\n\n";
            break;
          case 2:
            maxAttempts = 10; //Medium
            cout << "You have chosen Medium difficulty.\n\n";
            break;
          case 3:
            maxAttempts = 3; //Hard
            cout << "You have chosen Hard difficulty.\n\n";
            break;
          default:
            cout << "You have made an illegal choice.\n\n";
        }
    
      cout<<"The jumble is: "<<jumble;
    
      string guess;
      cout<<"\n\n Your guess: ";
      cin>>guess;
    
      while((guess != theWord) && (guess != "quit") && (tries < (maxAttempts-1)))
        {
          if(guess=="hint")
            {
              cout<<theHint;
              hintPenalty--;
            }
          else
            {
              cout<<"\nSorry, that's not it.";
            }
          cout<<"\n\n Your guess: \n";
          cin>>guess;
          ++tries;
        }
          if(guess==theWord)
            {
              points = (theWord.length() + hintPenalty);
              int possiblePoints = theWord.length();
              cout<<"\nThat's it! You guessed it in "<<(tries+1)<<" attempts.\n";
              cout<<"You earned " << points << " out of " << possiblePoints << " possible points!\n";
              score = points;
              totalScore = totalScore + score;
              cout<<"Total score: "<<totalScore;
            }
          if((guess!=theWord) && (guess!="quit") && (tries=(maxAttempts-1)))
            {
              cout<<"\nYou are out of guesses!  The correct word was " <<theWord<<".\n";
            }
          if(guess=="quit")
            {
              cout<<"\nThank you for playing!";
              return 0;
            }
    
    cout<<"\n\nDo you want to play again? (y/n) ";
    cin>> playAgain;
    
  } while(playAgain == 'y' || playAgain == 'Y');
    
  cout<<"\nThanks for playing!";
  
  return 0;
}
