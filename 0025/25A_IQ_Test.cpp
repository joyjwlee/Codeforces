#include <iostream>

using namespace std;
    int main() {
    int n, numberOdd, index;
    cin >> n;

    int evenness[101]; // set up array
    for (int i = 0; i < n; i++){
        cin >> evenness[i];
    }

    numberOdd = 0; // see how many are odd / even
    for (int i = 0; i < n; i++){
        if (evenness[i]%2 == 1) numberOdd++;
    }
    /* > 1, more are odd; = 1, more are even */

    for (int i = 0; i < n; i++){
        if (evenness[i]%2 == 0 && numberOdd > 1) cout << i+1;
        if (evenness[i]%2 == 1 && numberOdd == 1) cout << i+1;
    }
}
