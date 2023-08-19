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
   int arr[n];


   for(int i=0;i<n;i++){
        cin>>arr[i];
   }

   int maxi= *max_element(arr,arr+n);
   int mini= *min_element(arr,arr+n);
    ll ans;
   if(maxi-mini==0){
    ans = n*(n-1);
    cout<<ans<<nl;
    return;
   }

   ll l=count(arr,arr+n,mini);
   ll h=count(arr,arr+n,maxi);
   ans = 2*l*h;
   cout<<ans<<nl;

 
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