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
   int z=0,o=0,one=0;
   f(i,0,n){
    int a;cin>>a;
    if(a==0)z++;
    else if(a==1)one++;
    else if (a!=0 && a!=1)o++;
   }
  
   if(z<=(n+1)/2){
    cout<<0<<nl;
    return;
   }
   if(o>0 ||  one==0){
    cout<<1<<nl;
    return;
   }
  cout<<2<<nl;
 
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