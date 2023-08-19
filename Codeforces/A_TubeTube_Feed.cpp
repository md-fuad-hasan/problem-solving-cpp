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
   int n,k;cin>>n>>k;
   int mx = 0;
   vector<int> v;
   for(int i=0;i<n;i++){
    int a;cin>>a;
    v.push_back(a+i);
   }
   int ans = -1;
   for(int i=0;i<n;i++){
    int b;cin>>b;
    if(k>=v[i]){
        if(mx<b){
            mx = b;
            ans = i+1;
        }
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