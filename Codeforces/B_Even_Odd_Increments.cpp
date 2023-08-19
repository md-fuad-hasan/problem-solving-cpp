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
   ll n,q;cin>>n>>q;
   ll sum=0;
   ll o=0,e=0;

   for(int i=0;i<n;i++){
    ll a;cin>>a;
    sum+=a;
    (a&1)?o++:e++;
   }

   while(q--){
    ll a,b;cin>>a>>b;
    if(a==0){
         sum+=e*b;
        if(b&1){
             o+=e;
             e=0;
        } 
    }
    else{
        sum+=o*b;
        if(b&1){
            e+=o;
            o=0;
        }
    }

   cout<<sum<<nl;

    
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