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
   int n,m,d;
   cin>>n>>m>>d;
    int arr[m];
    for(auto &a: arr)cin>>a;
    int cnt =0,cn=0,mx=0;
    int total = 0;
    for(int i=0;i<m;i++){
        
        if(i==0){
            int temp = arr[i]-2;
            cnt+=temp/d;
            cnt++;
        }
        if(i+1==m){
            cnt += (n-arr[i])/d;
        }
        else{
            
        }
        
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