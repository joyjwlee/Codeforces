#include <iostream>

using namespace std;
    int main() {
    string hand; cin >> hand;
    string ans = "NO";
    string input;
    for(int i = 0; i < 5; i++){
        cin >> input;
        if(input.at(0) == hand.at(0) || input.at(1) == hand.at(1))
            ans = "YES";
    }
    cout << ans;
}
