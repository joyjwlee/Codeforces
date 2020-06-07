#include <iostream>

using namespace std;
    int main() {
    int n, n3;
    int minimumDifference = INT_MAX;
    cin >> n;
    n3 = n*3;

    int degrees[n3];
    for (int i = 0; i < n; i++){
        cin >> degrees[i];
        degrees[i + n] = degrees[i];
    }

    if (n == 1){
        cout << 360;
    } else{
        for (int i = 0; i < n; i++){
            int tempSum = 0;
            for (int j = 1; j < n; j++){
                tempSum += degrees[i+j];
                if (tempSum <= 180){
                    int tempDiff = 180 - tempSum;
                    if (tempDiff < minimumDifference){
                        minimumDifference = tempDiff;
                    } else{
                    }
                } else if (tempSum > 180){
                    break;
                }
            }
        }
        cout << minimumDifference*2;
    }
}
