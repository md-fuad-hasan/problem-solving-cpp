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
   int n;cin>>n;
   vector<int>v(n);
   vector<bool>b(n+5, false);
   for(int i=0;i<n;i++){
    cin>>v[i];
   }
   reverse(v.begin(),v.end());
   for(int i=0;i<n;i++){
    if(b[v[i]]){
        cout<<n-i<<nl;
        return;
    }
    else{
        b[v[i]] = true;
    }
   }
   cout<<0<<nl;
 
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