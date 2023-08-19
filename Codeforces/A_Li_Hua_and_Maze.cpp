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
   int m,n;cin>>m>>n;
   int a,b,c,d;cin>>a>>b>>c>>d;
   if((a==1 && b==1) || (a==1 && b==n) || (a==m && b==1) || (a==m && b==n)||(c==1 && d==1)||(c==1 && d==n)||(c==m && d==1) || (c==m && d==n)){
        cout<<2<<nl;
        return;
   }
   if(a==1 || a==m || b==1 || b==n || c==1 || c==m || d==1 || d==n){
    cout<<3<<nl;
    return;
   }

   cout<<4<<nl;
 
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