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

    int tr = 0, n = str.size();
    for (int i = 0; i < n; i++)
    {
        if (str[i] == '0')
        {
            tr = i;
            break;
        }
    }

    if (tr == 0)
    {
        cout << 1 << " " << 1 << " " << 1 << " " << n << nl;
        return;
    }
    int m = n - tr;
    long long unsigned int mx = 0, ind = 0;
    for (int i = 0; i < tr; i++)
    {
        long long unsigned int s = 0, x = 1;
        for (int j = i + m - 1; j >= i; j--)
        {
            if (str[j] != str[j + tr - i])
            {
                s += x;
                if (mx < s)
                {
                    mx = s;
                    ind = i;
                }
            }
            x *= 2;
        }
    }

    cout << ind + 1 << " " << ind + m << " " << 1 << " " << n << nl;

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