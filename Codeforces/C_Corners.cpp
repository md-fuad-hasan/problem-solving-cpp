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
#define ll long long int
#define f(i, a, n) for (ll i = a; i < n; i++)
#define nl "\n"

void solve()
{
    int n, m;
    cin >> n >> m;
    int arr[n][m];
    bool flag = false;
    int cnt = 0;

    string str;
    bool flag1 = false, flag2 = false;

    for (int i = 0; i < n; i++)
    {
        cin >> str;
        for (int j = 0; j < m; j++)
        {
            int a;
            if (str[j] == '0')
                a = 0;
            else
                a = 1;
            arr[i][j] = a;
            if (arr[i][j] == 0)
            {
                flag = true;
            }
            else
            {
                cnt++;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr[i][j] == 0)
            {
               
                if (j + 1 < m)
                {
                    if (arr[i][j + 1]==0)
                    {
                        flag1 = true;
                    }
                }
                if (j - 1 > -1)
                {
                    if (arr[i][j - 1] == 0)
                    {
                        flag1 = true;
                    }
                }

                if (i + 1 < n)
                {
                   
                    if (arr[i + 1][j] == 0)
                        flag1 = true;

                    if (j + 1 < m)
                    {
                        if (arr[i + 1][j + 1] == 0)
                        {
                            flag1 = true;
                        }
                    }
                    if (j - 1 > -1)
                    {
                        
                        if (arr[i + 1][j - 1] == 0)
                        {
                            flag1 = true;
                           
                        }
                    }
                }

                if (i - 1 > -1)
                {
                    if (arr[i - 1][j] == 0)
                        flag1 = true;

                    if (j + 1 < m)
                    {
                        if (arr[i - 1][j + 1] == 0)
                        {
                            flag1 = true;
                        }
                    }
                    if (j - 1 > -1)
                    {
                        if (arr[i - 1][j - 1] == 0)
                        {
                            flag1 = true;
                        }
                    }
                }
            }
        }
    }

    if (cnt == 0)
    {
        cout << 0 << nl;
        return;
    }

    if (flag1)
    {
        cout << cnt << nl;
        return;
    }
    if (flag)
    {
        cout << cnt - 1 << nl;
        return;
    }
    cout << cnt - 2 << nl;

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