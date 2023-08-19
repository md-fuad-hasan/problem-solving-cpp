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
   ll m,k,a,b;
   cin>>m>>k>>a>>b;
   
   ll sum1 =a;
   if(m>=k*b){
    sum1+=k*b;
   }else{
    ll div = m/k;
    sum1+=div*k;
   }
   if(m<=sum1){
    cout<<0<<nl;
    return;
   }

   m-=sum1;



   ll res = m/k;
   ll mod = m%k;
   
   if(mod>1 && k-mod<=a){
    res++;
   }else{
    res+=mod;
   }

   cout<<res<<nl;

 
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