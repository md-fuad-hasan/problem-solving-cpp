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
    int n;
    cin >> n;

    if (n <= 4)
    {
        cout << -1 << nl;
        return;
    }

    for (int i = 2; i <= n; i += 2)
    {
        if (i != 4)
        {
            cout << i << " ";
        }
    }

    cout << 4 << " " << 5 << " ";

    for (int i = 1; i <= n; i += 2)
    {
        if (i != 5)
        {
            cout << i << " ";
        }
    }

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