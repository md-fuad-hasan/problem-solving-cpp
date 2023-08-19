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
   vector<int>v[n];
   f(i,0,n){
    int m;cin>>m;
    f(j,0,m){
        int a;cin>>a;
        v[i].push_back(a);
    }
   }

   unordered_map<int,int>mp;
    vector<int>ans;
    for(int i=n-1;i>=0;i--){
        int m = v[i].size();
        int t=0;
        for(int j=0;j<m;j++){
            if(mp.find(v[i][j])==mp.end()){
                if(t==0){
                    ans.push_back(v[i][j]);
                    t=1;
                }
                mp[v[i][j]]++;

            }
        }
    }
    int k=ans.size();
    if(k!=n){
        cout<<-1<<nl;
        return;
    }
    for(int i=k-1;i>=0;i--){
        cout<<ans[i]<<' ';
    }
    cout<<nl;

    

 
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