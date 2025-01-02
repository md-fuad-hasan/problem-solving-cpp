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
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int m = n - 2;

    sort(arr, arr + n);
    int l = 0, r = n - 1;
    while (l < r)
    {
        int mul = arr[l] * arr[r];
        if (mul == m)
        {
            cout << arr[l] << " " << arr[r] << nl;
            return;
        }
        else if (mul < m)
        {
            l++;
        }
        else
        {
            r--;
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