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
   string str;cin>>str;
   unordered_map<char,int> mp;

   for(int i=0;i<str.size();i++){
    mp[str[i]]++;
   }
   if(mp.size()<2){
        cout<<"NO"<<nl;
        return;
    }
   
    if(mp.size()==2){
        for(auto it:mp){
            if(it.second==1){
                cout<<"NO"<<nl;
                return;
            }
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