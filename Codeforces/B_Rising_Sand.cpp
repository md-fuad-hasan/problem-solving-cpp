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
   vi v(n);

   for(auto &a:v)cin>>a;
    int cnt = 1;
   if(k==1){
    n-=3;
    cnt+=n/2;
    cout<<cnt<<nl;
    return;
   }
    cnt =0;
   for(int i=1;i<n-1;i++){
    if(v[i]>v[i-1]+v[i+1]){
        cnt++;
    }
   }

   cout<<cnt<<nl;
 
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