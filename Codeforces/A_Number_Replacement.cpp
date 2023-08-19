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
   unordered_map<int,char>mp;
   vi v;
    int n;cin>>n;
    for(int i=0;i<n;i++){
        int a;cin>>a;
        v.push_back(a);
    }
    string str;cin>>str;
    for(int i=0;i<n;i++){
        if(mp.find(v[i]) == mp.end()){
            mp[v[i]]=str[i];
        }
        else if(mp[v[i]]!=str[i]){
            cout<<"NO"<<nl;
            return;
        }
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