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

   int mx = *max_element(arr,arr+n);

   vi v;

   int cnt = 0;

   for(int i=0;i<n;i++){
    if(arr[i]!=mx){
        cnt++;
        v.push_back(arr[i]);
    }
   }

   if(cnt==0){
    cout<<-1<<nl;
    return;
   }

    cout<<cnt<< ' '<<n-cnt<<nl;
    for(auto &a:v){
        cout<<a<<' ';
    }
    cout<<nl;

    for(int i=1;i<=n-cnt;i++){
        cout<<mx<<' ';
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