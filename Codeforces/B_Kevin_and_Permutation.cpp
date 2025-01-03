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
    int n, k;
    cin >> n >> k;

    if (k == 1)
    {
        int i = 1;
        while (i <= n)
        {
            cout << i << " ";
            i++;
        }

        cout << nl;
        return;
    }

    int temp = k - 1;
    int div = n / k;
    int i = 1, res = 1;
    ;
    for (int j = div + 1; j <= n; j++)
    {
        cout << j << " ";
        if (temp == i && res != div + 1)
        {
            cout << res << " ";
            res++;
            i = 0;
        }
        i++;
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