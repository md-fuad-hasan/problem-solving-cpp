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
   int n,m;cin>>n>>m;
   int cnt=0;
   for( int i=0;i<=min(n,m);i++){
    for( int j=0;j<=min(n,m);j++){
        if(i*i + j ==n && i+j*j == m){
            cnt++;
        }

    }
   }
   cout<<cnt<<nl;
 
   return;
}
 
 
 
int main()
{
 
    FastIO
    int test = 1;
   // cin>>test;
    while(test--){
        solve();
    }
    return 0;
}