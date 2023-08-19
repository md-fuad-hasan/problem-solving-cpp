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
#define f(i,a,n) for(int i=a;i<n;i++)
#define nl "\n" 
 
 
void solve()
{
   int n;cin>>n;
   n/=2;
   if(n%2){
    cout<<"NO"<<nl;
    return;
   }
   cout<<"YES"<<nl;
   f(i,1,n+1){
    cout<<i*2<<' ';
   }
   f(i,1,n){
    cout<<(i*2)-1<<' ';
   }
   cout<<3*n-1<<nl;
 
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