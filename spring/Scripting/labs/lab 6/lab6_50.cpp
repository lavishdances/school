#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
int main()
{
    srand(time(NULL)); // seed the random number generator

    int answer = rand() % 100 + 1; // generate a random number between 1 and 100
    int guess;
    int num_guesses = 0;
    char play_again = 'y';

    while (play_again == 'y') {
        cout << "Welcome to the number guessing game!" << endl;
        cout << "I have a number between 1 and 100, can you guess it?" << endl;

        while (true) {
            cout << "Enter your guess: ";
            cin >> guess;

            num_guesses++;

            if (guess == answer) {
                cout << "Congratulations! You guessed the number in " << num_guesses << " tries." << endl;
                break;
            } else if (guess < answer) {
                cout << "The number is higher." << endl;
            } else {
                cout << "The number is lower." << endl;
            }
        }

        cout << "Do you want to play again? (y/n): ";
        cin >> play_again;

        answer = rand() % 100 + 1; // generate a new random number for the next game
        num_guesses = 0; // reset the number of guesses for the next game
    }

    cout << "Thanks for playing!" << endl;

    return 0;
}
