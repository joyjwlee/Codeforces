#include <iostream>

using namespace std;
    int main() {
    bool hasOne = false;
    int n; cin >> n;
    int x;
    for(int i = 0; i < n; i++){
        cin >> x;
        if(x == 1) hasOne = true;
    }
    if(!hasOne) cout << "EASY";
    else cout << "HARD";
}
