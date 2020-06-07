#include <iostream>

using namespace std;
    int main() {
    int origW, origH, rotatedW, rotatedH;
    char pixel;
    char rotated[101][101];
    char flipped[101][101];
    char zoomed[202][202];
    cin >> origW >> origH;

    // input straight to rotated
    for (int i = 0; i < origH; i++){
        for (int j = 0; j < origW; j++){
            cin >> rotated[j][origH-i-1];
        }
    }

    // now flip the array
    rotatedW = origH;
    rotatedH = origW;
    for (int i = 0; i < rotatedH; i++){
        for (int j = 0; j < rotatedW; j++){
            flipped[i][rotatedW-j-1] = rotated[i][j];
        }
    }

    // input to zoomed array
    for (int i = 0; i < rotatedH; i++){
        for (int j = 0; j < rotatedW; j++){
            pixel = flipped[i][j];
            zoomed[2*i][2*j] = pixel;
            zoomed[2*i+1][2*j] = pixel;
            zoomed[2*i][2*j+1] = pixel;
            zoomed[2*i+1][2*j+1] = pixel;
        }
    }

    for (int i = 0; i < 2*rotatedH; i++){
        for (int j = 0; j < 2*rotatedW; j++){
            cout << zoomed[i][j];
        }
        cout << endl;
    }
}
