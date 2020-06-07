#include <iostream>

using namespace std;

int main(void){
    int num2, num3, num5, num6;
    cin >> num2 >> num3 >> num5 >> num6;
    int num256 = 0, num32 = 0;
    //Find number of 256s
    while(num2 > 0 && num5 > 0 && num6 > 0){
        num256++;
        num2--; num5--; num6--;
    }
    //Find number of 32s
    while(num2 > 0 && num3 > 0){
        num32++;
        num2--; num3--;
    }
    cout << num256*256 + num32*32;
}
