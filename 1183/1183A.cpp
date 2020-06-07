#include <iostream>

using namespace std;
    int main() {
    int n, sumOfDigits, remainder;
    int ones, tens, hundreds, thousands;
    cin >> n;

    for (int i = 0; i < 4; i++){
        n += i;
        cout << n << endl;
        // procure digits
        thousands = (n/1000)%10;
        hundreds = (n/100)%10;
        tens = (n/10)%10;
        ones = n%10;
        // procure sum of digits
        sumOfDigits = thousands + hundreds + tens + ones;
        if (sumOfDigits%4 == 0){
            cout << n;
            break;
        }else{
        }
    }
    cout << endl << "yeet" << endl << n << endl << sumOfDigits;
}
