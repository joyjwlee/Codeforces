#include <iostream>

using namespace std;
    int main() {
    long long N, B, D; cin >> N >> B >> D;
    long long sum = 0, input;
    for(int i = 0; i < N; i++){
        cin >> input;
        if(input < B) sum += input;
    }
    cout << sum/D;
}
