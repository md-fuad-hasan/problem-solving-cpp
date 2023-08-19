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
   ll n;
   cin>>n;
   vector<ll>v;
   for(int i=0;i<n;i++){
    ll a;cin>>a;
    v.push_back(a);
   }

    sort(v.begin(),v.end());

    ll mx = max(v[0]*v[1],v[v.size()-1]*v[v.size()-2]);

    cout<<mx<<nl;

 
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