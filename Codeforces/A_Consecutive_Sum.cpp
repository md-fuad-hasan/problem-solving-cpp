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
    int arr[n];
    for (auto &a : arr)
        cin >> a;
    for (int i = 0; i < k; i++)
    {
        for (int j = i + k; j < n; j += k)
        {
            arr[i] = max(arr[i], arr[j]);
        }
    }
    long long sum = 0;
    for (int i = 0; i < k; i++)
    {
        sum += arr[i];
    }
    cout << sum << nl;

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