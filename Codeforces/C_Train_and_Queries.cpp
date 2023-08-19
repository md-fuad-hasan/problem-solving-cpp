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
   int n,q;cin>>n>>q;
   map <int,vector<int> > mp;

   for(int i=1;i<=n;i++){
    int a;cin>>a;
    mp[a].push_back(i);

   }

   while(q--){
    int a,b;cin>>a>>b;

    if(mp[a].size()==0 || mp[b].size()==0){
        cout<<"NO"<<nl;
        continue;
    }

    if(mp[a][0] <= mp[b][mp[b].size()-1]){

        cout<<"YES"<<nl;
        continue;
    }
   cout<<"NO"<<nl;

    
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