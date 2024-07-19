#include <iostream> // For input and output - cin and cout
#include <cstdlib>  // For srand() and rand()
#include <ctime>    // For time()

using namespace std; //(standard) namespace

int main() {
    srand(time(0)); // Seed the random number generator
    int randomNumber = rand() % 100 + 1; // Generate random number between 1 and 100
    int guess = 0;

    cout << "This is a Number Guessing Game with Tony from Herzing University!" << endl;
    cout << "I have picked a number between 1 and 100. Please Try to guess it!" << endl;

    while (guess != randomNumber) {
        cout << "Enter your guess: ";
        cin >> guess;

        if (guess > randomNumber) {
            cout << "Too high! Try again." << endl;
        } else if (guess < randomNumber) {
            cout << "Too low! Try again." << endl;
        } else {
            cout << "Congratulations! You've guessed the number!" << endl;
        }
    }

    return 0;
}
