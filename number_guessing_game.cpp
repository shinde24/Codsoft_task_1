#include<iostream>
#include<ctime>
using namespace std;

int main(){

    // Randoom number generator
    srand(time(0));
    
    // Range for random number is 1 to 100. 
    const int minNumber = 1;
    const int maxNumber = 100;

    char playAgain;

    do{
        int randomNumber = minNumber + (rand() % (maxNumber - minNumber + 1));

        int guess;
        int attempts = 0;

        cout << "Welcome to the Number Guessing Game!" << endl;

        do{
            cout << "Enter your guess between" << minNumber << " and " << maxNumber << ": ";

            cin >> guess;

            if(guess > randomNumber){
                cout << "Too high! Try again." << endl;
            }
            else if(guess < randomNumber){ 
                cout << "Too low! Try again. " << endl;
            }

            attempts++;
        }while(guess != randomNumber);

        cout << "Congratulations! You guessed the number " << randomNumber << " correctly in " << attempts << " attempts." << endl;

        cout << "Do you want to play again? (Yes/No): ";
        cin >> playAgain;

        playAgain = tolower(playAgain);
    } while(playAgain == 'y');

    cout << "Thank you for playing! Goodbye!" << endl;

    return 0;

}