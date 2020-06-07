#include <iostream>

using namespace std;
    int main() {
    int money, ones, fives, tens, twenties, hundreds;
    int total = 0;
    cin >> money;

    hundreds = money / 100;
    twenties = ( money - hundreds * 100 ) / 20;
    tens = ( money - hundreds * 100 - twenties * 20 ) / 10;
    fives = ( money - hundreds * 100 - twenties * 20 - tens * 10) / 5;
    ones = ( money%5 );

    total = hundreds + twenties + tens + fives + ones;
    cout << total/* << " " << hundreds << " " << twenties << " " << tens << " " << fives << " " << ones*/;
}
