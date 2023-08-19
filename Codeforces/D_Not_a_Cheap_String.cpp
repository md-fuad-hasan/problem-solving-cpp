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
   int n;cin>>n;

    string st = str;
   sort(str.begin(), str.end());
 
 
   ll s=0;
   int cnt=0;
   map<char,int> mp;

   for(int i=0;i<str.size();i++){
    s+=str[i]-96;
    if(s>n){
        mp[str[i]]++;
    }

   }
   
   for(int i=0;i<st.size();i++){
    if(mp[st[i]]){
        mp[st[i]]--;
        continue;
    }
    cout<<st[i];

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