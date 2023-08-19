#include<bits/stdc++.h>
using namespace std;
#define FastIO ios_base::sync_with_stdio(0);cin.tie(NULL);
#define vi vector<ll>
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
   ll n;cin>>n;
   vi v(n);
   for(auto &a:v)cin>>a;
   ll cnt =0;
   bool flag=false;
  
   for(int i=0;i<n-1;i++){
    if(v[i]!=0){
        cnt+=v[i];
        flag = true;
    }
    if(v[i]==0 && flag){
        cnt++;
    }
   }
   cout<<cnt<<nl;
 
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