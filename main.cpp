#include <iostream>
#include <cstdlib>
#include <ctime>

using std::cout;
using std::cin;
using std::endl;

int main() {
    // Random number between 1 - 10
    srand(time(0));
    int magic = 0, maxNumber, maxTries;
    cout << "What is the max number to guess: ";
    cin >> maxNumber;
    cout << "What is the max tries: ";
    cin >> maxTries;
    magic = (rand() % 10) + 1; // methods <> function
    int guess;
    bool won = false;
    for (int i = 0; i < maxTries; i++) {
        cout << "Guess #" << (i + 1) << "What is your guess: ";
    cin >> guess;
    if (magic == guess) {
        cout << "Your are a winner" << endl;
        won = true;
        break;
    }else {


    }
        if (!won)
        cout << "Loser!" <<endl;


    }
    cout << "The magic number" <<  " is " << magic << endl;
        return 0;
}