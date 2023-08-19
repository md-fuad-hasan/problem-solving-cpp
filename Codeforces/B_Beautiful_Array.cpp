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
#define ll long long int
#define f(i,a,n) for(ll i=a;i<n;i++)
#define nl "\n" 
 
 
void solve()
{
   ll n,k,b,s;cin>>n>>k>>b>>s;

    if(s>(k*b)+n*(k-1) || k*b>s){
        cout<<-1<<nl;
        return;
    }

    ll a = k*b;
    a=s-a;
    vector<ll> vl(n);
    ll mod = b%n;
    ll div = b/n;
    mod--;
    for(int i=0;i<n;i++){
        if(mod>=i){
            div++;  
        }
        vl[i]=div*k;
        if(a>k-1){
            vl[i]+=k-1;
            a=a-k+1;
        }
        else{
            vl[i]+=a;
            a=0;
        }
         if(mod>=i){
            div--;  
        }

    }
    for(auto val:vl)cout<<val<<" ";cout<<nl;
 
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