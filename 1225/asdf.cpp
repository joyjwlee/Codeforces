#include <bits/stdc++.h>

using namespace std;
#define MOD 1000000007
#define pi 3.1415926535897932384626433832795028841971693993751058209749445923078164062
#define ll long long
#define pb push_back
#define pf push_front
#define mp make_pair
#define mt make_tuple
#define ub upper_bound
#define lb lower_bound
#define popb pop_back()
#define popf pop_front()
#define ff first
#define ss second
#define vl vector<ll>
#define vi vector<int>
#define vs vector<string>
#define vll vector<pair<ll, ll>>
#define vii vector<pair<int, int>>
#define viii vector<tuple<int, int, int>>
#define vlll vector<tuple<ll, ll, ll>>
#define vvl vector<vector<ll>>
#define vv vector<vector<int>>
#define all(v) v.begin(), v.end()
#define sqrt sqrtl
#define cbrt cbrtl
#define pll pair<ll, ll>
#define pii pair<int, int>
#define mapcl map<char, ll>
#define mapci map<char, int>
#define mapll map<ll, ll>
#define mapii map<int, int>
#define seti set<int>
ifstream fin("input.txt");
ofstream fout("output.txt");
#define FOR(i, l, r) for (int i = int(l); i < int(r); ++i)

ll fast_exp(ll base, ll exp)
{
    ll res = 1;
    while (exp > 0)
    {
        if (exp % 2 == 1)
            res = (res * base) % MOD;
        base = (base * base) % MOD;
        exp /= 2;
    }
    return res % MOD;
}
int gcd(int a, int b)
{
    while (a && b)
        a > b ? a %= b : b %= a;
    return a + b;
}
int val(char c)
{
    if (c >= '0' && c <= '9')
        return (int)c - '0';
    else
        return (int)c - 'A' + 10;
}
ll pows(int a, int b)
{
    ll res = 1;
    for (int i = 0; i < b; ++i)
    {
        res *= a;
    }
    return res;
}
ll logx(ll base, ll num)
{
    int cnt = 0;
    while (num != 1)
    {
        num /= base;
        ++cnt;
    }
    return cnt;
}
ll divisibles(ll a, ll b, ll m)
{
    if (a % m == 0)
        return (b / m) - (a / m) + 1;
    else
        return (b / m) - (a / m);
} // in [a,b]
string bitstring(int n)
{
    string s;
    while (n)
    {
        s += (n % 2) + '0';
        n /= 2;
    }
    reverse(all(s));
    return s;
} // only sufficient bits
// dsu start

vi root(200001, 0);
vi size(200001, 1);
int find(int x)
{
    while (x != root[x])
        x = root[x];
    return x;
}
bool same(int a, int b) { return find(a) == find(b); }
void unite(int a, int b)
{
    a = find(a);
    b = find(b);
    if (size[a] < size[b])
        swap(a, b);
    size[a] += size[b];
    root[b] = a;
}

// dsu end
vi vis(200001, 0);
vi adj[200001];

int main()
{
    std::ios::sync_with_stdio(false);
    //string bitstring = std::bitset< 3 >( 7 ).to_string(); <bits> (num)
    //srand(time(0));
    //cin.tie(NULL);
    //cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {

        char c[101][101];
        char final[101][101];
        for (int i = 0; i < 101; ++i)
            for (int j = 0; j < 101; ++j)
                final[i][j] = '-';
        int row, col, k, rc = 0;
        cin >> row >> col >> k;
        vi ans(k, 0);
        for (int i = 0; i < row; ++i)
            for (int j = 0; j < col; ++j)
            {
                cin >> c[i][j];
                if (c[i][j] == 'R')
                    ++rc;
            }
        while (rc)
        {
            for (int i = 0; i < k && rc > 0; ++i)
            {
                ++ans[i];
                --rc;
            }
        }
        int right = 1;
        int left = 0;
        int start = 0;
        int rowcur = 0;
        mapci mps;
        char lastchar;
        for (int i = 0; i < k; ++i)
        {
            int a = ans[i];
            char cx;
            if (i <= 9)
            {
                cx = i + '0';
                lastchar = cx;
            }
            else if (i <= 35)
            {
                for (char u = 'a'; u <= 'z'; ++u)
                {
                    if (!mps[u])
                    {
                        cx = u;
                        ++mps[u];
                        lastchar = cx;
                        break;
                    }
                }
            }
            else if (i <= 62)
            {
                for (char u = 'A'; u <= 'Z'; ++u)
                {
                    if (!mps[u])
                    {
                        cx = u;
                        ++mps[u];
                        lastchar = cx;
                        break;
                    }
                }
            }

            int flag = 0;
            while (a)
            {
                if (right)
                {
                    for (int j = start; j < col; ++j)
                    {
                        if (a)
                            final[rowcur][j] = cx;
                        if (c[rowcur][j] == 'R' && a)
                        {
                            --a;
                            final[rowcur][j] = cx;
                        }
                        if (!a && j != col - 1)
                        {
                            start = j + 1;
                            ++flag;
                            break;
                        }
                    }
                    if (flag)
                        continue;
                    ++rowcur;
                    right = 0;
                    left = 1;
                    start = col - 1;
                }
                else if (left)
                {
                    for (int j = start; j >= 0; --j)
                    {
                        if (a)
                            final[rowcur][j] = cx;
                        if (c[rowcur][j] == 'R' && a)
                        {
                            --a;
                            final[rowcur][j] = cx;
                        }
                        if (!a && j != 0)
                        {
                            start = j - 1;
                            ++flag;
                            break;
                        }
                    }
                    if (flag)
                        continue;
                    ++rowcur;
                    right = 1;
                    left = 0;
                    start = 0;
                }
            }
        }
        for (int i = 0; i < row; ++i)
        {
            for (int j = 0; j < col; ++j)
            {
                if (final[i][j] == '-')
                    final[i][j] = lastchar;
                cout << final[i][j];
            }
            cout << "\n";
        }
    }
}