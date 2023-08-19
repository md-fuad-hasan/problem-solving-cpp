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
 
int power(int b,int n){
    int ans=b;
    for(int i=1;i<n;i++){
        ans*=b;
    }

    return ans;
}
 
void solve()
{
   int n;cin>>n;
   int a[n];
   int cnt=0;
   f(i,0,n){
    cin>>a[i];
   
    if(a[i]==2){
        cnt++;
    }
   }
   
   if(cnt&1){
    cout<<-1<<nl;
    return;
   }
   cnt/=2;
   
   int ans=0;
   f(i,0,n){
    if(a[i]==2){
        ans++;
    }
    if(ans==cnt){
        cout<<i+1<<nl;
        return;
    }
   }
   cout<<1<<nl;
 
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