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
   int n,k;cin>>n>>k;
    vector<ll> v;
    ll sum = 0;
    for(int i=0;i<n;i++){
        ll a;cin>>a;v.push_back(a);
        sum+=a;
    }
    sort(v.begin(),v.end());
    for(int i=0;i<k;i++){
        if(v[0]+v[1]<v[v.size()-1]){
            sum-=v[0];
            sum-=v[1];
            v.erase(v.begin());
            v.erase(v.begin());
        }
        else{
            sum-=v[v.size()-1];
            v.pop_back();
        }
    }

    cout<<sum<<nl;
 
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