#include <iostream>

using namespace std;
    int main() {
    int numberOfMoves, finalPosition, modulo;
    cin >> numberOfMoves >> finalPosition;

    modulo = numberOfMoves%6;

    // set up position array
    int position[6][3] =
    {
        {0, 1, 2},
        {1, 0, 2},
        {1, 2, 0},
        {2, 1, 0},
        {2, 0, 1},
        {0, 2, 1}
    };

    cout << position[modulo][finalPosition];
}
