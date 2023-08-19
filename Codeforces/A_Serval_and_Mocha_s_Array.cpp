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
   int gd;

   for(int i=0;i<n-1;i++){
    for(int j=i+1;j<n;j++){
        if(__gcd(arr[i],arr[j])<=2){
            cout<<"Yes"<<nl;
            return;
        }
    }
   }
   cout<<"No"<<nl;
 
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