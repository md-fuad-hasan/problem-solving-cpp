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
#define f(i,a,n) for(ll i=a;i<n;i++)
#define nl "\n" 
 
 
void solve()
{
   int n;cin>>n;
   int arr[n];
   for(auto &a:arr)cin>>a;
   int maxi = *max_element(arr,arr+n);
   int mini = *min_element(arr,arr+n);
   int m1 = count(arr,arr+n,maxi);
   int m2 = count(arr,arr+n,mini);
    int mini2 = 1000000000+5;
    int maxi2 = 0;
   for(int i=0;i<n;i++){
    if(arr[i]>maxi2 && arr[i]!=maxi){
        maxi2=arr[i];
    }
    if(mini2>arr[i] && arr[i]!=mini){
        mini2=arr[i];
    }
   }
   (m1<2)? m1 = maxi2: m1=maxi;
   (m2<2)? m2 = mini2 : m2=mini;
  
   cout<<maxi+m1-mini-m2<<nl;

 
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