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
   int n,x;cin>>n>>x;
   int mx = 0;
   int sum = 0;
   f(i,0,n){
    int a;cin>>a;
    mx = max(mx,a);
    sum+=a;
   }

   int sm = mx*(mx+1)/2;
   int dif = sm - sum;
   
   while(1){
    if(dif>x){
        cout<<"NO"<<nl;
        return;
    }
    if(dif==x){
        cout<<"YES"<<nl;
        return;
    }
    
    mx++;
    dif+=mx;
   }
 
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