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
    int n, a, b, c, res = 0, t;
    cin >> n >> a >> b >> c;
    t = 2 * n;
    if (n <= a)
    {
        res += n;
        t -= n;
    }
    else
    {
        res += a;
        t -= a;
    }

    if (n <= b)
    {
        res += n;
        t -= n;
    }
    else
    {
        res += b;
        t -= b;
    }

    if (t <= c)
    {
        res += t;
    }
    else
    {
        res += c;
    }

    cout << res << nl;

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