#include <iostream>

using namespace std;
    int main() {
    int x; cin >> x;
    int mod = x%5;
    x /= 5;
    if(mod == 0) cout << x;
    else cout << x+1;
}
