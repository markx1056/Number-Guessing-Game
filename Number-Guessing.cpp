#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {

    srand(time(0));

    int secretNumber = rand() % 100 + 1;

    int guess;
    int attempts = 0;
    int maxAttempts = 7;
    char playAgain = 'y';

    cout << "================================\n";
    cout << "   NUMBER GUESSING GAME\n";
    cout << "================================\n";

    while (attempts < maxAttempts) {

        cout << "\nGuess a number between 1 and 100: ";
        cin >> guess;

        attempts++;

        if (guess == secretNumber) {
            cout << "\n*** Correct! You guessed it! ***\n";
            cout << "You took " << attempts << " attempt(s).\n";
            break;
        }
        else if (guess < secretNumber) {
            cout << "Too LOW! Try a higher number.\n";
        }
        else {
            cout << "Too HIGH! Try a lower number.\n";
        }

        cout << "Attempts left: " << (maxAttempts - attempts) << "\n";

        if (attempts == maxAttempts) {
            cout << "\nGame Over! The number was: " << secretNumber << "\n";
        }
    }

    cout << "\nPlay again? (y/n): ";
    cin >> playAgain;

    if (playAgain == 'y' || playAgain == 'Y') {
        main(); 
    }
    else {
        cout << "Thanks for playing! Goodbye.\n";
    }

    return 0;
}