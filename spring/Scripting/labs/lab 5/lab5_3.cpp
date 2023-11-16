// This program lets you play rock, paper, scissors
// 5/1/2023
// Lab 5 
// Alex DeGhetto
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    // random number generator
    srand(time(nullptr));

    // declare variables
    int userChoice, computerChoice, result;
    const int ROCK = 1, PAPER = 2, SCISSORS = 3;

    // Prompt the user to enter their choice
    cout << "Choose Rock(1), Paper(2), or Scissors(3): ";
    cin >> userChoice;

    // Generate a random choice for the computer
    computerChoice = (rand() % 3) + 1;

    // Determine the result
    if (userChoice == ROCK) {
        if (computerChoice == ROCK) {
            result = 0; // tie
        } else if (computerChoice == PAPER) {
            result = -1; // computer wins
        } else {
            result = 1; // user wins
        }
    } else if (userChoice == PAPER) {
        if (computerChoice == ROCK) {
            result = 1; // user wins
        } else if (computerChoice == PAPER) {
            result = 0; // tie
        } else {
            result = -1; // computer wins
        }
    } else if (userChoice == SCISSORS) {
        if (computerChoice == ROCK) {
            result = -1; // computer wins
        } else if (computerChoice == PAPER) {
            result = 1; // user wins
        } else {
            result = 0; // Tie
        }
    } else {
        cout << "Invalid choice. Please choose Rock (1), Paper (2), or Scissors (3)." << endl;
        return 0;
    }

    // Output the result
    if (result == 0) {
        cout << "It's a tie!" << endl;
    } else if (result == 1) {
        cout << "You win!" << endl;
    } else {
        cout << "Computer wins!" << endl;
    }

    return 0;
}
