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
   int a,b,c;
   a = 10e6,b = 10e6,c = 10e6;
   for(int i=0;i<n;i++){
    int m ;cin>>m;
    string str;cin>>str;
    if(str[0]=='1'){
        a = min(a,m);
    }
    if(str[1]=='1'){
        b=min(b,m);
    }
    if(str[0]=='1' && str[1]=='1'){
        c = min(c,m);
    }
   }

   int ans = min(a+b,c);

   (ans==10e6) ? cout<<-1<<nl :  cout<<ans<<nl;
 
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