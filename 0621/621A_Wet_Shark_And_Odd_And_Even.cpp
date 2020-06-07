#include <iostream>

using namespace std;
    int main() {
    unsigned long long n, temporary;
    unsigned long long smallestOdd = INT_MAX;
    cin >> n;
    unsigned long long  sum = 0;

    unsigned long long  numbers[100001]; // set up array
    for (int i = 0; i < n; i++){
        cin >> temporary;
        numbers[i] = temporary;
        sum += temporary;
    }

    if (sum%2 == 0){
        cout << sum;
    } else{
        for (int i = 0; i < n; i++){
            if (numbers[i]%2 == 1 && numbers[i] <= smallestOdd){
                smallestOdd = numbers[i];
            }
        }
        sum -= smallestOdd;
        cout << sum;
    }
}
