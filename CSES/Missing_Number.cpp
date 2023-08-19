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
    vector<bool> v(n,true);
    f(i,0,n){
        int a;cin>>a;
        v[a-1]=false;

    }

    for(int i=0;i<n;i++){
        if(v[i]){
            cout<<i+1<<nl;
        }
    }
 
   return;
}
 
 
 
int main()
{
 
    FastIO
    int test = 1;
    // cin>>test;
    while(test--){
        solve();
    }
    return 0;
}