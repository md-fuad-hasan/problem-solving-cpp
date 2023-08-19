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
   ll n;cin>>n;
   ll sum = n*(n-1)/2;
   ll sub = sum % n;
   (sub!=0)?sub = n-sub: sub=0;

   for(int i=1;i<=n;i++){
    if(i==1){
        cout<<1+sub<<" ";
        continue;
    }

    cout<<i<<' ';
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