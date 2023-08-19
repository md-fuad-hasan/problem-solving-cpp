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

    int arr[n];
    for(auto &a:arr)cin>>a;

    int t = 0;

    for(int i=0;i<n;i++){
        int m = abs(arr[i]-i-1);
        if(m%k != 0)t++;
    }

    if(t==0){
        cout<<0<<nl;
    }
    else if(t==2){
        cout<<1<<nl;
    }
    else{
        cout<<-1<<nl;
    }
 
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