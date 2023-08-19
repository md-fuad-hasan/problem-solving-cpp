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
   int n;cin>>n;
   vector<int> v(4);
   for(int i=1;i<=3;i++){
    cin>>v[i];
   }
   int i=2;
   while(i--){
   if(!v[n]){
    cout<<"NO"<<nl;
    return;
   }
   if(v[v[n] ]==v[n]){
    cout<<"NO"<<nl;
    return;
   }
   n=v[n];

   }
   cout<<"YES"<<nl;
 
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