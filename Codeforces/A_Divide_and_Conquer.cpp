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
   vi o;
   vi e;
   for(int i=0;i<n;i++){
    int a;cin>>a;
    if(a&1){
        o.push_back(a);
    }else{
        e.push_back(a);
    }
   }
   if(o.size()%2==0){
    cout<<0<<nl;
    return;
   }
   int mini = 1e7;
   for(int i=0;i<o.size();i++){
    int cnt=0;
    while(o[i]&1){
    
        o[i]/=2;
        cnt++;
    }
    mini = min(mini,cnt);
   }
 

   for(int i=0;i<e.size();i++){
    int cnt=0;
    while(e[i]%2 == 0){
     
        e[i]/=2;
        cnt++;
    }
  
    mini = min(mini,cnt);
   }

   cout<<mini<<nl;
 
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