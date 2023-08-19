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
   int arr[n][n-1];
   unordered_map<int,int>m;
   for(int i=0;i<n;i++){
    f(j,0,n-1){
        cin>>arr[i][j];
        if(j==0){
            m[arr[i][j]]++;
        }
    }
   }
  

    int maxi = 0;
    int zero;
   for(auto it:m){
    if(maxi<it.sc){
    maxi=it.sc;
    zero=it.fi;
    }
   }

    int temp=0;
   for(int i=0;i<n;i++){
    if(arr[i][0]!=zero){
        temp=i;
    }
   }


   cout<<zero<<' ';
   for(int i=0;i<n-1;i++){
    cout<<arr[temp][i]<<' ';
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