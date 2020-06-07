#include <iostream>
#include <cmath>

using namespace std;
    int main() {
    double n, k;
    cin >> n >> k;

    double c = (-2)*(k+n);
    double bSquared4ac = 9 - 4*c;
    double discriminant = sqrt(bSquared4ac);
    double x = (-3+discriminant)/2;

    double candy = n - x;
    cout << candy;
}
