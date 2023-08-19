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
   multiset<ll>v;
   multiset<ll>:: iterator it;

    ll ans=0;
   for(int i=0;i<n;i++){
    int a;cin>>a;
    if(a!=0){
       v.insert(a);

    }
    else if(!v.empty()){
        it = v.end();
        it--;
        ll mx = *it;
        ans+=mx;
        v.erase(it);
    }
   }
 cout<<ans<<nl;
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