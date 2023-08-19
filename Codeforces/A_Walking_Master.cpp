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
   c-=a;
   d-=b;
   a=0;
   b=0;
   int ans=0;
   if((0>d) || (c > d)){
    cout<<-1<<nl;
    return;
   }

   if(c>0){
    ans+=c+(d-c)*2;
    cout<<ans<<nl;
    return;
   }
   ans = a-c + d*2;
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