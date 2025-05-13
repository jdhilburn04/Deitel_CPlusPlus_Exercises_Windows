#include <iostream>
#include <iomanip>
#include <random>
using namespace std;

int rollDice();

int main() {

    enum class Status {keepRolling, won, lost};
    int myPoint = 0;
    Status gameStatus = Status::keepRolling;


    // Wins and losses for first roll
    switch (const int  sum{rollDice()}) {

        case 7:
        case 11:
            gameStatus = Status::won;
            cout << "Player wins";
            break;
        case 2:
        case 3:
        case 12:
            gameStatus = Status::lost;
            cout << "Player lost";
            break;
        default:
            myPoint = sum;\
            cout << "Point is: " << myPoint << "\n";
            break;
    }

    // Continuing Game Loop
    while (gameStatus == Status::keepRolling) {
        if (const int sum{rollDice()}; sum == myPoint) {
            gameStatus = Status::won;
        }
        else if (sum == 7) {
            gameStatus = Status::lost;
        }

        // Display win or lost messages
        if (gameStatus == Status::won) {
            cout << "Player wins\n";
        }
        else {
            cout << "Player lost\n";
        }
    }

}

int rollDice() {

    static random_device rd; // Sets random engine
    static default_random_engine rng(rd());
    static uniform_int_distribution randomDie{1, 6};

    const int die1{randomDie(rng)};
    const int die2{randomDie(rng)};
    const int sum{die1 + die2};

    // Display results
    cout << "Player rolled " << die1 << " + " << die2 << " = " << sum << "\n";

    return sum;
}

