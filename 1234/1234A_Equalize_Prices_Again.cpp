#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        long ans = 0;
        int a[105];
        int n;
        cin >> n;
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
            ans += a[i];
        }
        if (ans % n != 0)
            ans = ans / n + 1;
        else
            ans = ans / n;
        cout << ans << endl;
    }
}