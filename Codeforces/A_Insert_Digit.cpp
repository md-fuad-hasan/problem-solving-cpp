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
   int n,m;cin>>n>>m;
   string str;cin>>str;
    
  bool c = false;
   for(int i=0;i<=str.size();i++){
    int a = str[i]-'0';
 
    if((a<m && !c)|| (i==n && !c)){
        cout<<m;
        c=true;
        continue;
    }
    if(c){
        cout<<str[i-1];
    }
    else{
        cout<<str[i];
    }
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