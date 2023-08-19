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
   int l=0,r=0;
   for(int i=0;i<n;i++){
    if(str[i]=='L' && i+1<n && str[i+1]=='R'){
        cout<<i+1<<nl;
        return;
    }
    if(str[i]=='L'){
        l++;
    }
    else if(str[i]=='R'){
        r++;
    }
   }
   if(l==0 || r==0){
    cout<<-1<<nl;
    return;
   }
   cout<<0<<nl;
 
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