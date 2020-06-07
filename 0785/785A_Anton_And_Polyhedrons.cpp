#include <iostream>

using namespace std;
    int main() {
    int n, sum;
    string polygon;
    cin >> n;

    sum = 0;
    for(int i = 0; i < n; i++){
        cin >> polygon;
        if (polygon == "Tetrahedron"){
            sum += 4;
        } else if (polygon == "Cube"){
            sum += 6;
        } else if (polygon == "Octahedron"){
            sum += 8;
        } else if (polygon == "Dodecahedron"){
            sum += 12;
        } else if (polygon == "Icosahedron"){
            sum += 20;
        } else{
        }
    }
    cout << sum;
}
