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
    int arr[n + 1], check[n + 1];
    vector<int> v;

    for (int i = 1; i <= n; i++)
    {
        check[i] = 0;
    }

    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
        check[arr[i]] = 1;
    }

    for (int i = 1; i <= n; i++)
    {
        if (check[i] == 0)
        {
            v.push_back(i);
        }
    }

    int j = 0;
    for (int i = 1; i <= n; i++)
    {
        if (check[arr[i]] == 1)
        {
            cout << arr[i] << " ";
            check[arr[i]] = 2;
        }
        else
        {
            cout << v[j] << " ";
            j++;
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