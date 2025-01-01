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
    long long n, a, b, c, res;
    cin >> n >> a >> b >> c;
    long long sum = a + b + c;
    long long div = n / sum;

    res = 3 * div;

    if (div * sum == n)
    {
        cout << res << nl;
        return;
    }

    if (div * sum + a >= n)
    {
        res++;
        cout << res << nl;

        return;
    }
    if (div * sum + a + b >= n)
    {
        res += 2;
        cout << res << nl;

        return;
    }

    cout << res + 3 << nl;
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