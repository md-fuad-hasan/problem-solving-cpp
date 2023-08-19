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
   string str;cin>>str;
   unordered_map<string,int> um;

   for(int i=0;i<n-1;i++){
    string s = str.substr(i,2);
     
     if(i+3<=n){
        if(str[i]==str[i+1] && str[i+1]==str[i+2] && str[i+2]!=str[i+3]){
            continue;
        }
    }
    um[s]++;

    if(um[s]>1){
        cout<<"YES"<<nl;
        return;
    }
    


   }

   cout<<"NO"<<nl;
 
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