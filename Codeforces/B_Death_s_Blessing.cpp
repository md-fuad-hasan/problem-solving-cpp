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
   int n;cin>>n;
   vector<ll>b;
   ll sum = 0;

   f(i,0,n){
    ll x;cin>>x;
    sum+=x;
   }
   f(i,0,n){
    ll x;cin>>x;
    b.push_back(x);
    sum+=x;
   }
   
   auto mx = *max_element(b.begin(),b.end());


   

   sum-=mx;
   cout<<sum<<nl;
   
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