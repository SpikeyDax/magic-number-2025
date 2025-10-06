#include <iostream>
#include <cstdlib>
#include <ctime>

using std::cout;
using std::cin;
using std::endl;

int main() {
    // Random number between 1 - 10
    srand(time(0));
    int magic = 0;
    magic = (rand() % 10) + 1; // methods <> function
    int guess;
    cout << " What is your guess: ";
    cin >> guess;
    if (magic == guess) {
        cout << "Your are a winner" << endl;
    }else {
        cout << "Loser!" <<endl;
        cout << "The magic number" <<  " is " << magic << endl;

    }
        return 0;
}