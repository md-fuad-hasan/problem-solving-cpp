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
   int n,q;cin>>n>>q;
   ll arr[n];
   cin>>arr[0];
   f(i,1,n){
    ll a;cin>>a;
    arr[i] = a+arr[i-1];
   }
   while(q--){
        int l,r,m;cin>>l>>r>>m;
        ll s=0;
        (l>1)?s = arr[n-1] - arr[r-1]+arr[l-2]:s = arr[n-1] - arr[r-1];
        s+=(r-l+1)*m;
        
        (s&1)?cout<<"YES"<<nl : cout<<"NO"<<nl;
   }

 
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