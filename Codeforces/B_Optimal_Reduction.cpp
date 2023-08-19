#include<bits/stdc++.h>
using namespace std;
 
 
void solve()
{
   int n;cin>>n;
   int arr[n];
   int m,maxi = 0;
   for(int i=0;i<n;i++){
    cin>>arr[i];
    if(arr[i]>maxi){
        maxi = arr[i];
        m=i;
    }
   }
   for(int i=0;i<m;i++){
    if(arr[i]>arr[i+1]){
        cout<<"NO"<<endl;
        return;
    }
   }
    for(int i=m;i<n-1;i++){
    if(arr[i]<arr[i+1]){
        cout<<"NO"<<endl;
        return;
    }
   }
   cout<<"YES"<<endl;
 
   return;
}
 
 
 
int main()
{
    int test = 1;
    cin>>test;
    while(test--){
        solve();
    }
    return 0;
}