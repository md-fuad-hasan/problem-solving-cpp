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
    string str;
    cin >> str;

    for (int i = str.size() - 1; i >= 0; i--)
    {
        if (str[i] == 'p')
        {
            cout << 'q';
        }
        else if (str[i] == 'q')
        {
            cout << 'p';
        }
        else
        {
            cout << 'w';
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