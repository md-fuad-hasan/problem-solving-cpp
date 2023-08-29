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
   ll n;cin>>n;
   ll mx = 1;
   ll cnt = 1;
    for(ll i=2;i*i<=n;i++){
        // if(n%(i-1) != 0 ){
        //     cnt = 0;
        // }
        // if(n%i==0 ){
        //     cnt++;
        //     mx = max(mx,cnt);
        // }

        
        
    }

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