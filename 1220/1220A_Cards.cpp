#include <iostream>
#include <math.h>

using namespace std;
    int main() {
    int n; cin >> n;
    int numZ = 0, numN = 0;
    char x;
    for(int i = 0; i < n; i++){
        cin >> x;
        if(x == 'z') numZ++;
        else if(x == 'n') numN++;
    }
    int tot = numZ + numN;
    for(int i = 0; i < numN; i++)
        cout << "1 ";
    for(int i = 0; i < numZ; i++)
        cout << "0 ";
}
