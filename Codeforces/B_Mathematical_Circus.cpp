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
   int n,k;cin>>n>>k;
   if(k%4==0){
    cout<<"NO"<<nl;
    return;
   }
   cout<<"YES"<<nl;
   if(k&1){
    for(int i=1;i<=n;i+=2){
        cout<<i<<' '<<i+1<<nl;
    }
    return;
   }
   vector<int> v;
   int j,i=4;
   while(i<=n){
    if(i%4==0){
        v.push_back(i);
    }
    i+=4;
   }
   j=1;
   for( i=0;i<v.size();i++){
        cout<<j<<' '<<v[i]<<nl;
        j+=2;
   }
   for(int i = 2;i<=n;i+=4){
        cout<<i<<' '<<j<<nl;
        j+=2;
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