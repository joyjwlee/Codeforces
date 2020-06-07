#include <iostream>

using namespace std;
    int main() {
    long long int n, m, a, x, y;
    unsigned long long area;
    cin >> n >> m >> a;

    if(n%a == 0) x = n/a;
    else x = (n/a)+1;

    if(m%a == 0) y = m/a;
    else y = (m/a)+1;


    area = x * y;
    cout << area;
}
