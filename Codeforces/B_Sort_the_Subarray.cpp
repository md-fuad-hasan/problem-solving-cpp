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
   int a[n];
   int b[n];

   for(auto &it:a)cin>>it;
   for(auto &it:b)cin>>it;

    int check = 0;
    int t=0,t2=0;
   for(int i=0;i<n;i++){
    if(a[i]!=b[i]){
        if(check==0){
            t = i;
            check = 1;
        }
        t2 = i;
    }
   }
   for(int i=t-1;i>=0;i--){
    if(b[i]<=b[i+1]){
        t = i;
    }
    else{
        break;
    }
   }

   for(int i=t2+1;i<n;i++){
    if(b[i]>=b[i-1]){
        t2 = i;
    }
    else{
        break;
    }
   }

   cout<<t+1<<' '<<t2+1<<nl;
 
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