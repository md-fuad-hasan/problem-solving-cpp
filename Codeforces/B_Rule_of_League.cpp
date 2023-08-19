#include <bits/stdc++.h>
using namespace std;
#define FastIO                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(NULL);
#define vi vector<int>
#define pi pair<int, int>
#define fi first
#define sc second
#define msi map<string, int>
#define mi map<int, int>
#define si set<int>
#define usi unordered_set<int>
#define ll long long
#define f(i, a, n) for (ll i = a; i < n; i++)
#define nl "\n"

void solve()
{
    int n, x, y;
    cin >> n >> x >> y;

    if (x == 0 && y == 0)
    {
        cout << -1 << nl;
        return;
    }
    if (x != 0 && y != 0)
    {
        cout << -1 << nl;
        return;
    }
    int m = (n - 1) % max(x, y);
    if (m != 0)
    {
        cout << -1 << nl;
        return;
    }
    int a = 1;
    m = (n - 1) / max(x, y);
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= max(x, y); j++)
        {
            cout << a << ' ';
        }
        if (a == 1)
        {
            a += max(x, y) + 1;
        }
        else
        {
            a += max(x, y);
        }
    }

    cout << nl;

    return;
}

int main()
{

    FastIO int test = 1;
    cin >> test;
    while (test--)
    {
        solve();
    }
    return 0;
}