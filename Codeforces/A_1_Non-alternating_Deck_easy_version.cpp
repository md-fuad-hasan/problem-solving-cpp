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
   int n;cin>>n;
   int alice=1,bob=0;
   bool a=false;
   int i=1;
   n--;
   while(n>0){
    if(a){
        alice+=min(n,2*i+3);
        a=false;
    }
    else{
        bob+=min(n,2*i+3);
        a=true;
    }
    
    n=n-2*i-3;
    i+=2;
  

   }

   cout<<alice<<' '<<bob<<nl;
 
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