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
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    bool isZero = false, isNonZero = false;

    for (int i = 0; i < n; i++)
    {

        if (a[i] != 0)
        {
            isNonZero = true;
        }
        if (a[i] == 0 && isNonZero)
        {
            isZero = true;
        }
        else if (isZero && isNonZero)
        {
            cout << 2 << nl;
            return;
        }
    }
    if (!isNonZero)
    {
        cout << 0 << nl;
        return;
    }
    cout << 1 << nl;

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