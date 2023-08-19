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
   int a,b;
   cin>>a>>b;
   a = abs(a);
   b = abs(b);
   int mini = min(a,b);
   int maxi = max(a,b);
   int ans = mini*2;
   int dif = maxi-mini;
   if(dif!=0) ans+=dif*2-1;

   
   

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