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
   for(auto &a:arr){
    cin>>a;
   }

    vi v;
    v.push_back(arr[0]);
   for(int i=1;i<n;i++){
    if(arr[i]>=arr[i-1]){
        v.push_back(arr[i]);
    }else{
        v.push_back(arr[i]);
        v.push_back(arr[i]);
    }
   }

   cout<<v.size()<<nl;
   for(auto &val:v){
    cout<<val<<' ';
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