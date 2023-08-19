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
   for(auto &it:a)cin>>it;
   int b[n];
   for(auto &it:b)cin>>it;
   int an = a[n-1];
   int bn = b[n-1];
  

   for(int i=n-2;i>=0;i--){
        if(a[i]<=an && b[i]<=bn){
            continue;
        }
        else if(a[i]<=bn && b[i]<=an){
            continue;
        }
        else{
            cout<<"No"<<nl;
            return;
        }
   }

    cout<<"Yes"<<nl;
 
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