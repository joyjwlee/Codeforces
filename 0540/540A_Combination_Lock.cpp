#include <bits/stdc++.h>

using namespace std;
    int main() {
    int N; cin >> N;
    string x, y; cin >> x >> y;
    char charX, charY;
    int intX, intY;
    int counter = 0, diff;
    for(int i = 0; i < N; i++){
        charX = x.at(i); charY = y.at(i);
        intX = (int)charX; intY = (int)charY;
        diff = abs(intX - intY);
        if(diff > 5) diff = 10-diff;
        counter += diff;
    }
    cout << counter;
}
