#include <iostream>

using namespace std;
    int main() {
    int A, B, smallest, factorial;
    cin >> A >> B;

    if (A > B){
        smallest = B;
    } else{
        smallest = A;
    }

    factorial = 1;
    for (int i = smallest; i > 0; i--){
        factorial = factorial * i;
    }
    cout << factorial;
}
