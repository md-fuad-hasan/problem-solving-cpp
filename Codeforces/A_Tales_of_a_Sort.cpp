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
    bool sorted = true;
    int mx = arr[0];

    for(int i=0;i<n;i++){
        
        if(i>0){
            if(arr[i]<arr[i-1]){
                sorted = false;
                if(arr[i-1]>mx){
                    mx=arr[i-1];
                }
            }
        }
    }
    (sorted)? cout<<0<<nl :cout<<mx<<nl;
 
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