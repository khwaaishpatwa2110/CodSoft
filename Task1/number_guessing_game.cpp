#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    int randomNumber, guess;
    int attempts = 5;

    srand(time(0));

    randomNumber = rand() % 100 + 1;

    cout << "Guess the number between 1 and 100" << endl;
    cout << "You have 5 chances." << endl;

    while (attempts > 0) {
        cout << "\nEnter your guess: ";
        cin >> guess;

        if (guess > randomNumber) {
            cout << "Too high!" << endl;
        }
        else if (guess < randomNumber) {
            cout << "Too low!" << endl;
        }
        else {
            cout << "Correct! You guessed the number." << endl;
            return 0;
        }

        attempts--;

        cout << "Remaining chances: " << attempts << endl;
    }

    cout << "\nGame Over!" << endl;
    cout << "The correct number was: " << randomNumber << endl;

    return 0;
}
