#include <iostream>
#include <cmath>

using namespace std;
    int main() {
    double n, k;
    cin >> n >> k;

    double a = 1;
    double b = (-2)*n - 3;
    double c = n*n + n - 2*k;

    double discriminant = b*b - 4*a*c;
    double root = sqrt(discriminant);
    double candy = ( (-1)*b + root ) / 2;

    cout << candy;
}
