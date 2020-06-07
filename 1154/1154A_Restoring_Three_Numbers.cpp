#include <iostream>

using namespace std;
    int main() {
    unsigned long long w, x, y, z, a, b, c, d, highest = 0;
    cin >> w >> x >> y >> z;

    highest = ( w + x + y + z ) / 3;
    a = highest - w;
    b = highest - x;
    c = highest - y;
    d = highest - z;

    if (a != 0) cout << a << " ";
    if (b != 0) cout << b << " ";
    if (c != 0) cout << c << " ";
    if (d != 0) cout << d << " ";
}
