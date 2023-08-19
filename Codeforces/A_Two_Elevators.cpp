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
    int a, b, c;
    cin >> a >> b >> c;
    int d = a - 1;
    int e = abs(b - c) + c - 1;

    if (d < e)
        cout << 1 << nl;
    else if (e < d)
        cout << 2 << nl;
    else
        cout << 3 << nl;

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