#include <bits/stdc++.h>

using namespace std;

void ans()
{
    int n;
    cin >> n;
    int arr[n], t, temp, ans[n] = {0};
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        arr[i]--;
    }
    for (int i = 0; i < n; i++)
    {
        if (ans[i])
            continue;
        temp = i;
        t = 0;
        do
        {
            t++;
            v.push_back(temp);
            temp = arr[temp];
        } while (temp != i);
        for (int j = 0; j < v.size(); j++)
            ans[v[j]] = t;
        v.clear();
    }
    for (int i = 0; i < n; i++)
        cout << ans[i] << " ";
    cout << endl;
    return;
}

int main()
{
    int q;
    cin >> q;
    while (q--)
        ans();
    return 0;
}