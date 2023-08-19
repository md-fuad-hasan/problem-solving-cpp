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
   
    ll arr[n], brr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> brr[i];
    }
   

    vector<ll> fire;
    vector<ll> frost;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            fire.push_back(brr[i]);
        }
        else
        {
            frost.push_back(brr[i]);
        }
    }

   

     sort(fire.begin(), fire.end(), greater<int>());
     sort(frost.begin(), frost.end(), greater<int>());

   

    ll sum = 0;

    if(fire.size()==0 || frost.size()==0){

        for (int i = 0; i < fire.size(); i++)
        {
            sum += fire[i];
        }
        for (int i =0; i < frost.size(); i++)
        {
            sum += frost[i];
        }

        cout << sum << nl;

        return;

    }

    for (int i = 0; i < min(fire.size(), frost.size()); i++)
    {
        sum += 2 * (fire[i] + frost[i]);
    }
    if(fire.size()==frost.size()){
         sum -= min(fire[fire.size()-1], frost[frost.size()-1]);
    }


    for (int i = min(fire.size(), frost.size()); i < fire.size(); i++)
    {
        sum += fire[i];
    }
    for (int i = min(fire.size(), frost.size()); i < frost.size(); i++)
    {
        sum += frost[i];
    }

    cout << sum << nl;

    return;
}

int main()
{

    FastIO 
    int test = 1;
    cin >> test;
    while (test--)
    {
        solve();
    }
    return 0;
}