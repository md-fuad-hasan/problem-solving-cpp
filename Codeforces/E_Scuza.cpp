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
   ll s[n];
   ll val [n];
   ll sum = 0;
   ll mx = 0;
   for(int i=0;i<n;i++){
    ll a;cin>>a;
        sum +=a;
        mx = max(mx,a);
        s[i]=sum;
        val[i]=mx;
   }
   
   
   for(int i=1;i<=q;i++){
    ll b;cin>>b;
   
    int k = upper_bound(val,val+n,b)-val;
     if(k==0){
        cout<<0<<' ';
        continue;
    }
    cout<<s[k-1]<<' ';
    
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