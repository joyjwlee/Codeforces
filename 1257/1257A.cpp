#include <bits/stdc++.h>

using namespace std;

int solve(int n, int swaps, int a, int b){
    if(swaps == 0) return abs(a-b);
    int larger = max(a, b);
    int smaller = larger==a ? b:a;
    while( swaps > 0 ){
        if(1 < smaller && swaps > 0){
            smaller--;
            swaps--;
        }
        if(larger < n && swaps > 0){
            larger++;
            swaps--;
        }
        if(smaller = 1 && larger == n) break;
    }
    return larger-smaller;
}

int main() {
    int cases; cin >> cases;
    int ans[105];
    int n, x, a, b;
    for(int i = 0; i < cases; i++){
        cin >> n >> x >> a >> b;
        ans[i] = solve(n, x, a, b);
    }
    for(int i = 0; i < cases; i++){
        cout << ans[i] << endl;
    }
}
