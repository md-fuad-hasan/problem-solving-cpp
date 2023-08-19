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
   int arr[n];
   for(auto &a:arr)cin>>a;
    int one = 0,num=0;
    ll sum=0;
    if(n==1){
        cout<<"NO"<<nl;
        return;
    }
   f(i,0,n){
    if(arr[i]==1){
        one++;
    }else{
        sum+=arr[i]-1;

    }
   }

   sum = sum-one;

   (sum>=0)? cout<<"YES"<<nl : cout<<"NO"<<nl;
 
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