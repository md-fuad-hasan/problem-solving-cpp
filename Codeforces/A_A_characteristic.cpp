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
   int n,k;cin>>n>>k;
   for(int i=0;i<=n;i++){
    int a = n-i;
    int b = i;
    a--;
    b--;
    int ans = (a*(a+1))/2+(b*(b+1))/2;
   
    if(ans==k){
        cout<<"YES"<<nl;
        for(int j=0;j<=a;j++){
            cout<<1<<' ';
        }
        for(int j=0;j<=b;j++){
            cout<<-1<<' ';
        }
        cout<<nl;
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