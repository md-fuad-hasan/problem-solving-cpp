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
   int arr[n][n];

   for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        cin>>arr[i][j];
    }
   }

   int m = n/2;
    int cnt = 0;
   for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        if(arr[i][j] != arr[n-1-i][n-1-j]){
            cnt++;
        }
    }
   }
   if(n&1){
    for(int i=0;i<n/2;i++){
        if(arr[n/2][i]!=arr[n/2][n-1-i]){
            cnt++;
        }
    }
   }
   if(k<cnt){
    cout<<"NO"<<nl;
    return;
   }
   k-=cnt;

    if(n&1){
        cout<<"YES"<<nl;
        return;
    }

   (k&1) ? cout<<"NO"<<nl : cout<<"YES"<<nl;

 
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