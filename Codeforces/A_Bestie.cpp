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
 
int gd(int ar[],int n){

    int g= __gcd(ar[n-1],ar[n-2]);
   for(int i=n-3;i>=0;i--){
        g= __gcd(g,ar[i]);
   }
    return g;
} 
 
void solve()
{
   int n;cin>>n;
   int ar[n];
   for(auto &a:ar)cin>>a;
   

   if(n==1){
    if(ar[0]==1){
    cout<<0<<nl;return;
    }else{
        cout<<1<<nl;return;
    }
   }

    int g;
    g = gd(ar,n);
    
   if(g==1){
    cout<<0<<nl;
    return;
   }

    int last = ar[n-1];
    ar[n-1] = __gcd(n,ar[n-1]);
    g = gd(ar,n);

   if(g==1){
    cout<<1<<nl;
    return;
   }
   ar[n-1]=last;
   ar[n-2]= __gcd(n-1,ar[n-2]);
    g = gd(ar,n);

   if(g==1){
    cout<<2<<nl;
    return;
   }
   cout<<3<<nl;
 
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