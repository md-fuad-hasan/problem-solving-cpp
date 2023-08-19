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
   int m = n*(n-1)/2;
   int arr[m];
   for(auto &a:arr)cin>>a;

   sort(arr,arr+m);
    int cnt = 0;
   for(int i=0;i<m;i++){
    cnt++;
    if(cnt==n-1){
        cout<<arr[i]<<' ';
        cnt = 0;
        n--;
    }
    
   }

   cout<<arr[m-1]<<nl;
   
 
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