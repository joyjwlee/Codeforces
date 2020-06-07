#include <iostream>
#include <cmath>
#define LL long long

using namespace std;
    int main() {
    LL n, k;
    cin >> n >> k;

    LL c = (-2)*(k+n);
    LL bSquared4ac = 9 - 4*c;
    LL discriminant = sqrt(bSquared4ac);
    LL x = (-3+discriminant)/2;

    LL candy = n - x;
    cout << candy;
}
