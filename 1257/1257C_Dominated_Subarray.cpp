#include <bits/stdc++.h>

using namespace std;
int main() {
    int T, N; cin >> T;
    while(T--){
        int ans = 0x3f3f3f3f;
        cin >> N;
        vector<int> a(N);
        vector<int> pos(N);
        for(int i = 0; i < N; i++){
            cin >> a[i];
            if(!pos[a[i]]) pos[a[i]] = i;
            else{
                ans = min(ans, i - pos[a[i]] +1);
                pos[a[i]] = i;
            }
        }
        if(ans == 0x3f3f3f3f) cout << -1;
        else cout << ans;
    }
}
