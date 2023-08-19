#include<bits/stdc++.h>
using namespace std;
#define FastIO ios_base::sync_with_stdio(0);cin.tie(NULL);
#define vi vector<int>
#define pi pair<int,int>
#define fi first
#define sc second
#define msi map<string,int>
#define mi map<int,int>
#define si set<int>
#define usi unordered_set<int>
#define ll long long
#define f(i,a,n) for(ll i=a;i<n;i++)
#define nl "\n" 
 
 
void solve()
{
   int n,k;cin>>n>>k;

    vector<pair<int,int> >vpr;

    for(int i=0;i<n;i++){
        int a;cin>>a;
        vpr.push_back({a,i});
    }

    sort(vpr.begin(),vpr.end());

   int brr[n];
   for(auto &a:brr)cin>>a;
    sort(brr,brr+n);

   int ans[n];
   for(int i=0;i<n;i++){
    ans[vpr[i].second]=brr[i];
   }

   for(int i=0;i<n;i++){
    cout<<ans[i]<<' ';
   }

   cout<<nl;
 
   return;
}
 
 
 
int main()
{
 
    FastIO
    int test = 1;
    cin>>test;
    while(test--){
        solve();
    }
    return 0;
}