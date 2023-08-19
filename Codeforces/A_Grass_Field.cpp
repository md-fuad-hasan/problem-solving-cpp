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
   int a,b,c,d;cin>>a>>b>>c>>d;
   if(a==0 && b==0 && c==0 && d==0){
    cout<<0<<nl;
    return;
   }
   if(a==1 && d==1 && b==1 && c==1){
    cout<<2<<nl;
    return;
   }
   cout<<1<<nl;
 
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