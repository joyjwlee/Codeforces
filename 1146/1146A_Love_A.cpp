#include <iostream>

using namespace std;
    int main() {
    string s; cin >> s;
    int numA = 0;
    for(int i = 0; i < s.size(); i++){
        if(s.at(i) == 'a') numA++;
    }
    int orig = numA;
    numA = numA*2 - 1;
    if(numA > s.size()) cout << s.size();
    else if(numA <= 1) cout << orig;
    else cout << numA;
}
