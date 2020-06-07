#include <iostream>

using namespace std;
    int main() {
    int x, n; cin >> x >> n;
    while(n > 0){
        if(x%10 == 0) x /= 10;
        else x--;
        n--;
    }
    cout << x;
}
