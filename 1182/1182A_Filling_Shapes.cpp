#include <iostream>
#include <math.h>

using namespace std;
    int main() {
    int n, numberOfWays;
    cin >> n;

    if (n%2 == 0){
        numberOfWays = pow (2, n/2);
        cout << numberOfWays;
    } else{
        cout << 0;
    }
}
