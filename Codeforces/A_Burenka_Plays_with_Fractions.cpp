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
#define ll long long int
#define f(i,a,n) for(ll i=a;i<n;i++)
#define nl "\n" 
 
 
void solve()
{
   int a,b,c,d;cin>>a>>b>>c>>d;
   int g1 = __gcd(a,b);
   int g2 = __gcd(c,d);
   if(a==0 && c==0){
    cout<<0<<nl;
    return;
   }
   if((a==0 && c!=0 ) || (a!=0 && c==0)){
        cout<<1<<nl;
        return;
   }
   a/=g1;b/=g1;c/=g2;d/=g2;
   if(a==c && b==d){
    cout<<0<<nl;
    return;
   }
   if((a%c==0 && d%b==0) || (c%a==0 && b%d==0)){
    cout<<1<<nl;
    return;
   }
   cout<<2<<nl;
   
 
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